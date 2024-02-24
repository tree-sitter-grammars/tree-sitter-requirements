========================
tree-sitter-requirements
========================

|CI| |discord| |matrix| |pypi|

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

   with open('requirements.txt', 'r') as rf:
      # parse a requirements.txt file
      tree = requirements.parse(rf.read())
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
| |u| Zed

.. |u| unicode:: U+00A0 U+00A0 U+2610
.. |c| unicode:: U+00A0 U+00A0 U+2611


Changelog
---------

v0.3.1
^^^^^^

* Replace deprecated resource API

v0.3.0
^^^^^^

* Change bindings layout

v0.2.0
^^^^^^

* Move to ``tree-sitter-grammars`` org

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

.. |CI| image:: https://img.shields.io/github/actions/workflow/status/tree-sitter-grammars/tree-sitter-requirements/test.yml?logo=github&label=CI
   :target: https://github.com/tree-sitter-grammars/tree-sitter-requirements/actions/workflows/test.yml
   :alt: CI

.. |discord| image:: https://img.shields.io/discord/1063097320771698699?logo=discord&label=discord
   :target: https://discord.gg/w7nTvsVJhm
   :alt: discord

.. |matrix| image:: https://img.shields.io/matrix/tree-sitter-chat%3Amatrix.org?logo=matrix&label=matrix
   :target: https://matrix.to/#/#tree-sitter-chat:matrix.org
   :alt: matrix

.. |pypi| image:: https://img.shields.io/pypi/v/tree-sitter-requirements?logo=pypi&logoColor=ffd242
   :target: https://pypi.org/project/tree-sitter-requirements/
   :alt: pypi
