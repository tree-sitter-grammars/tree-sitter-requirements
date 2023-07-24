#!/usr/bin/env python3

from pathlib import Path
from shutil import copy
from sys import platform

from setuptools import Extension, setup
from setuptools.command.build_ext import build_ext
from wheel.bdist_wheel import bdist_wheel

from tree_sitter import Language

class BuildExt(build_ext):
    def finalize_options(self):
        super().finalize_options()
        self._ts_lib = Path(self.build_lib).joinpath(
            'tree_sitter_requirements', 'requirements'
        ).with_suffix('.dll' if platform == 'win32' else '.so')

    def copy_extensions_to_source(self):
        new_file = Path(__file__).parent.joinpath(
            'src', 'tree_sitter_requirements', self._ts_lib.name
        )
        copy(self._ts_lib, new_file)

    def build_extension(self, _):
        Language.build_library(str(self._ts_lib), [''])


class BdistWheel(bdist_wheel):
    def get_tag(self):
        python, abi, plat = super().get_tag()
        if python.startswith('cp'):
            python, abi = 'cp37', 'abi3'
        if plat.endswith('universal2'):
            python = 'cp38'
        return python, abi, plat


setup(
    packages=[
        'tree_sitter_requirements',
        'tree_sitter_requirements.queries'
    ],
    package_dir={'': 'src'},
    ext_modules=[
        Extension(
            name='tree_sitter_requirements',
            sources=['requirements'],
            py_limited_api=True
        )
    ],
    cmdclass={
        'bdist_wheel': BdistWheel,
        'build_ext': BuildExt
    }
)
