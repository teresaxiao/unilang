package(default_visibility = ["//visibility:public"])
load("//bazel/cookbook/hcp:main.bzl", "hcp")
load("//bazel/cookbook/cpp:object.bzl", "cpp_object")

hcp(name="ide_settings", deps = [
    "//code/utilities/graphics/imgui/ui/draw:color",
    "//code/utilities/graphics/imgui/ui/draw:position",
    "//code/utilities/graphics/imgui/ui/draw:cursor",
    "//code/utilities/graphics/imgui/ui/draw:mouse_selection",
    "//code/utilities/graphics/imgui/ui/draw:cursor_mouse_connector",
    "//code/utilities/bdf/settings:character_segment",
    "//code/utilities/graphics/imgui:sdl_init_settings",
    "//code/transcompilers/unilang/tokens:get_tokens",
    "//code/utilities/graphics/imgui/ui/draw/label:label_settings",
    "//code/utilities/graphics/imgui/ui/window:window_settings",
    "//code/utilities/graphics/imgui/ui/draw/bitmap/multi_color_bitmap:multi_color_bitmap",
])

hcp(name="ide_settings_getter", deps = [
    "//code/utilities/graphics/imgui/ui/draw/bitmap/full_color_bitmap:full_color_bitmap",
    "//code/utilities/bdf/settings:character_segment",
    "//code/utilities/graphics/imgui/ui/draw/label:label_settings",
    "//code/utilities/graphics/imgui/ui/draw/mouse_events:mouse_events_checker",
    "//code/utilities/graphics/imgui/ui/draw/rectangle:rectangle_drawer",
    "//code/utilities/graphics/imgui/ui/draw/bitmap/full_color_bitmap:full_color_bitmap_drawer",
    "//code/utilities/graphics/imgui/ui/draw/text:text_to_bitmap",
    "//code/utilities/graphics/imgui/ui:ui_renders",
    "//code/transcompilers/unilang/tokens:get_tokens",
    "//code/ide/settings:ide_settings",
    "//code/transcompilers/unilang/language-and-theme-creator/font:unilang_font",
    "//code/ide/settings:standard_bitmap_cursor",
    "//code/utilities/graphics/imgui/ui/draw/bitmap/pixel:pixel_slider",
])

hcp(name="standard_bitmap_cursor", deps = [
    "//code/utilities/graphics/imgui/ui/draw/bitmap/multi_color_bitmap:multi_color_bitmap",
])