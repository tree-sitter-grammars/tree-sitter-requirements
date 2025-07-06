import XCTest
import SwiftTreeSitter
import TreeSitterRequirements

final class TreeSitterRequirementsTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_requirements())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading pip requirements grammar")
    }
}
