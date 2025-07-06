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
#endif         //SON8_OVERGLAD_DEFINED

#include <glad/son8/source.h>

#ifdef SON8_OVERGLAD_INCLUDE_DEPRECATED
#include <glad/son8/define.h>
#endif

// for v functions
#include <array>

#include <cassert>
#include <type_traits>

namespace son8::overglad::enums {
#ifdef SON8_OVERGLAD_VERSION_1_5
    // MapBuffer
    enum class Access : GLenum {
        Read_Only   = 0x88B8,
        Write_Only  = 0x88B9,
        Read_Write  = 0x88BA,
    }; // enum class Access
#endif//SON8_OVERGLAD_VERSION_1_5

    // Boolean
    enum class Boolean : GLboolean {
        False   = 0x0,
        True    = 0x1,
    }; // enum class Boolean
#ifdef SON8_OVERGLAD_VERSION_1_5
    enum class Buffer : GLenum {
        Array   = 0x8892,
        Element = 0x8893,
    };
#endif//SON8_OVERGLAD_VERSION_1_5

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
        Map_1_Color_4           = 0x0D90,
        Map_1_Index             = 0x0D91,
        Map_1_Normal            = 0x0D92,
        Map_1_Texture_Coord_1   = 0x0D93,
        Map_1_Texture_Coord_2   = 0x0D94,
        Map_1_Texture_Coord_3   = 0x0D95,
        Map_1_Texture_Coord_4   = 0x0D96,
        Map_1_Vertex_3          = 0x0D97,
        Map_1_Vertex_4          = 0x0D98,
        Map_2_Color_4           = 0x0DB0,
        Map_2_Index             = 0x0DB1,
        Map_2_Normal            = 0x0DB2,
        Map_2_Texture_Coord_1   = 0x0DB3,
        Map_2_Texture_Coord_2   = 0x0DB4,
        Map_2_Texture_Coord_3   = 0x0DB5,
        Map_2_Texture_Coord_4   = 0x0DB6,
        Map_2_Vertex_3          = 0x0DB7,
        Map_2_Vertex_4          = 0x0DB8,
        Texture_1D              = 0x0DE0,
        Texture_2D              = 0x0DE1,
        Clip_Plane_0            = 0x3000,
        Clip_Plane_1            = 0x3001,
        Clip_Plane_2            = 0x3002,
        Clip_Plane_3            = 0x3003,
        Clip_Plane_4            = 0x3004,
        Clip_Plane_5            = 0x3005,
        Light_0                 = 0x4000,
        Light_1                 = 0x4001,
        Light_2                 = 0x4002,
        Light_3                 = 0x4003,
        Light_4                 = 0x4004,
        Light_5                 = 0x4005,
        Light_6                 = 0x4006,
        Light_7                 = 0x4007,
        Vertex_Array            = 0x8074,
        Normal_Array            = 0x8075,
        Color_Array             = 0x8076,
        Index_Array             = 0x8077,
        Texture_Coord_Array     = 0x8078,
        Edge_Flag_Array         = 0x8079,
#endif//SON8_OVERGLAD_PROFILE_CORE
    }; // enum class Capability
    // Hint
    enum class Care : GLenum {
        Dont    = 0x1100,
        Fast    = 0x1101,
        Nice    = 0x1102,
    }; // enum class Care
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
#   ifdef SON8_OVERGLAD_VERSION_1_5
        Fog     = 0x8457,
        Color2  = 0x845E,
#   endif
    }; // enum class ClientState
#endif//!SON8_OVERGLAD_PROFILE_CORE
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
#endif
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

#ifdef SON8_OVERGLAD_VERSION_1_5
    // BlendEquation
    enum class Equation : GLenum {
        Add         = 0x8006,
        Subtract    = 0x800A,
        Reverse     = 0x800B,
        Min         = 0x8007,
        Max         = 0x8008,
    }; // enum class Equation
#endif//SON8_OVERGLAD_VERSION_1_5

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
    // CullFace, PolygonMode
    enum class Face : GLenum {
        Front       = 0x0404,
        Back        = 0x0405,
        Front_Back  = 0x0408,
    }; // enum class CullFace
    // Func
    enum class Func : GLenum {
        Never       = 0x0200,
        Less        = 0x0201,
        Equal       = 0x0202,
        Lequal      = 0x0203,
        Greater     = 0x0204,
        Notequal    = 0x0205,
        Gequal      = 0x0206,
        Always      = 0x0207,
    }; // enum class Func
    // Hint
    enum class Hint : GLenum {
        Line        = 0x0C52,
        Polygon     = 0x0C53,
#ifdef SON8_OVERGLAD_VERSION_1_5
        Texture     = 0x84EF,
#endif
#ifdef SON8_OVERGLAD_VERSION_2_1
        Fragment    = 0x8B8B,
#endif
#ifndef SON8_OVERGLAD_PROFILE_CORE
        Perspective = 0x0C50,
        Point       = 0x0C51,
        Fog         = 0x0C54,
#   ifdef SON8_OVERGLAD_VERSION_1_5
        Mipmap      = 0x8192,
#   endif
#endif//!CORE
    }; // enum class Hint
#ifndef SON8_OVERGLAD_PROFILE_CORE
    // MatrixMode
    enum class MatrixMode : GLenum {
        Modelview   = 0x1700,
        Projection  = 0x1701,
        Texture     = 0x1702,
    }; // enum class MatrixMode
#endif//SON8_OVERGLAD_PROFILE_CORE

#ifdef SON8_OVERGLAD_VERSION_1_5
    // ActiveTexture,ClientActiveTexture,MultTexCoord
    enum class Multi : GLenum {
        Texture_0   = 0x84C0,
        Texture_1   = 0x84C1,
        Texture_2   = 0x84C2,
        Texture_3   = 0x84C3,
        Texture_4   = 0x84C4,
        Texture_5   = 0x84C5,
        Texture_6   = 0x84C6,
        Texture_7   = 0x84C7,
        Texture_8   = 0x84C8,
        Texture_9   = 0x84C9,
        Texture_10  = 0x84CA,
        Texture_11  = 0x84CB,
        Texture_12  = 0x84CC,
        Texture_13  = 0x84CD,
        Texture_14  = 0x84CE,
        Texture_15  = 0x84CF,
        Texture_16  = 0x84D0,
        Texture_17  = 0x84D1,
        Texture_18  = 0x84D2,
        Texture_19  = 0x84D3,
        Texture_20  = 0x84D4,
        Texture_21  = 0x84D5,
        Texture_22  = 0x84D6,
        Texture_23  = 0x84D7,
        Texture_24  = 0x84D8,
        Texture_25  = 0x84D9,
        Texture_26  = 0x84DA,
        Texture_27  = 0x84DB,
        Texture_28  = 0x84DC,
        Texture_29  = 0x84DD,
        Texture_30  = 0x84DE,
        Texture_31  = 0x84DF,
    }; // enum class Multi
#endif//SON8_OVERGLAD_VERSION_1_5

    // LogicOp
    enum class Op : GLenum {
        Clear           = 0x1500,
        And             = 0x1501,
        And_Reverse     = 0x1502,
        Copy            = 0x1503,
        And_Inverted    = 0x1504,
        Noop            = 0x1505,
        Xor             = 0x1506,
        Or              = 0x1507,
        Nor             = 0x1508,
        Equiv           = 0x1509,
        Invert          = 0x150A,
        Or_Reverse      = 0x150B,
        Copy_Inverted   = 0x150C,
        Or_Inverted     = 0x150D,
        Nand            = 0x150E,
        Set             = 0x150F,
    }; // enum class Op

#ifndef SON8_OVERGLAD_PROFILE_CORE
    // ClipPlane
    enum class Plane : GLenum {
        Num_0   = 0x3000,
        Num_1   = 0x3001,
        Num_2   = 0x3002,
        Num_3   = 0x3003,
        Num_4   = 0x3004,
        Num_5   = 0x3005,
    }; // enum class Plane
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
#endif//SON8_OVERGLAD_PROFILE_CORE

#ifdef SON8_OVERGLAD_VERSION_2_1
    // UseProgram(unused)
    enum class Program : GLenum {
        All = 0x0u,
    }; // enum class Program
#endif//SON8_OVERGLAD_VERSION_2_1

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

#ifdef SON8_OVERGLAD_VERSION_2_1
    // CreateShader
    enum class Shader : GLenum {
        Fragment    = 0x8B30,
        Vertex      = 0x8B31,
    }; // enum class Shader
#endif//SON8_OVERGLAD_VERSION_2_1

#ifdef SON8_OVERGLAD_VERSION_1_5
    // BufferData
    enum class Usage : GLenum {
        Stream_Draw     = 0x88E0,
        Stream_Read     = 0x88E1,
        Stream_Copy     = 0x88E2,
        Static_Draw     = 0x88E4,
        Static_Read     = 0x88E5,
        Static_Copy     = 0x88E6,
        Dynamic_Draw    = 0x88E8,
        Dynamic_Read    = 0x88E9,
        Dynamic_Copy    = 0x88EA,
    }; // enum class Usage
#endif//SON8_OVERGLAD_VERSION_1_5
} // namespace son8::overglad::enums
namespace son8::overglad::types {
#ifndef SON8_OVERGLAD_PROFILE_CORE
    using array1i       = std::array< GLint, 1 >;
    using array1s       = std::array< GLshort, 1 >;
    using array1f       = std::array< GLfloat, 1 >;
    using array1d       = std::array< GLdouble, 1 >;
    using array1ub      = std::array< GLubyte, 1 >;
    using array1bool    = std::array< GLboolean, 1 >;

    using array2i       = std::array< GLint, 2 >;
    using array2s       = std::array< GLshort, 2 >;
    using array2f       = std::array< GLfloat, 2 >;
    using array2d       = std::array< GLdouble, 2 >;

    using array3i       = std::array< GLint, 3 >;
    using array3b       = std::array< GLbyte, 3 >;
    using array3s       = std::array< GLshort, 3 >;
    using array3f       = std::array< GLfloat, 3 >;
    using array3d       = std::array< GLdouble, 3 >;
    using array3ui      = std::array< GLuint, 3 >;
    using array3ub      = std::array< GLubyte, 3 >;
    using array3us      = std::array< GLushort, 3 >;

    using array4i       = std::array< GLint, 4 >;
    using array4b       = std::array< GLbyte, 4 >;
    using array4s       = std::array< GLshort, 4 >;
    using array4f       = std::array< GLfloat, 4 >;
    using array4d       = std::array< GLdouble, 4 >;
    using array4ui      = std::array< GLuint, 4 >;
    using array4ub      = std::array< GLubyte, 4 >;
    using array4us      = std::array< GLushort, 4 >;

    using array16f      = std::array< GLfloat, 16 >;
    using array16d      = std::array< GLdouble, 16 >;
#endif//SON8_OVERGLAD_PROFILE_CORE

#ifdef SON8_OVERGLAD_VERSION_1_5
    // TODO: for future use Buffer as NamedBuffer
    // (similar to Tex and Texture in original opengl spec)
    template< enums::Buffer T >
    class Buf final {
        GLuint index_;
    public:
        Buf( GLuint index = 0 ) : index_{ index } { };
        operator GLuint( ) const noexcept { return index_; }
        auto index( ) const noexcept { return index_; }
        auto type( ) const noexcept { return T; }
    };

    template< enums::Buffer T >
    class Bufs final {
        GLuint *data_;
        GLsizei size_;
    public:
        Bufs( GLsizei size = 8 ) : data_{ new GLuint[size] }, size_{ size } { zero( ); }
        ~Bufs( ) { delete [] data_; }
        Bufs( Bufs && ) = delete;
        Bufs( Bufs const & ) = delete;
        Bufs &operator=( Bufs && ) = delete;
        Bufs &operator=( Bufs const & ) = delete;

        auto operator[]( GLsizei index ) const { return Buf< T >{ data_[index] }; }

        auto data( ) noexcept { return data_; }
        auto data( ) const noexcept -> GLuint const * { return data_; }
        auto size( ) const noexcept { return size_; }
        void zero( ) noexcept { for ( int i = 0; i < size_; ++i ) data_[i] = 0; }
    };

    using buf_array = Buf< enums::Buffer::Array >;
    using buf_element = Buf< enums::Buffer::Element >;
    using bufs_array = Bufs< enums::Buffer::Array >;
    using bufs_element = Bufs< enums::Buffer::Element >;
#endif//SON8_OVERGLAD_VERSION_1_5

#ifdef SON8_OVERGLAD_VERSION_2_1
    template< typename Type, unsigned Size = 0u, bool Norm = false >
    class Attrib final {
        static_assert( Size < 5, "Attrib Size must be less than 5" );
        GLuint index_;
    public:
        using type = Type;
        constexpr Attrib( GLuint index = 0 ) : index_{ index } { };
        constexpr auto size( ) const noexcept { return Size; }
        constexpr bool norm( ) const noexcept { return Norm; }
        constexpr auto index( ) const noexcept { return index_; }
    };
    // coord attribs
    using attrib0s      = Attrib< GLshort >;
    using attrib0f      = Attrib< GLfloat >;
    using attrib0d      = Attrib< GLdouble >;
    // array attribs
    using attrib1s      = Attrib< GLshort, 1 >;
    using attrib2s      = Attrib< GLshort, 2 >;
    using attrib3s      = Attrib< GLshort, 3 >;
    using attrib4s      = Attrib< GLshort, 4 >;
    using attrib1f      = Attrib< GLfloat, 1 >;
    using attrib2f      = Attrib< GLfloat, 2 >;
    using attrib3f      = Attrib< GLfloat, 3 >;
    using attrib4f      = Attrib< GLfloat, 4 >;
    using attrib1d      = Attrib< GLdouble, 1 >;
    using attrib2d      = Attrib< GLdouble, 2 >;
    using attrib3d      = Attrib< GLdouble, 3 >;
    using attrib4d      = Attrib< GLdouble, 4 >;
    using attrib4b      = Attrib< GLbyte, 4 >;
    using attrib4i      = Attrib< GLint, 4 >;
    using attrib4ub     = Attrib< GLubyte, 4 >;
    using attrib4us     = Attrib< GLushort, 4 >;
    using attrib4ui     = Attrib< GLuint, 4 >;
    // coord attribs normalized
    using attrib0Nub    = Attrib< GLubyte, 0, true >;
    // array attribs normalized
    using attrib4Ni     = Attrib< GLint, 4, true >;
    using attrib4Nb     = Attrib< GLbyte, 4, true >;
    using attrib4Ns     = Attrib< GLshort, 4, true >;
    using attrib4Nui    = Attrib< GLuint, 4, true >;
    using attrib4Nub    = Attrib< GLubyte, 4, true >;
    using attrib4Nus    = Attrib< GLushort, 4, true >;

    class Shader final {
        GLuint index_;
    public:
        Shader( GLuint index = 0 ) : index_{ index } { };
        operator GLuint( ) const noexcept { return index_; }
        auto index( ) const noexcept { return index_; }
    };

    class Program final {
        GLuint index_;
    public:
        Program( GLuint index = 0 ) : index_{ index } { };
        operator GLuint( ) const noexcept { return index_; }
        auto index( ) const noexcept { return index_; }
    };
#endif//SON8_OVERGLAD_VERSION_2_1
} // namespace son8::overglad::types

#define SON8_OVERGLAD_DEPR [[deprecated]] inline auto
#define SON8_OVERGLAD_DISC inline auto
#define SON8_OVERGLAD_FUNC [[nodiscard]] inline auto
#define SON8_OVERGLAD_PROC inline void

#ifdef      SON8_OVERGLAD_INCLUDE
#include <son8/overglad/v1_1.hxx>
#include <son8/overglad/v1_5.hxx>
#include <son8/overglad/v2_1.hxx>
#include <son8/overglad/v3_3.hxx>
#include <son8/overglad/v4_3.hxx>
#endif    //SON8_OVERGLAD_INCLUDE

#endif//SON8_OVERGLAD_HXX
// Ⓒ 2025 Oleg'Ease'Kharchuk ᦒ
