package(default_visibility = ["//visibility:public"])
load("//bazel/cookbook/hcp:main.bzl", "hcp")
load("//bazel/cookbook/cpp:object.bzl", "cpp_object")

hcp(name = "all_comparison_impl_schemes", deps = [
"//code/transcompilers/unilang/structure/adjust/methods/creating_methods/via_data_members/individual_getters/comparison:comparison_impl_scheme"
])

hcp(name = "comparison_function_getter", deps = [
"//code/transcompilers/unilang/structure/model/sections/data_member:data_member_item",
"//code/transcompilers/unilang/options/sections/data_member:data_member_options",
"//code/transcompilers/unilang/structure/model/sections/method:method_item",
"//code/transcompilers/unilang/options/manipulation/methods/via_data_member:data_member_utility_function_options",
"//code/utilities/relational-operator:relational_operator",
"//code/utilities/relational-operator:relational_operator_converter",
"//code/transcompilers/unilang/structure/adjust/methods/creating_methods/via_data_members/individual_getters/comparison:all_comparison_impl_schemes",
"//code/transcompilers/unilang/structure/model:structure",
"//code/transcompilers/unilang/structure/adjust/methods/creating_methods/via_data_members/individual_getters:boolean_expression_creator",
"//code/utilities/converters:lib",
"//code/utilities/types/strings/observers/other:lib",
])

hcp(name = "comparison_impl_scheme", deps = [
	"//code/utilities/relational-operator:relational_operator"
])
