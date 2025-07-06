package tree_sitter_requirements_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_requirements "github.com/tree-sitter-grammars/tree-sitter-requirements/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_requirements.Language())
	if language == nil {
		t.Errorf("Error loading pip requirements grammar")
	}
}
