package(default_visibility = ["//visibility:public"])
load("//bazel/cookbook/hcp:main.bzl", "hcp")
load("//bazel/cookbook/cpp:object.bzl", "cpp_object")

hcp(name = "data_member_item", deps = [
"//code/transcompilers/unilang/structure/model/sections:structure_enums",
"//code/transcompilers/unilang/parser:token_value",
"//code/transcompilers/unilang/structure/model/sections/data_member/transition:value_transition_meaning",
"//code/transcompilers/unilang/structure/model/sections:type_specialization",
"//code/transcompilers/unilang/structure/model/sections:module_dependency",
"//code/transcompilers/unilang/structure/model/sections:library_dependency",
"key_value_pair",
"value_constraints",
"value_meaning",
"data_member_reflection",
"parent_type",
"value_deriving_type",
"scope_specifier",
])

hcp(name = "data_member_section", deps = [
"data_member_item"
])

hcp(name = "data_member_reflection", deps = [
"//code/transcompilers/unilang/parser:token_value",
"//code/transcompilers/unilang/structure/model/sections:structure_enums"
])

hcp(name = "key_value_pair", deps = [
"//code/transcompilers/unilang/parser:token_value"
])
hcp(name = "parent_type", deps = [
"//code/transcompilers/unilang/parser:token_value"
])
hcp(name = "scope_specifier", deps = [
"//code/transcompilers/unilang/parser:token_value"
])
hcp(name = "value_constraints", deps = [
"//code/transcompilers/unilang/parser:token_value"
])
hcp(name = "value_deriving_type", deps = [
"//code/transcompilers/unilang/parser:token_value"
])
hcp(name = "value_meaning", deps = [
"//code/transcompilers/unilang/parser:token_value"
])
