load("//bazel/cookbook/hcp:main.bzl", "hcp")
load("//bazel/cookbook/cpp:object.bzl", "cpp_object")

hcp(name = "bazel_refresher", deps = [
"//code/utilities/filesystem/paths:lib",
"//code/bazel_refresh/conversion_test:bazel_conversion_tests",
"//code/utilities/types/strings/transformers/appending:lib",
"//code/utilities/filesystem/files/creating:lib",
"//code/utilities/filesystem/files/deleting:lib",
"//code/utilities/types/vectors/converters:lib",
"//code/utilities/types/strings/transformers/casing:lib",
"//code/bazel_refresh/conversion_test:test_getter",
"//code/bazel_refresh:readme_creator",
"//code/transcompilers/unilang/file_extension_getter:file_extension_getter",
])

hcp(name = "readme_creator", deps = [
"//code/utilities/filesystem/paths:lib",
"//code/utilities/types/strings/transformers/appending:lib",
"//code/utilities/filesystem/files/creating:lib",
])

cc_binary(
    name = "bazel_refresh",
    srcs = ["main.cc"],
    deps = ["//code/bazel_refresh:bazel_refresher","//code/utilities/locale:lib"],
)