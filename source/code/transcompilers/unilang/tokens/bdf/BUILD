package(default_visibility = ["//visibility:public"])
load("//bazel/cookbook/hcp:main.bzl", "hcp")
load("//bazel/cookbook/unilang:generate_unilang_token_files.bzl", "generate_unilang_token_files")
load("//bazel/cookbook/cpp:object.bzl", "cpp_object")

hcp(
    name = "token_bdf_settings",
    deps = ["//code/utilities/bdf/settings:bdf_settings"]
)
hcp(
    name = "token_bdf_settings_getter",
    deps = ["//code/transcompilers/unilang/tokens/bdf:token_bdf_settings",
        "//code/utilities/bdf/glyph:glyphs",
        "//code/transcompilers/unilang/language-and-theme-creator/font:predefined_characters",
    ]
)