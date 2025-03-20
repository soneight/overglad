#ifndef SON8_OVERGLAD_HXX
#define SON8_OVERGLAD_HXX

#ifndef          SON8_OVERGLAD_DEFINED
#define          SON8_OVERGLAD_DEFINED
#define          SON8_OVERGLAD_INCLUDE
#define      SON8_OVERGLAD_VERSION_1_1
#define      SON8_OVERGLAD_VERSION_1_5
#define      SON8_OVERGLAD_VERSION_2_1
#define      SON8_OVERGLAD_VERSION_3_3
#define      SON8_OVERGLAD_VERSION_4_3
#define      SON8_OVERGLAD_VERSION_4_6
#define     SON8_OVERGLAD_PROFILE_CORE
#define SON8_OVERGLAD_VERSION 0x0406CE
# endif        //SON8_OVERGLAD_DEFINED

#include <glad/son8/source.h>

#ifdef SON8_OVERGLAD_INCLUDE_DEPRECATED
#include <glad/son8/define.h>
#endif

/* TODO (v): Does not allow *(v) versions of functions or use std::array? */
#define SON8_OVERGLAD_TODO_V 0
#if SON8_OVERGLAD_TODO_V
#include <array>
#endif
namespace son8::overglad::enums {
    // Boolean
    enum class Boolean : GLboolean {
        False_  = 0x0,
        True_   = 0x1,
    }; // enum class Boolean
#ifndef SON8_OVERGLAD_PROFILE_CORE
    // EnableClientState, DisableClientState
    enum class ClientState : GLenum {
        Vertex  = 0x8074,
        Normal  = 0x8075,
        Color   = 0x8076,
        Index   = 0x8077,
        Texture = 0x8078,
        Edge    = 0x8079,
    }; // enum class ClientState
#endif//SON8_OVERGLAD_PROFILE_CORE
     // FrontFace
     enum class Dir : GLenum {
        CW  = 0x0900,
        CCW = 0x0901,
    }; // enum class Dir
    // Begin
    enum class Draw : GLenum {
        Points          = 0x0000,
        Lines           = 0x0001,
        Lines_L         = 0x0002,
        Lines_S         = 0x0003,
        Default         = 0x0004,
        Triangles       = 0x0004,
        Triangles_S     = 0x0005,
        Triangles_F     = 0x0006,
#ifndef SON8_OVERGLAD_PROFILE_CORE
        Quads           = 0x0007,
        Quad_S          = 0x0008,
        Polygon         = 0x0009,
#endif//SON8_OVERGLAD_PROFILE_CORE
#ifdef SON8_OVERGLAD_VERSION_3_3
        Lines_A         = 0x000A,
        Lines_SA        = 0x000B,
        Triangles_A     = 0x000C,
        Triangles_SA    = 0x000D,
#endif
#ifdef SON8_OVERGLAD_VERSION_4_3
        Patches         = 0x000E,
#endif
    }; // enum class Draw
    // GetError
    enum class Error : GLenum {
        No          = 0x0,
        Enum        = 0x0500,
        Value       = 0x0501,
        Operation   = 0x0502,
#if 0x0303CE != SON8_OVERGLAD_VERSION
        Overflow    = 0x0503,
        Underflow   = 0x0504,
#endif
        Memory      = 0x0505,
#ifdef SON8_OVERGLAD_VERSION_4_3
        Framebuffer = 0x0506,
#endif
#ifdef SON8_OVERGLAD_VERSION_4_6
        Context     = 0x0507,
#endif
    }; // enum class Error
#ifndef SON8_OVERGLAD_PROFILE_CORE
    // MatrixMode
    enum class MatrixMode : GLenum {
        Model   = 0x1700,
        Project = 0x1701,
        Texture = 0x1702,
    }; // enum class MatrixMode
} // namespace son8::overglad::enums
#endif//SON8_OVERGLAD_PROFILE_CORE
namespace son8::overglad::types {
    /* TODO (v) */
#if SON8_OVERGLAD_TODO_V
    using array1bool = std::array< GLboolean, 1 >;
#endif
}

#define SON8_OVERGLAD_DEPR [[deprecated]] inline auto
#define SON8_OVERGLAD_DISC inline auto
#define SON8_OVERGLAD_FUNC [[nodiscard]] inline auto
#define SON8_OVERGLAD_PROC inline void

#  ifdef    SON8_OVERGLAD_INCLUDE
#include <son8/overglad/v1_1.hxx>
#include <son8/overglad/v1_5.hxx>
#include <son8/overglad/v2_1.hxx>
#include <son8/overglad/v3_3.hxx>
#include <son8/overglad/v4_3.hxx>
#  endif  //SON8_OVERGLAD_INCLUDE

#endif//SON8_OVERGLAD_HXX
// Ⓒ 2025 Oleg'Ease'Kharchuk ᦒ
