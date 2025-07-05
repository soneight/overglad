#ifndef SON8_OVERGLAD_V2_1_HXX
#define SON8_OVERGLAD_V2_1_HXX

#ifndef          SON8_OVERGLAD_DEFINED
#define          SON8_OVERGLAD_DEFINED
#define      SON8_OVERGLAD_VERSION_1_1
#define      SON8_OVERGLAD_VERSION_1_5
#define      SON8_OVERGLAD_VERSION_2_1
#define     SON8_OVERGLAD_PROFILE_NONE
#define SON8_OVERGLAD_VERSION 0x020100
#include                    "v1_1.hxx"
#include                    "v1_5.hxx"
#endif         //SON8_OVERGLAD_DEFINED

namespace son8::overglad {
    // core
    // Chapter 2: OpenGL Operation
    template< typename Type >
    SON8_OVERGLAD_PROC vertex_attrib( types::Attrib< Type > attrib, Type x )
    {
        /*_*/if constexpr ( std::is_same_v< Type, GLshort > ) glad_glVertexAttrib1s( attrib.index( ), x );
        else if constexpr ( std::is_same_v< Type, GLfloat > ) glad_glVertexAttrib1f( attrib.index( ), x );
        else if constexpr ( std::is_same_v< Type, GLdouble > ) glad_glVertexAttrib1d( attrib.index( ), x );
        else static_assert( false, "Invalid T for vertex_attrib with Size equal 0" );
    }
    template< typename Type >
    SON8_OVERGLAD_PROC vertex_attrib( types::Attrib< Type > attrib, Type x, Type y )
    {
        /*_*/if constexpr ( std::is_same_v< Type, GLshort > ) glad_glVertexAttrib2s( attrib.index( ), x, y );
        else if constexpr ( std::is_same_v< Type, GLfloat > ) glad_glVertexAttrib2f( attrib.index( ), x, y );
        else if constexpr ( std::is_same_v< Type, GLdouble > ) glad_glVertexAttrib2d( attrib.index( ), x, y );
        else static_assert( false, "Invalid Type for vertex_attrib with Size equal 0" );
    }
    template< typename Type >
    SON8_OVERGLAD_PROC vertex_attrib( types::Attrib< Type > attrib, Type x, Type y, Type z )
    {
        /*_*/if constexpr ( std::is_same_v< Type, GLshort > ) glad_glVertexAttrib3s( attrib.index( ), x, y, z );
        else if constexpr ( std::is_same_v< Type, GLfloat > ) glad_glVertexAttrib3f( attrib.index( ), x, y, z );
        else if constexpr ( std::is_same_v< Type, GLdouble > ) glad_glVertexAttrib3d( attrib.index( ), x, y, z );
        else static_assert( false, "Invalid Type for vertex_attrib with Size equal 0" );
    }
    template< typename Type >
    SON8_OVERGLAD_PROC vertex_attrib( types::Attrib< Type > attrib, Type x, Type y, Type z, Type w )
    {
        /*_*/if constexpr ( std::is_same_v< Type, GLshort > ) glad_glVertexAttrib4s( attrib.index( ), x, y, z, w );
        else if constexpr ( std::is_same_v< Type, GLfloat > ) glad_glVertexAttrib4f( attrib.index( ), x, y, z, w );
        else if constexpr ( std::is_same_v< Type, GLdouble > ) glad_glVertexAttrib4d( attrib.index( ), x, y, z, w );
        else static_assert( false, "Invalid Type for vertex_attrib" );
    }
    SON8_OVERGLAD_PROC vertex_attrib( types::Attrib< GLubyte, 0, true > attrib, GLubyte x, GLubyte y, GLubyte z, GLubyte w )
    { glad_glVertexAttrib4Nub( attrib.index( ), x, y, z, w ); }
    template< typename Type, unsigned Size, bool Norm >
    SON8_OVERGLAD_PROC vertex_attrib( types::Attrib< Type, Size, Norm > attrib, std::array< Type, Size > const &values )
    {
        if constexpr ( Size == 1 ) {
            /*_*/if constexpr ( std::is_same_v< Type, GLshort > ) glad_glVertexAttrib1sv( attrib.index( ), values.data( ) );
            else if constexpr ( std::is_same_v< Type, GLfloat > ) glad_glVertexAttrib1fv( attrib.index( ), values.data( ) );
            else if constexpr ( std::is_same_v< Type, GLdouble > ) glad_glVertexAttrib1dv( attrib.index( ), values.data( ) );
            else static_assert( false, "Invalid Type for vertex_attrib with Size equal 1" );
        } else if constexpr ( Size == 2 ) {
            /*_*/if constexpr ( std::is_same_v< Type, GLshort > ) glad_glVertexAttrib2sv( attrib.index( ), values.data( ) );
            else if constexpr ( std::is_same_v< Type, GLfloat > ) glad_glVertexAttrib2fv( attrib.index( ), values.data( ) );
            else if constexpr ( std::is_same_v< Type, GLdouble > ) glad_glVertexAttrib2dv( attrib.index( ), values.data( ) );
            else static_assert( false, "Invalid Type for vertex_attrib with Size equal 2" );
        } else if constexpr ( Size == 3 ) {
            /*_*/if constexpr ( std::is_same_v< Type, GLshort > ) glad_glVertexAttrib3sv( attrib.index( ), values.data( ) );
            else if constexpr ( std::is_same_v< Type, GLfloat > ) glad_glVertexAttrib3fv( attrib.index( ), values.data( ) );
            else if constexpr ( std::is_same_v< Type, GLdouble > ) glad_glVertexAttrib3dv( attrib.index( ), values.data( ) );
            else static_assert( false, "Invalid Type for vertex_attrib with Size equal 3" );
        } else if constexpr ( Size == 4 ) {
            if constexpr ( Norm == false ) {
                /*_*/if constexpr ( std::is_same_v< Type, GLbyte > ) glad_glVertexAttrib4bv( attrib.index( ), values.data( ) );
                else if constexpr ( std::is_same_v< Type, GLint > ) glad_glVertexAttrib4iv( attrib.index( ), values.data( ) );
                else if constexpr ( std::is_same_v< Type, GLshort > ) glad_glVertexAttrib4sv( attrib.index( ), values.data( ) );
                else if constexpr ( std::is_same_v< Type, GLfloat > ) glad_glVertexAttrib4fv( attrib.index( ), values.data( ) );
                else if constexpr ( std::is_same_v< Type, GLdouble > ) glad_glVertexAttrib4dv( attrib.index( ), values.data( ) );
                else if constexpr ( std::is_same_v< Type, GLubyte > ) glad_glVertexAttrib4ubv( attrib.index( ), values.data( ) );
                else if constexpr ( std::is_same_v< Type, GLushort > ) glad_glVertexAttrib4usv( attrib.index( ), values.data( ) );
                else if constexpr ( std::is_same_v< Type, GLuint > ) glad_glVertexAttrib4uiv( attrib.index( ), values.data( ) );
                else static_assert( false, "Invalid Type for vertex_attrib with Size equal 4" );
            } else {
                /*_*/if constexpr ( std::is_same_v< Type, GLbyte > ) glad_glVertexAttrib4Nbv( attrib.index( ), values.data( ) );
                else if constexpr ( std::is_same_v< Type, GLint > ) glad_glVertexAttrib4Niv( attrib.index( ), values.data( ) );
                else if constexpr ( std::is_same_v< Type, GLshort > ) glad_glVertexAttrib4Nsv( attrib.index( ), values.data( ) );
                else if constexpr ( std::is_same_v< Type, GLubyte > ) glad_glVertexAttrib4Nubv( attrib.index( ), values.data( ) );
                else if constexpr ( std::is_same_v< Type, GLushort > ) glad_glVertexAttrib4Nusv( attrib.index( ), values.data( ) );
                else if constexpr ( std::is_same_v< Type, GLuint > ) glad_glVertexAttrib4Nuiv( attrib.index( ), values.data( ) );
                else static_assert( false, "Invalid Normalize Type for vertex_attrib with Size equal 4" );
            }
        } else static_assert( false, "Invalid Size for vertex_attrib" );
    }
    // compatibility
#ifndef SON8_OVERGLAD_PROFILE_CORE
#endif//SON8_OVERGLAD_PROFILE_CORE
    // deprecated
#ifdef SON8_OVERGLAD_INCLUDE_DEPRECATED
    // Chapter 2: OpenGL Operation
    SON8_OVERGLAD_DEPR vertex_attrib( GLuint index, GLshort x )
    { glVertexAttrib1s( index, x ); }
    SON8_OVERGLAD_DEPR vertex_attrib( GLuint index, GLfloat x )
    { glVertexAttrib1f( index, x ); }
    SON8_OVERGLAD_DEPR vertex_attrib( GLuint index, GLdouble x )
    { glVertexAttrib1d( index, x ); }
    SON8_OVERGLAD_DEPR vertex_attrib( GLuint index, GLshort x, GLshort y )
    { glVertexAttrib2s( index, x, y ); }
    SON8_OVERGLAD_DEPR vertex_attrib( GLuint index, GLfloat x, GLfloat y )
    { glVertexAttrib2f( index, x, y ); }
    SON8_OVERGLAD_DEPR vertex_attrib( GLuint index, GLdouble x, GLdouble y )
    { glVertexAttrib2d( index, x, y ); }
    SON8_OVERGLAD_DEPR vertex_attrib( GLuint index, GLshort x, GLshort y, GLshort z )
    { glVertexAttrib3s( index, x, y, z ); }
    SON8_OVERGLAD_DEPR vertex_attrib( GLuint index, GLfloat x, GLfloat y, GLfloat z )
    { glVertexAttrib3f( index, x, y, z ); }
    SON8_OVERGLAD_DEPR vertex_attrib( GLuint index, GLdouble x, GLdouble y, GLdouble z )
    { glVertexAttrib3d( index, x, y, z ); }
    SON8_OVERGLAD_DEPR vertex_attrib( GLuint index, GLshort x, GLshort y, GLshort z, GLshort w )
    { glVertexAttrib4s( index, x, y, z, w ); }
    SON8_OVERGLAD_DEPR vertex_attrib( GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w )
    { glVertexAttrib4f( index, x, y, z, w ); }
    SON8_OVERGLAD_DEPR vertex_attrib( GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w )
    { glVertexAttrib4d( index, x, y, z, w ); }
    SON8_OVERGLAD_DEPR vertex_attrib( GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w )
    { glVertexAttrib4Nub( index, x, y, z, w ); }
    SON8_OVERGLAD_DEPR vertex_attrib_1( GLuint index, GLshort const *values )
    { glVertexAttrib1sv( index, values ); }
    SON8_OVERGLAD_DEPR vertex_attrib_1( GLuint index, GLfloat const *values )
    { glVertexAttrib1fv( index, values ); }
    SON8_OVERGLAD_DEPR vertex_attrib_1( GLuint index, GLdouble const *values )
    { glVertexAttrib1dv( index, values ); }
    SON8_OVERGLAD_DEPR vertex_attrib_2( GLuint index, GLshort const *values )
    { glVertexAttrib2sv( index, values ); }
    SON8_OVERGLAD_DEPR vertex_attrib_2( GLuint index, GLfloat const *values )
    { glVertexAttrib2fv( index, values ); }
    SON8_OVERGLAD_DEPR vertex_attrib_2( GLuint index, GLdouble const *values )
    { glVertexAttrib2dv( index, values ); }
    SON8_OVERGLAD_DEPR vertex_attrib_3( GLuint index, GLshort const *values )
    { glVertexAttrib3sv( index, values ); }
    SON8_OVERGLAD_DEPR vertex_attrib_3( GLuint index, GLfloat const *values )
    { glVertexAttrib3fv( index, values ); }
    SON8_OVERGLAD_DEPR vertex_attrib_3( GLuint index, GLdouble const *values )
    { glVertexAttrib3dv( index, values ); }
    SON8_OVERGLAD_DEPR vertex_attrib_4( GLuint index, GLbyte const *values )
    { glVertexAttrib4bv( index, values ); }
    SON8_OVERGLAD_DEPR vertex_attrib_4( GLuint index, GLshort const *values )
    { glVertexAttrib4sv( index, values ); }
    SON8_OVERGLAD_DEPR vertex_attrib_4( GLuint index, GLint const *values )
    { glVertexAttrib4iv( index, values ); }
    SON8_OVERGLAD_DEPR vertex_attrib_4( GLuint index, GLfloat const *values )
    { glVertexAttrib4fv( index, values ); }
    SON8_OVERGLAD_DEPR vertex_attrib_4( GLuint index, GLdouble const *values )
    { glVertexAttrib4dv( index, values ); }
    SON8_OVERGLAD_DEPR vertex_attrib_4( GLuint index, GLubyte const *values )
    { glVertexAttrib4ubv( index, values ); }
    SON8_OVERGLAD_DEPR vertex_attrib_4( GLuint index, GLushort const *values )
    { glVertexAttrib4usv( index, values ); }
    SON8_OVERGLAD_DEPR vertex_attrib_4( GLuint index, GLuint const *values )
    { glVertexAttrib4uiv( index, values ); }
    SON8_OVERGLAD_DEPR vertex_attrib_N( GLuint index, GLbyte const *values )
    { glVertexAttrib4Nbv( index, values ); }
    SON8_OVERGLAD_DEPR vertex_attrib_N( GLuint index, GLshort const *values )
    { glVertexAttrib4Nsv( index, values ); }
    SON8_OVERGLAD_DEPR vertex_attrib_N( GLuint index, GLint const *values )
    { glVertexAttrib4Niv( index, values ); }
    SON8_OVERGLAD_DEPR vertex_attrib_N( GLuint index, GLubyte const *values )
    { glVertexAttrib4Nubv( index, values ); }
    SON8_OVERGLAD_DEPR vertex_attrib_N( GLuint index, GLushort const *values )
    { glVertexAttrib4Nusv( index, values ); }
    SON8_OVERGLAD_DEPR vertex_attrib_N( GLuint index, GLuint const *values )
    { glVertexAttrib4Nuiv( index, values ); }
#endif//SON8_OVERGLAD_INCLUDE_DEPRECATED
} // namespace son8::overglad

#endif//SON8_OVERGLAD_V2_1_HXX
// Ⓒ 2025 Oleg'Ease'Kharchuk ᦒ
