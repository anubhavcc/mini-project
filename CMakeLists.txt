set ( CMAKE_C_FLAGS )
file ( GLOB SRCS  *.c  *.h )
add_executable (pro ${SRCS} )
