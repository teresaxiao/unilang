package(default_visibility = ["//visibility:public"])
load("//bazel/cookbook/hcp:main.bzl", "hcp")
load("//bazel/cookbook/cpp:object.bzl", "cpp_object")

hcp(name="color",deps = [])

hcp(name="position",deps = [])

hcp(name="imgui_type_utility", deps = [
"//code/utilities/graphics/imgui/ui/draw:color",
"//code/utilities/graphics/imgui/ui/draw:position",
"//code/utilities/graphics/imgui:mechanics",
])

hcp(name="cursor",deps = [
"//code/utilities/graphics/imgui/ui/draw/rectangle:rectangle_settings",
])

hcp(name="mouse_selection",deps = [
"//code/utilities/graphics/imgui/ui/draw/rectangle:rectangle_settings",
])

hcp(name="cursor_mouse_connector",deps = [
"//code/utilities/graphics/imgui/ui/draw/line:line_settings",
])


hcp(name="mouse_position_getter", deps = [
"//code/utilities/graphics/imgui/ui/draw:position",
"//code/utilities/graphics/imgui:mechanics",
])