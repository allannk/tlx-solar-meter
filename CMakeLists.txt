cmake_minimum_required(VERSION 3.29.1)

# ──────────────────────────────────────────────────
#   General configuration
# ──────────────────────────────────────────────────
set(USE_CCACHE 0)

list(APPEND BOARD_ROOT ${CMAKE_CURRENT_SOURCE_DIR}/../..)
list(APPEND ZEPHYR_EXTRA_MODULES ${CMAKE_CURRENT_SOURCE_DIR}/../..)
list(APPEND DTS_ROOT ${CMAKE_CURRENT_SOURCE_DIR}/../..)

# list(APPEND DTC_OVERLAY_FILE ${CMAKE_CURRENT_SOURCE_DIR}/board.overlay)
find_package(Zephyr)
project(tlx-solar-meter)

# Set repository root directory
set(REPO_ROOT "${CMAKE_CURRENT_SOURCE_DIR}/../../")

# ──────────────────────────────────────────────────
#   Source code
# ──────────────────────────────────────────────────
include_directories("src")
include_directories(${REPO_ROOT}/include)

target_sources(app PRIVATE
    src/main.c
)
