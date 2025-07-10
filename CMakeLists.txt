cmake_minimum_required( VERSION 3.14...3.27 )
project( overglad VERSION 0.4.0 LANGUAGES CXX )

set( SON8PROJ son8__${PROJECT_NAME} )

option( SON8_OVERGLAD_INCLUDE_DEPRECATED "Enable glad and [[deprecated]] overglad entities" OFF )

add_subdirectory( source )
add_library( son8::${PROJECT_NAME} ALIAS ${SON8PROJ} )

add_subdirectory( glad )
target_link_libraries( ${SON8PROJ} INTERFACE glad::son8 )
target_compile_features( ${SON8PROJ} INTERFACE cxx_std_17 )
target_include_directories( ${SON8PROJ} INTERFACE include )

if ( SON8_OVERGLAD_INCLUDE_DEPRECATED )
    target_compile_definitions( ${SON8PROJ} INTERFACE SON8_OVERGLAD_INCLUDE_DEPRECATED )
endif( )

if ( CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME AND EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/temp/CMakeLists.txt" )
    add_subdirectory(temp)
endif( )
