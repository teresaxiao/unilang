package(default_visibility = ["//visibility:public"])
load("//bazel/cookbook/hcp:bootstrap.bzl", "bootstrap_hcp")

bootstrap_hcp(
    name = "class_structure",
)
bootstrap_hcp(
    name = "class_structure_creator",
	deps = ["class_structure","header_validator",
"//code/transcompilers/hcp-compiler/official/structure_state:lib",
"//code/transcompilers/hcp-compiler/official/unicode_parser_symbols:lib",
"//code/utilities/types/strings/observers/other:lib",
"//code/utilities/exits:lib",
"//code/utilities/types/strings/transformers/removing:lib",
"//code/utilities/converters:lib",
"//code/utilities/types/strings/observers/char:lib",
"//code/utilities/types/strings/transformers/stripping:lib",
"//code/utilities/language_basic/multiple_relational_comparing:lib",
"//code/utilities/types/strings/transformers/casing:lib",]
)

bootstrap_hcp(
    name = "global_structure_creator",
	deps = ["class_structure","header_validator",
"//code/transcompilers/hcp-compiler/official/structure_state:lib",
"//code/transcompilers/hcp-compiler/official/unicode_parser_symbols:lib",
"//code/utilities/types/strings/observers/other:lib",
"//code/utilities/exits:lib",
"//code/utilities/types/strings/transformers/removing:lib",
"//code/utilities/converters:lib",
"//code/utilities/types/strings/observers/char:lib",
"//code/utilities/types/strings/transformers/stripping:lib",
"//code/utilities/language_basic/multiple_relational_comparing:lib",
"//code/utilities/types/strings/transformers/casing:lib",]
)

bootstrap_hcp(
    name = "header_validator",
deps = ["//code/utilities/types/strings/observers/other:lib",
"//code/utilities/exits:lib",
"//code/utilities/types/wstrings/transformers/other:lib",
"//code/utilities/types/strings/transformers/removing:lib",
"//code/utilities/converters:lib",
"//code/utilities/types/strings/observers/char:lib",]
)

bootstrap_hcp(
    name = "hcp_class_parser",
deps = ["class_structure","class_structure_creator"]
)
bootstrap_hcp(
    name = "hcp_global_parser",
deps = ["class_structure","global_structure_creator"]
)
bootstrap_hcp(
    name = "hcp_parser",
	deps = ["hcp_class_parser","hcp_global_parser","class_structure","//code/utilities/exits:lib",]
)

bootstrap_hcp(
    name = "global_compiler",
    deps = ["//code/transcompilers/hcp-compiler/bootstrap/core/structure:lib",
	"//code/utilities/types/strings/observers/other:lib",
    "//code/utilities/types/strings/transformers/removing:lib",
    "//code/utilities/types/strings/transformers/casing:lib",
    "//code/utilities/types/wstrings/transformers/trimming:lib",
    "//code/utilities/types/wstrings/transformers/other:lib",
    "//code/utilities/types/strings/observers/path:lib",
	"//code/utilities/converters:lib",
	"class_structure",
    "include_file_printer"
	]
)

bootstrap_hcp(
    name = "class_compiler",
    deps = ["//code/transcompilers/hcp-compiler/bootstrap/core/structure:lib",
	"//code/utilities/types/strings/observers/other:lib",
    "//code/utilities/types/strings/transformers/removing:lib",
    "//code/utilities/types/strings/transformers/casing:lib",
    "//code/utilities/types/wstrings/transformers/trimming:lib",
    "//code/utilities/types/wstrings/transformers/other:lib",
    "//code/utilities/types/strings/observers/path:lib",
	"//code/utilities/converters:lib",
	"class_structure",
    "include_file_printer"
	]
)

bootstrap_hcp(
    name = "hcp_compiler",
	deps = ["class_compiler","global_compiler","//code/utilities/exits:lib",]
)

bootstrap_hcp(
    name = "root_settings",
)
bootstrap_hcp(
    name = "root_settings_getter",
    deps = ["root_settings"]
)

bootstrap_hcp(
    name = "task_executer",
    deps = ["//code/transcompilers/hcp-compiler/official/program_options:lib",
	"//code/utilities/exits:lib",
	"//code/utilities/types/strings/observers/path:lib",
	"//code/utilities/filesystem/files/observers/lstat_wrap:lib",
	"//code/utilities/types/wstrings/transformers/other:lib",
	"//code/utilities/converters:lib",
    "//code/utilities/types/strings/transformers/removing:lib",
    "hcp_parser",
    "hcp_compiler",]
)

cc_binary(
    name = "hcp-compiler",
    srcs = ["main.cpp"],
    deps = ["//code/transcompilers/hcp-compiler/official/program_options:lib",
            "task_executer"],
)

bootstrap_hcp(
name = "include_file_printer",
deps = [
":class_structure",
"//code/utilities/types/strings/observers/other:lib",
"//code/utilities/types/strings/observers/path:lib",
"//code/utilities/types/strings/transformers/removing:lib",
"//code/utilities/types/strings/transformers/casing:lib",
"//code/utilities/types/wstrings/transformers/trimming:lib",
"//code/utilities/types/wstrings/transformers/other:lib",
"//code/utilities/converters:lib"
])