package(default_visibility = ["//visibility:public"])
load("//bazel/cookbook/hcp:main.bzl", "hcp")
load("//bazel/cookbook/cpp:object.bzl", "cpp_object")

hcp(name = "cpp_benchmark_exporter", deps = [
"//code/transcompilers/unilang/structure/model:structure",
"//code/transcompilers/unilang/contributor:contributor",
"//code/transcompilers/unilang/options/language-specific:cpp_benchmark_export_settings",
"//code/transcompilers/unilang/structure/model:inlined_structures",
"//code/transcompilers/unilang/structure/adjust:structure_adjuster",
"//code/transcompilers/unilang/structure/print:file_printer",
"//code/transcompilers/unilang/type_converters/unilang-type-to-language-type-converter/languages:source_language",
"//code/utilities/converters:lib",
"//code/utilities/filesystem/paths:lib",
"//code/utilities/types/strings/transformers/casing:case_modifier",
"//code/transcompilers/unilang/boilerplate_printer:boilerplate_printer",
"//code/transcompilers/unilang/structure/print:namespace_printer",
"//code/transcompilers/unilang/options/language-specific:c_export_settings",
"//code/transcompilers/unilang/structure/print/export_file_settings:export_file_settings",
"//code/utilities/types/strings/transformers/appending:lib",
"//code/utilities/types/char:lib",
"//code/transcompilers/unilang/structure/print:shared_printer",
"//code/transcompilers/unilang/compiler-frontends/cpp_benchmark:benchmark_coverage_summary_getter",
])

hcp(name = "cpp_benchmark_options_getter", deps = [
"//code/transcompilers/unilang/options/language-specific:cpp_benchmark_export_settings",
"//code/transcompilers/unilang/options/sections/meta/organizations:organization",
"//code/transcompilers/unilang/structure/model:structure",
"//code/utilities/exits:lib",
"//code/transcompilers/unilang/structure/model:inlined_structures",
"//code/transcompilers/unilang/structure/print/filename:file_name_getter",
"//code/utilities/life:company_getter",
])

hcp(name = "benchmark_coverage_summary_getter", deps = [
"//code/transcompilers/unilang/structure/model:structure",
"//code/transcompilers/unilang/options/language-specific:cpp_benchmark_export_settings",
"//code/transcompilers/unilang/structure/model:inlined_structures",
"//code/utilities/converters:lib",
"//code/transcompilers/unilang/options/language-specific:c_export_settings",
"//code/utilities/types/strings/transformers/casing:case_modifier",
"//code/utilities/types/strings/transformers/appending:lib",
"//code/utilities/types/char:lib",
"//code/utilities/types/strings/transformers/other:lib",
"//code/transcompilers/unilang/design/normal:method_sorter",
"//code/utilities/types/strings/transformers/inflection/settings:inflection_settings",
"//code/utilities/types/strings/transformers/inflection:inflection_converter",
"//code/utilities/types/strings/transformers/inflection/getters:inflection_settings_getter",
"//code/transcompilers/unilang/design/normal/data:subgroup_methods",
"//code/utilities/types/vectors/observers:lib",
])