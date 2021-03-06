load("//bazel/cookbook/cpp:object.bzl", "cpp_object")

def generate_unilang_token_files():

    native.genrule(
        name = "unilang_tokens",
        outs = ["token_group.hpp","token_group.cpp","token_name.hpp","token_name.cpp"],
        tools = ["//code/transcompilers/unilang/tokens:unilang_token_file_generator"],
        cmd = """
    $(location //code/transcompilers/unilang/tokens:unilang_token_file_generator) $(@D) 
        """
    )

    cpp_object(name="token_name")
    cpp_object(name="token_group")
      
      