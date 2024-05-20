// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterRequirements",
    products: [
        .library(name: "TreeSitterRequirements", targets: ["TreeSitterRequirements"]),
    ],
    dependencies: [],
    targets: [
        .target(
            name: "TreeSitterRequirements",
            path: ".",
            exclude: [
                "Cargo.toml",
                "Makefile",
                "binding.gyp",
                "bindings/c",
                "bindings/go",
                "bindings/node",
                "bindings/python",
                "bindings/rust",
                "prebuilds",
                "grammar.js",
                "package.json",
                "package-lock.json",
                "pyproject.toml",
                "setup.py",
                "test",
                ".editorconfig",
                ".github",
                ".gitignore",
                ".gitattributes",
            ],
            sources: [
                "src/parser.c",
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        )
    ],
    cLanguageStandard: .c11
)
