from pathlib import PurePath
from pkg_resources import resource_filename
from sys import platform

from tree_sitter import Language, Parser

_language = Language(
    PurePath(__file__).with_name('requirements') \
        .with_suffix('.dll' if platform == 'win32' else '.so'),
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
    res = resource_filename(__package__, 'queries/highlights.scm')
    with open(res, 'r') as hl:
        return query(hl.read(), tree.root_node)
