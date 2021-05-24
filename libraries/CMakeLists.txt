# Set the project name
project (libraries)

add_library(${PROJECT_NAME} INTERFACE)
add_library(li::bs ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME}
    INTERFACE
        ${PROJECT_SOURCE_DIR}/include
)
