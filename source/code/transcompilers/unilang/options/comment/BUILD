package(default_visibility = ["//visibility:public"])
load("//bazel/cookbook/hcp:main.bzl", "hcp")
load("//bazel/cookbook/cpp:object.bzl", "cpp_object")

cpp_object(name = "comment_style_category")

hcp(name = "comment_grammar_puncuation_settings",
deps = [
])

hcp(name = "comment_grammar_preposition_settings",
deps = [
])

hcp(name = "comment_grammar_cliche_settings",
deps = [
])

hcp(name = "comment_grammar_bad_word_settings",
deps = [
])

hcp(name = "comment_grammar_settings",
deps = [
"//code/transcompilers/unilang/options/comment/doxygen:doxygen_block_options",
"//code/transcompilers/unilang/options/comment:comment_grammar_puncuation_settings",
"//code/transcompilers/unilang/options/comment:comment_grammar_preposition_settings",
"//code/transcompilers/unilang/options/comment:comment_grammar_cliche_settings",
"//code/transcompilers/unilang/options/comment:comment_grammar_bad_word_settings",
])

hcp(name = "comment_settings",
deps=[
"//code/transcompilers/unilang/options/comment/doxygen:doxygen_block_options",
"//code/transcompilers/unilang/options/comment/language_default:c_comment_settings",
"//code/transcompilers/unilang/options/comment:comment_grammar_settings",
"//code/transcompilers/unilang/options/comment:comment_style_category",
])