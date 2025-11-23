import XCTest
import SwiftTreeSitter
import TreeSitterReadline

final class TreeSitterReadlineTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_readline())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading GNU Readline grammar")
    }
}
