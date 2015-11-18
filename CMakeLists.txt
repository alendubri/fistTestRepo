# CMakeLists files in this project can
# refer to the root source directory of the project as ${THETEST_SOURCE_DIR} and
# to the root binary directory of the project as ${THETEST_BINARY_DIR}.
cmake_minimum_required (VERSION 2.8.11)
project (THETEST)


# Make sure the compiler can find include files for our Hello library
# when other libraries or executables link to Hello
#target_include_directories (Hello PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

# Add executable called "theTestDemo" that is built from the source files
# "theTest.c" and "theTest.h". The extensions are automatically found.
add_executable (theTestDemo theTest.c)

# Link the executable to the Hello library. Since the Hello library has
# public include directories we will use those link directories when building
# helloDemo
#target_link_libraries (helloDemo LINK_PUBLIC Hello)
