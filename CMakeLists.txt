ee_setup_project("EssexEngineAppShell" "src/Apps/Shell/")

target_link_libraries(EssexEngineAppShell EssexEngineCore)

add_custom_target(runShell
    COMMAND EssexEngineBootloader --shell
    DEPENDS EssexEngineBootloader
    WORKING_DIRECTORY ../filesystem
)
