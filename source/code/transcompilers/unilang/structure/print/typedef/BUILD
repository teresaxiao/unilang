package(default_visibility = ["//visibility:public"])
load("//bazel/cookbook/hcp:main.bzl", "hcp")
load("//bazel/cookbook/cpp:object.bzl", "cpp_object")

hcp(name = "typedef_printer", deps = [
"//code/transcompilers/unilang/structure/model/sections/typedef:typedef_item",
"//code/transcompilers/unilang/structure/print:doxygen_block_printer",
"//code/transcompilers/unilang/options/language-specific:c_export_settings",
"//code/utilities/types/strings/transformers/casing:case_modifier",
"//code/transcompilers/unilang/structure/print/derivers:type_name_deriver",
"//code/utilities/converters:lib",
"//code/utilities/streams/filestreams:lib",
"//code/utilities/types/vectors/observers:lib",
])