# This CMakeLists.txt project is for Ubuntu only
project(redgpu_helper C)
cmake_minimum_required(VERSION 2.8.12)
link_libraries(
  /opt/RedGpuSDK/libredgpu.so
)
add_library(redgpu_helper SHARED
  redgpu_helper.c
)
