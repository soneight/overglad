cmake_minimum_required( VERSION 3.8...3.27 )
project( glad VERSION 2.0.8 )
set( LIB_SON8 ${PROJECT_NAME}__son8 )
add_subdirectory( source )
add_library( ${PROJECT_NAME}::son8 ALIAS ${LIB_SON8} )
target_include_directories( ${LIB_SON8} PUBLIC include )

# Apache License 2.0
# NO WARRANTY OF ANY KIND see <http://www.apache.org/licenses/LICENSE-2.0>
# SPDX-License-Identifier: Apache-2.0
# lib: `overglad` C++17 Wrapper Over GLAD Loader
# Ⓒ Copyright (c) 2025-2026 Oleg'Ease'Kharchuk ᦒ
