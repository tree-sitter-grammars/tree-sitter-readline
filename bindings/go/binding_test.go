package tree_sitter_readline_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_readline "github.com/tree-sitter-grammars/tree-sitter-readline/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_readline.Language())
	if language == nil {
		t.Errorf("Error loading GNU Readline grammar")
	}
}
