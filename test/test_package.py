#!/usr/bin/env python3

import unittest as test

import tree_sitter_requirements as req

class TestPackage(test.TestCase):
    def setUp(self) -> None:
        self.source = b'tree-sitter ~= 0.20'
        self.tree = req.parse(self.source)

    def test_parse(self):
        nodes = self.tree.root_node.named_children
        self.assertEqual(len(nodes), 1)
        self.assertEqual(nodes[0].type, 'requirement')
        self.assertEqual(nodes[0].text, self.source)

    def test_query(self):
        query = '(version_spec (version) @version)'
        captures = req.query(query, self.tree.root_node)
        self.assertEqual(len(captures), 1)
        self.assertEqual(captures[0][1], 'version')
        self.assertEqual(captures[0][0].text, b'0.20')

    def test_highlights(self):
        captures = req.highlights(self.tree)
        self.assertEqual(len(captures), 3)
        self.assertEqual(captures[0][1], 'variable')
        self.assertEqual(captures[0][0].type, 'package')
        self.assertEqual(captures[1][1], 'operator')
        self.assertEqual(captures[1][0].type, 'version_cmp')
        self.assertEqual(captures[2][1], 'number')
        self.assertEqual(captures[2][0].type, 'version')

if __name__ == '__main__':
    test.main(verbosity=2)
