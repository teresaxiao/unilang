package(default_visibility = ["//visibility:public"])
load("//bazel/cookbook/hcp:main.bzl", "hcp")
load("//bazel/cookbook/cpp:object.bzl", "cpp_object")

hcp(name = "mermaid_exporter", deps = [
"//code/transcompilers/unilang/structure/model:structure",
"//code/transcompilers/unilang/contributor:contributor",
"//code/transcompilers/unilang/structure/model:inlined_structures",
"//code/transcompilers/unilang/options/language-specific:mermaid_settings",
"//code/utilities/types/strings/transformers/appending:lib",
"//code/utilities/converters:lib",
"//code/utilities/types/strings/observers/other:lib",
"//code/transcompilers/unilang/structure/print:struct_derivers",
"//code/utilities/types/strings/transformers/casing:case_modifier",
"//code/utilities/shell:lib",
"//code/utilities/filesystem/paths:lib",
"//code/transcompilers/unilang/options/manipulation:case_adjustment_settings",
"//code/transcompilers/unilang/structure/adjust:casing_adjuster",
"//code/utilities/types/vectors/observers:lib",
"//code/transcompilers/unilang/structure/adjust:structure_adjuster",
"//code/utilities/types/vectors/operators:lib",
"//code/utilities/types/char:lib",
])

hcp(name = "mermaid_settings_getter", deps = [
"//code/transcompilers/unilang/options/language-specific:mermaid_settings",
])