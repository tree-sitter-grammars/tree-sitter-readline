package tree_sitter_readline_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-readline"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_readline.Language())
	if language == nil {
		t.Errorf("Error loading Readline grammar")
	}
}
