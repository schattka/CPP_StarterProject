cmake_minimum_required(VERSION	3.5)

if(MSVC)
	add_compile_options(/W4)
	message("Building with MSVC")
else()
	add_compile_options( -Wall )
endif()

add_executable(intro main.cpp)
# target_compile_features(intro PRIVATE cxx lambda _init cpatures)
