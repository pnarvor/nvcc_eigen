cmake_minimum_required(VERSION 3.10)
project(nvcc_eigen VERSION 0.1 LANGUAGES CUDA CXX)

find_package(Eigen3 REQUIRED)

add_executable(nvcc_eigen
    src/main.cpp
)
set_source_files_properties(src/main.cpp PROPERTIES LANGUAGE CUDA)
target_link_libraries(nvcc_eigen PRIVATE Eigen3::Eigen)
target_compile_options(nvcc_eigen PRIVATE
    $<$<COMPILE_LANGUAGE:CUDA>:-gencode arch=compute_61,code=sm_61>
)
target_compile_options(nvcc_eigen PRIVATE
    $<$<COMPILE_LANGUAGE:CUDA>:-Xcudafe --diag_suppress=esa_on_defaulted_function_ignored>
)

