cmake_minimum_required(VERSION 3.6)
project(Untitled)

find_package(SDL2 REQUIRED SDL2_image REQUIRED SDL2_mixer REQUIRED SDL2_ttf REQUIRED TMXLITE REQUIRED)

file(GLOB SRC_FILES "src/*.cpp" GLOB H_FILES "src/include/*.h")

include_directories(${SDL2_INLUDE_DIRS} ${SDL2_IMAGE_INCLUDE_DIRS} ${SDL2_MIXER_INCLUDE_DIRS} ${SDL2_TTF_INCUDE_DIRS} ${TMXLITE_INCLUDE_DIR} ${H_FILES})

add_executable(${PROJECT_NAME} ${SRC_FILES})
target_link_libraries(${PROJECT_NAME} ${SDL2_MIXER_LIBRARIES} ${SDL2_TTF_LIBRARIES} ${TMXLITE_LIBRARIES} ${SDL2_TTF_LIBRARIES})

