#files

file(GLOB EssexEngineAppShell_HEADERS
    "src/Apps/Shell/*.h"
    "src/Apps/Shell/*/*.h"
)
file(GLOB EssexEngineAppShell_SRC
    ${EssexEngineAppShell_HEADERS}
    "src/Apps/Shell/*.cpp"
    "src/Apps/Shell/*/*.cpp"
)

#setup headers

file(COPY ${EssexEngineAppShell_HEADERS} DESTINATION "${CMAKE_BINARY_DIR}/lib/include/EssexEngineAppShell/")

#setup build

add_library(EssexEngineAppShell SHARED ${EssexEngineAppShell_SRC})
target_link_libraries(EssexEngineAppShell EssexEngineCore)

#run

add_custom_target(runShell
    COMMAND EssexEngineBootloader --shell
    DEPENDS EssexEngineBootloader
    WORKING_DIRECTORY ../filesystem
)