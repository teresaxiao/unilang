package(default_visibility = ["//visibility:public"])
load("//bazel/cookbook/hcp:main.bzl", "hcp")
load("//bazel/cookbook/cpp:object.bzl", "cpp_object")

hcp(name = "markdown_exporter", deps = [
"//code/transcompilers/unilang/structure/model:structure",
"//code/transcompilers/unilang/contributor:contributor",
"//code/transcompilers/unilang/structure/model:inlined_structures",
"//code/transcompilers/unilang/options/language-specific/markdown:markdown_settings",
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
"//code/transcompilers/unilang/doxygen_block_printer:grammar_adjuster",
"//code/transcompilers/unilang/compiler-frontends/markdown:markdown_str_getter",
])

hcp(name = "markdown_str_getter", deps = [
"//code/transcompilers/unilang/structure/model:structure",
"//code/transcompilers/unilang/contributor:contributor",
"//code/transcompilers/unilang/structure/model:inlined_structures",
"//code/transcompilers/unilang/options/language-specific/markdown:markdown_settings",
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
"//code/transcompilers/unilang/doxygen_block_printer:grammar_adjuster",
"//code/utilities/time/date:lib",
"//code/utilities/types/strings/observers/converting:lib",
"//code/transcompilers/unilang/compiler-frontends/markdown:markdown_header_getter",
"//code/transcompilers/unilang/compiler-frontends/markdown:markdown_image_getter",
"//code/transcompilers/unilang/compiler-frontends/markdown:markdown_title_getter",
"//code/transcompilers/unilang/compiler-frontends/markdown:markdown_sentence_extra_getter",
])

hcp(name = "markdown_settings_getter", deps = [
"//code/transcompilers/unilang/options/language-specific/markdown:markdown_settings",
])



hcp(name = "markdown_header_getter", deps = [
"//code/transcompilers/unilang/structure/model:structure",
"//code/transcompilers/unilang/contributor:contributor",
"//code/transcompilers/unilang/structure/model:inlined_structures",
"//code/transcompilers/unilang/options/language-specific/markdown:markdown_settings",
"//code/utilities/types/strings/transformers/appending:lib",
"//code/utilities/converters:lib",
"//code/utilities/types/strings/observers/other:lib",
"//code/utilities/types/vectors/observers:lib",
"//code/utilities/types/vectors/operators:lib",
"//code/utilities/types/char:lib",
"//code/utilities/types/strings/observers/converting:lib",
])

hcp(name = "markdown_image_getter", deps = [
"//code/transcompilers/unilang/structure/model:structure",
"//code/transcompilers/unilang/contributor:contributor",
"//code/transcompilers/unilang/structure/model:inlined_structures",
"//code/transcompilers/unilang/options/language-specific/markdown:markdown_settings",
"//code/utilities/types/strings/transformers/appending:lib",
"//code/utilities/converters:lib",
"//code/utilities/types/strings/observers/other:lib",
"//code/utilities/types/vectors/observers:lib",
"//code/utilities/types/vectors/operators:lib",
"//code/utilities/types/char:lib",
"//code/utilities/types/strings/observers/converting:lib",
])


hcp(name = "markdown_title_getter", deps = [
"//code/transcompilers/unilang/structure/model:structure",
"//code/transcompilers/unilang/contributor:contributor",
"//code/transcompilers/unilang/structure/model:inlined_structures",
"//code/transcompilers/unilang/options/language-specific/markdown:markdown_settings",
"//code/transcompilers/unilang/compiler-frontends/markdown:markdown_header_getter",
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
"//code/transcompilers/unilang/doxygen_block_printer:grammar_adjuster",
"//code/utilities/time/date:lib",
"//code/utilities/types/strings/observers/converting:lib",
"//code/transcompilers/unilang/compiler-frontends/markdown:markdown_sentence_extra_getter",
])

hcp(name = "markdown_sentence_extra_getter", deps = [
"//code/transcompilers/unilang/structure/model:structure",
"//code/transcompilers/unilang/contributor:contributor",
"//code/transcompilers/unilang/structure/model:inlined_structures",
"//code/transcompilers/unilang/options/language-specific/markdown:markdown_settings",
"//code/transcompilers/unilang/compiler-frontends/markdown:markdown_image_getter",
"//code/utilities/types/strings/transformers/appending:lib",
"//code/transcompilers/unilang/compiler-frontends/markdown:markdown_table_getter",
"//code/transcompilers/unilang/compiler-frontends/markdown:markdown_code_getter",
])

hcp(name = "markdown_table_getter", deps = [
"//code/transcompilers/unilang/structure/model:structure",
"//code/transcompilers/unilang/contributor:contributor",
"//code/transcompilers/unilang/structure/model:inlined_structures",
"//code/transcompilers/unilang/options/language-specific/markdown:markdown_settings",
"//code/transcompilers/unilang/compiler-frontends/markdown:markdown_image_getter",
"//code/utilities/types/strings/transformers/appending:lib",
])

hcp(name = "markdown_code_getter", deps = [
"//code/transcompilers/unilang/structure/model:structure",
"//code/transcompilers/unilang/contributor:contributor",
"//code/transcompilers/unilang/structure/model:inlined_structures",
"//code/transcompilers/unilang/options/language-specific/markdown:markdown_settings",
"//code/transcompilers/unilang/compiler-frontends/markdown:markdown_image_getter",
"//code/utilities/types/strings/transformers/appending:lib",
])