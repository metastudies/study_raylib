cmake_minimum_required(VERSION 3.3)
project(render_to_texture)

# set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS}")

set(SOURCE_FILES main.c)

add_executable(run ${SOURCE_FILES})

include_directories("/usr/local/include")

target_link_libraries(run "/usr/local/lib/libtcod.dylib"
                          "-framework Cocoa"
                          "-framework OpenGL"
                          "-framework IOKit"
                          "/usr/local/lib/libSDL2.dylib"
                          "/usr/local/lib/libraylib.a")
