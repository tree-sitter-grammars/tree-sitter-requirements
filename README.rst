========================
tree-sitter-requirements
========================

A tree-sitter parser for pip requirements files.

Python package
--------------

Installation
^^^^^^^^^^^^

.. code-block:: bash

   pip install tree-sitter-requirements


Usage
^^^^^

.. code-block:: python

   import tree_sitter_requirements as requirements

   with open('requirements.txt', 'r') as mf:
      # parse a requirements.txt file
      tree = requirements.parse(mf.read())
      # get the highlight groups
      hl_groups = requirements.highlights(tree)
      # run an arbitrary query
      packages = requirements.query("""
      (requirement (package) @package)
      """, tree.root_node)
