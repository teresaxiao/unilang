package(default_visibility = ["//visibility:public"])
load("//bazel/cookbook/hcp:main.bzl", "hcp")
load("//bazel/cookbook/cpp:object.bzl", "cpp_object")

hcp( name = "protocol_buffer_settings",
deps = [
"//code/transcompilers/unilang/options/language-specific/protocol_buffer_settings/import:protocol_buffer_import_settings",
"//code/transcompilers/unilang/options/language-specific/protocol_buffer_settings/version:protocol_buffer_version_settings",
"//code/transcompilers/unilang/options/language-specific/protocol_buffer_settings/message:protocol_buffer_message_settings",
"//code/transcompilers/unilang/options/language-specific/protocol_buffer_settings/tag:protocol_buffer_tag_settings",
"//code/transcompilers/unilang/options/language-specific/protocol_buffer_settings/enum:protocol_buffer_enum_settings",
])

hcp("protocol_buffer_export_settings",deps = [
"//code/transcompilers/unilang/options/sections:portion_options",
"//code/transcompilers/unilang/options:general_options",
"//code/transcompilers/unilang/options/manipulation:struct_manipulation_settings",
"//code/transcompilers/unilang/options/bazel:build_rule_settings",
"//code/transcompilers/unilang/options/language-specific/protocol_buffer_settings:protocol_buffer_settings",
])