package(default_visibility = ["//visibility:public"])
load("//bazel/cookbook/hcp:main.bzl", "hcp")
load("//bazel/cookbook/cpp:object.bzl", "cpp_object")

hcp(name = "method_sorter", deps = [
"//code/transcompilers/unilang/structure/model/sections/method:method_item",
"//code/transcompilers/unilang/options/sections/method/sorting/method_sort_algorithms:method_sort_algorithms",
"//code/transcompilers/unilang/design/normal/data:subgroup_sorted_methods",
"//code/utilities/exits:lib",
"//code/utilities/converters:lib",
"//code/utilities/types/vectors/observers:lib",
])

hcp(name = "subgroup_tag_printer", deps = [
"//code/transcompilers/unilang/options/sections/method/sorting:method_subgroup_tag_settings",
"//code/transcompilers/unilang/doxygen_block_printer:doxygen_data",
"//code/transcompilers/unilang/doxygen_block_printer:doxygen_block_maker",
"//code/utilities/exits:lib",
"//code/utilities/converters:lib",
"//code/utilities/streams/filestreams:lib",
"//code/utilities/types/strings/observers/converting:lib",
])

hcp(name = "method_sorting_and_grouping_order_printer", deps = [
"//code/transcompilers/unilang/structure/model:structure",
"//code/transcompilers/unilang/options/language-specific:c_export_settings",
"//code/transcompilers/unilang/design/normal/data:subgroup_sorted_methods",
"//code/transcompilers/unilang/structure/print:shared_printer",
"//code/transcompilers/unilang/structure/print:methods_printer",
"//code/transcompilers/unilang/design/in-out:object_name_resolver",
"//code/transcompilers/unilang/design/normal:method_sorter",
"//code/transcompilers/unilang/design/normal:subgroup_tag_printer",
"//code/utilities/converters:lib",
"//code/utilities/types/general:lib",
"//code/utilities/exits:lib",
])

hcp(name = "normal_design_printer", deps = [
"//code/transcompilers/unilang/structure/print/export_file_settings:export_file_settings",
"//code/transcompilers/unilang/structure/model:structure",
"//code/transcompilers/unilang/options/language-specific:c_export_settings",
"//code/transcompilers/unilang/design/in-out:component_struct_printer",
"//code/transcompilers/unilang/structure/print/forward_declares:forward_declare_printer",
"//code/transcompilers/unilang/structure/print/typedef:typedef_printer",
"//code/transcompilers/unilang/structure/print/macro:macro_printer",
"//code/transcompilers/unilang/enum_printer:enum_section_printer",
"//code/transcompilers/unilang/design/normal:method_sorting_and_grouping_order_printer",
"//code/transcompilers/unilang/structure/adjust/methods/api_and_lifetime:api_and_lifetime_creator",
"//code/utilities/exits:lib",
"//code/utilities/converters:lib",
])