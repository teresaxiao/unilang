package(default_visibility = ["//visibility:public"])
load("//bazel/cookbook/hcp:main.bzl", "hcp")
load("//bazel/cookbook/cpp:object.bzl", "cpp_object")

hcp(name = "method_chaining_enforcer", deps = [
"//code/transcompilers/unilang/structure/model:structure",
"//code/transcompilers/unilang/options/manipulation:struct_manipulation_settings",
"//code/utilities/converters:lib",
])

hcp(name = "method_overload_adjuster", deps = [
"//code/transcompilers/unilang/structure/model:structure",
"//code/transcompilers/unilang/options/manipulation:struct_manipulation_settings",
"//code/utilities/converters:lib",
])

hcp(name = "return_statement_enforcer", deps = [
"//code/transcompilers/unilang/structure/model:structure",
"//code/transcompilers/unilang/options/manipulation:struct_manipulation_settings",
"//code/utilities/converters:lib",
])

hcp(name = "immutable_value_to_immutable_ref_adjuster", deps = [
"//code/transcompilers/unilang/structure/model:structure",
"//code/transcompilers/unilang/options/manipulation:struct_manipulation_settings",
"//code/utilities/converters:lib",
"//code/transcompilers/unilang/type_converters/unilang-type-to-language-type-converter:unilang_type_to_language_type_converter",
])

hcp(name = "instantiate_and_return_injector_for_return_type", deps = [
"//code/transcompilers/unilang/structure/model:structure",
"//code/transcompilers/unilang/options/manipulation:struct_manipulation_settings",
"//code/utilities/converters:lib",
"//code/transcompilers/unilang/type_converters/unilang-type-to-language-type-converter:unilang_type_to_language_type_converter",
"//code/utilities/types/strings/transformers/casing:case_modifier",
"//code/utilities/types/vectors/transformers:lib",
"//code/transcompilers/unilang/structure/print/derivers:type_name_deriver",
"//code/transcompilers/unilang/options/language-specific:c_export_settings",
"//code/transcompilers/unilang/structure/print/derivers:identifier_name_deriver",
"//code/utilities/types/variant:lib",
"//code/utilities/types/strings/observers/char:lib",
])





hcp(name = "function_unit_test_name_defaulter", deps = [
"//code/transcompilers/unilang/structure/model:structure",
"//code/transcompilers/unilang/options/manipulation:struct_manipulation_settings",
"//code/utilities/converters:lib",
])
