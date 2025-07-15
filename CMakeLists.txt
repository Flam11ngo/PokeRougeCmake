cmake_minimum_required(VERSION 3.10)

project(PokeRouge
        VERSION 1.0
        LANGUAGES CXX)

# 设置 C++ 标准
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 设置 SDL2 相关库的路径
set(SDL2_DIR "E:/CMakeProject/thirdparty/SDL2-2.32.8/cmake")
set(SDL2_ttf_DIR "E:/CMakeProject/thirdparty/SDL2_ttf-2.24.0/cmake")
set(SDL2_mixer_DIR "E:/CMakeProject/thirdparty/SDL2_mixer-2.8.1/cmake")
set(SDL2_image_DIR "E:/CMakeProject/thirdparty/SDL2_image-2.8.8/cmake")

# 查找 SDL2 库
find_package(SDL2 REQUIRED)
find_package(SDL2_ttf REQUIRED)
find_package(SDL2_mixer REQUIRED)
find_package(SDL2_image REQUIRED)

# 添加可执行文件
file(GLOB_RECURSE SOURCES_CPP "src/*.cpp")
file(GLOB_RECURSE SOURCES_C "srcSDL_gfx/*.c")
set(SOURCES ${SOURCES_CPP} ${SOURCES_C})
add_executable(PokeRouge ${SOURCES})

# 添加头文件目录
include_directories(include)
include_directories(includeSDL_gfx)


# 链接库
target_link_libraries(PokeRouge PRIVATE 
    SDL2::SDL2 
    SDL2_ttf::SDL2_ttf 
    SDL2_mixer::SDL2_mixer 
    SDL2_image::SDL2_image
)
