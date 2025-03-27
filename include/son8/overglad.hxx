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
    // Enable, Disable, IsEnabled
    enum class Capability : GLenum {
        Polygon_Smooth          = 0x0B41,
        Cull_Face               = 0x0B44,
        Depth_Test              = 0x0B71,
        Stencil_Test            = 0x0B90,
        Blend                   = 0x0BE2,
        Color_Logic_Op          = 0x0BF2,
        Scissor_Test            = 0x0C11,
        Polygon_Offset_Point    = 0x2A01,
        Polygon_Offset_Line     = 0x2A02,
        Polygon_Offset_Fill     = 0x8037,
#ifdef SON8_OVERGLAD_VERSION_1_5
        Multisample             = 0x809D,
#endif
#ifndef SON8_OVERGLAD_PROFILE_CORE
        Point_Smooth            = 0x0B10,
        Fog                     = 0x0B60,
        Line_Stipple            = 0x0B24,
        Polygon_Stipple         = 0x0B42,
        Lighting                = 0x0B50,
        Color_Material          = 0x0B57,
        Normalize               = 0x0BA1,
        Alpha_Test              = 0x0BC0,
        Index_Logic_Op          = 0x0BF1,
        Texture_Gen_S           = 0x0C60,
        Texture_Gen_T           = 0x0C61,
        Texture_Gen_P           = 0x0C62,
        Texture_Gen_R           = 0x0C62,
        Texture_Gen_Q           = 0x0C63,
        Auto_Normal             = 0x0D80,
        Map1_Color_4            = 0x0D90,
        Map1_Index              = 0x0D91,
        Map1_Normal             = 0x0D92,
        Map1_Texture_Coord_1    = 0x0D93,
        Map1_Texture_Coord_2    = 0x0D94,
        Map1_Texture_Coord_3    = 0x0D95,
        Map1_Texture_Coord_4    = 0x0D96,
        Map1_Vertex_3           = 0x0D97,
        Map1_Vertex_4           = 0x0D98,
        Map2_Color_4            = 0x0DB0,
        Map2_Index              = 0x0DB1,
        Map2_Normal             = 0x0DB2,
        Map2_Texture_Coord_1    = 0x0DB3,
        Map2_Texture_Coord_2    = 0x0DB4,
        Map2_Texture_Coord_3    = 0x0DB5,
        Map2_Texture_Coord_4    = 0x0DB6,
        Map2_Vertex_3           = 0x0DB7,
        Map2_Vertex_4           = 0x0DB8,
        Texture_1D              = 0x0DE0,
        Texture_2D              = 0x0DE1,
        Clip_Plane0             = 0x3000,
        Clip_Plane1             = 0x3001,
        Clip_Plane2             = 0x3002,
        Clip_Plane3             = 0x3003,
        Clip_Plane4             = 0x3004,
        Clip_Plane5             = 0x3005,
        Light0                  = 0x4000,
        Light1                  = 0x4001,
        Light2                  = 0x4002,
        Light3                  = 0x4003,
        Light4                  = 0x4004,
        Light5                  = 0x4005,
        Light6                  = 0x4006,
        Light7                  = 0x4007,
        Vertex_Array            = 0x8074,
        Normal_Array            = 0x8075,
        Color_Array             = 0x8076,
        Index_Array             = 0x8077,
        Texture_Coord_Array     = 0x8078,
        Edge_Flag_Array         = 0x8079,
#endif//SON8_OVERGLAD_PROFILE_CORE
    }; // enum class Capability
    // Clear
    enum class Clearbit : GLbitfield {
        Depth   = 0x00000100,
        Stencil = 0x00000400,
        Color   = 0x00004000,
#ifdef SON8_OVERGLAD_PROFILE_CORE
        All     = Depth | Stencil | Color,
#else
        Accum   = 0x00000200,
        All     = Depth | Accum | Stencil | Color,
#endif//SON8_OVERGLAD_PROFILE_CORE
    }; // enum class Clearbit

    Clearbit operator|( Clearbit a, Clearbit b ) noexcept
    { return static_cast< Clearbit >( static_cast< GLbitfield >( a ) | static_cast< GLbitfield >( b ) ); }

#ifndef SON8_OVERGLAD_PROFILE_CORE
    // PushClientAttrib
    enum class Client : GLbitfield {
        Pixel   = 0x00000001,
        Vertex  = 0x00000002,
        All     = 0xFFFFFFFF,
    };
#endif//SON8_OVERGLAD_PROFILE_CORE

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
    // CullFace, PolygonMode
    enum class Face : GLenum {
        Front       = 0x0404,
        Back        = 0x0405,
        Front_Back  = 0x0408,
    }; // enum class CullFace
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
#endif//SON8_OVERGLAD_PROFILE_CORE
    // PolygonMode
    enum class Polygon : GLenum {
        Point   = 0x1B00,
        Line    = 0x1B01,
        Fill    = 0x1B02,
    }; // enum class Polygon
#ifndef SON8_OVERGLAD_PROFILE_CORE
    // RenderMode
    enum class Render : GLenum {
        Render      = 0x1C00,
        Feedback    = 0x1C01,
        Select      = 0x1C02,
    }; // enum class Render
#endif

#ifndef SON8_OVERGLAD_PROFILE_CORE
    enum class Server : GLbitfield {
        Current     = 0x00000001,
        Point       = 0x00000002,
        Line        = 0x00000004,
        Polygon     = 0x00000008,
        Stipple     = 0x00000010,
        Pixel       = 0x00000020,
        Lightning   = 0x00000040,
        Fog         = 0x00000080,
        Depth       = 0x00000100,
        Accum       = 0x00000200,
        Stencil     = 0x00000400,
        Viewport    = 0x00000800,
        Transform   = 0x00001000,
        Enable      = 0x00002000,
        Color       = 0x00004000,
        Hint        = 0x00008000,
        Eval        = 0x00010000,
        List        = 0x00020000,
        Texture     = 0x00040000,
        Scissor     = 0x00080000,
#   ifdef SON8_OVERGLAD_VERSION_1_5
        Multisample = 0x20000000,
#   endif
        All         = 0xFFFFFFFF,
    }; // enum class Server
#endif//SON8_OVERGLAD_PROFILE_CORE
} // namespace son8::overglad::enums
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
