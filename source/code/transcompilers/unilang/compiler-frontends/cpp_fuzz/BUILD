package(default_visibility = ["//visibility:public"])
load("//bazel/cookbook/hcp:main.bzl", "hcp")
load("//bazel/cookbook/cpp:object.bzl", "cpp_object")

hcp(name = "cpp_fuzz_exporter", deps = [
"//code/transcompilers/unilang/structure/model:structure",
"//code/transcompilers/unilang/contributor:contributor",
"//code/transcompilers/unilang/options/language-specific:cpp_fuzz_export_settings",
"//code/transcompilers/unilang/structure/model/sections:structure_enums",
"//code/transcompilers/unilang/parser/body_parser:body_token_parser",
"//code/utilities/types/strings/transformers/appending:lib",
"//code/utilities/converters:lib",
"//code/utilities/types/strings/observers/other:lib",
"//code/transcompilers/unilang/structure/model:inlined_structures",
])