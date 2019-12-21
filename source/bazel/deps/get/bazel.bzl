load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive", "http_file")
load("@bazel_tools//tools/build_defs/repo:git.bzl", "git_repository")

def bazel():
    http_archive(
        name = "bazel",
        build_file = "//bazel/deps/build_files:bazel.BUILD",
        sha256 = "e3138b869f19c480c1bb28e553cfd7d67ecaf8d86df66ba70dc7e156b40c0aab",
        strip_prefix = "bazel-2895cd5ce6797a22279dc7482926371ae9ea78b5",
        urls = [
            "https://github.com/Unilang/bazel/archive/2895cd5ce6797a22279dc7482926371ae9ea78b5.tar.gz",
            "https://github.com/bazelbuild/bazel/archive/2895cd5ce6797a22279dc7482926371ae9ea78b5.tar.gz",
        ],
    )