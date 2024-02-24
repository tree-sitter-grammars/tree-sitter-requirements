from pathlib import PurePath
from sys import platform

from tree_sitter import Language, Parser

try:
    from importlib.resources import files
    _highlights = (files(__package__) / 'queries' / 'highlights.scm').read_text()
except ImportError:
    from importlib.resources import read_text
    _highlights = read_text(__package__ + '.queries', 'highlights.scm')

_language = Language(
    PurePath(__file__).with_name('requirements').with_suffix(
        {'win32': '.dll', 'darwin': '.dylib'}.get(platform, '.so')
    ),
    'requirements'
)

_parser = Parser()
_parser.set_language(_language)

def parse(source):
    """Parse the given source code"""
    if isinstance(source, str):
        source = source.encode()
    return _parser.parse(source, keep_text=True)

def query(query, node):
    """Run an arbitrary query on the given source node"""
    return _language.query(query).captures(node)

def highlights(tree):
    """Return the highlight groups for the given source tree"""
    return query(_highlights, tree.root_node)
