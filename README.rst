========================
tree-sitter-requirements
========================

.. image:: https://badgen.net/github/checks/ObserverOfTime/tree-sitter-requirements?label=CI&icon=github
   :target: https://github.com/ObserverOfTime/tree-sitter-requirements/actions/workflows/ci.yml
   :alt: CI

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


References
----------

* `Requirements File Format <https://pip.pypa.io/en/stable/reference/requirements-file-format/>`_
* `Dependency Specifiers <https://packaging.python.org/en/latest/specifications/dependency-specifiers/>`_
* `Version Specifiers <https://packaging.python.org/en/latest/specifications/version-specifiers/>`_
* `VCS Support <https://pip.pypa.io/en/stable/topics/vcs-support/>`_

Editors
-------

| |c| Neovim
| |u| Helix
| |u| Emacs

.. |u| unicode:: U+00A0 U+00A0 U+2610
.. |c| unicode:: U+00A0 U+00A0 U+2611


Changelog
---------

v0.1.5
^^^^^^

* Resolve ``_version_list`` conflict
* Fix inline comments

v0.1.4
^^^^^^

* Make URL scheme case-insensitive

v0.1.3
^^^^^^

* Support per-requirement options
* Parse paths and URLs in options

v0.1.2
^^^^^^

* Support environment variables in URLs

v0.1.1
^^^^^^

* Fix environment markers
