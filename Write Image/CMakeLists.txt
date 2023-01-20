cmake_minimum_required(VERSION 2.8)

project( WriteImage )

find_package( OpenCV REQUIRED )

include_directories( ${OpenCV_INCLUDE_DIRS} )

add_executable( WriteImage WriteImage.cpp )

target_link_libraries(  WriteImage ${OpenCV_LIBS} )