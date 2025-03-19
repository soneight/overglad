#ifndef SON8_OVERGLAD_V1_1_HXX
#define SON8_OVERGLAD_V1_1_HXX

# ifndef          SON8_OVERGLAD_DEFINED
# define          SON8_OVERGLAD_DEFINED
# define      SON8_OVERGLAD_VERSION_1_1
# define     SON8_OVERGLAD_PROFILE_NONE
# define SON8_OVERGLAD_VERSION 0x010100
#  endif        //SON8_OVERGLAD_DEFINED

#include <son8/overglad.hxx>

namespace son8::overglad {
    // additions
    template< typename T >
    SON8_OVERGLAD_FUNC get( ) noexcept;
    // Chapter 2: OpenGL Operation
    template< >
    SON8_OVERGLAD_FUNC get< enums::Error >( ) noexcept
    { return static_cast< enums::Error >( glad_glGetError() ); }
#ifndef SON8_OVERGLAD_PROFILE_CORE
    SON8_OVERGLAD_PROC begin( ) noexcept
    { glad_glBegin( static_cast< GLenum >( enums::Draw::Default ) ); }
    SON8_OVERGLAD_PROC begin( enums::Draw mode ) noexcept
    { glad_glBegin( static_cast< GLenum >( mode ) ); }
    SON8_OVERGLAD_PROC end( ) noexcept
    { glad_glEnd( ); }
    SON8_OVERGLAD_PROC edge_flag( enums::Boolean flag ) noexcept
    { glad_glEdgeFlag( static_cast< GLboolean >( flag ) ); }
    /* TODO (v) */
#if SON8_OVERGLAD_TODO_V
    SON8_OVERGLAD_PROC edge_flag( types::array1bool const &flagv ) noexcept
    { glad_glEdgeFlagv( flagv.data( ) ); }
#endif
    SON8_OVERGLAD_PROC vertex( GLint x, GLint y ) noexcept
    { glad_glVertex2i( x, y ); }
    SON8_OVERGLAD_PROC vertex( GLshort x, GLshort y ) noexcept
    { glad_glVertex2s( x, y ); }
    SON8_OVERGLAD_PROC vertex( GLfloat x, GLfloat y ) noexcept
    { glad_glVertex2f( x, y ); }
    SON8_OVERGLAD_PROC vertex( GLdouble x, GLdouble y ) noexcept
    { glad_glVertex2d( x, y ); }
    SON8_OVERGLAD_PROC vertex( GLint x, GLint y, GLint z ) noexcept
    { glad_glVertex3i( x, y, z ); }
    SON8_OVERGLAD_PROC vertex( GLshort x, GLshort y, GLshort z ) noexcept
    { glad_glVertex3s( x, y, z ); }
    SON8_OVERGLAD_PROC vertex( GLfloat x, GLfloat y, GLfloat z ) noexcept
    { glad_glVertex3f( x, y, z ); }
    SON8_OVERGLAD_PROC vertex( GLdouble x, GLdouble y, GLdouble z ) noexcept
    { glad_glVertex3d( x, y, z ); }
    SON8_OVERGLAD_PROC vertex( GLint x, GLint y, GLint z, GLint w ) noexcept
    { glad_glVertex4i( x, y, z, w ); }
    SON8_OVERGLAD_PROC vertex( GLshort x, GLshort y, GLshort z, GLshort w ) noexcept
    { glad_glVertex4s( x, y, z, w ); }
    SON8_OVERGLAD_PROC vertex( GLfloat x, GLfloat y, GLfloat z, GLshort w ) noexcept
    { glad_glVertex4f( x, y, z, w ); }
    SON8_OVERGLAD_PROC vertex( GLdouble x, GLdouble y, GLdouble z, GLdouble w ) noexcept
    { glad_glVertex4d( x, y, z, w ); }
#endif//SON8_OVERGLAD_PROFILE_CORE

#ifdef  SON8_OVERGLAD_INCLUDE_DEPRECATED
    // Chapter 2: OpenGL Operation
    SON8_OVERGLAD_DEPR get_error( )
    { return glGetError( ); }
    SON8_OVERGLAD_DEPR begin(GLenum mode)
    { glBegin( mode ); }
    SON8_OVERGLAD_DEPR edge_flag( GLboolean flag )
    { glEdgeFlag( flag ); }
    SON8_OVERGLAD_DEPR edge_flag( GLboolean const *flag )
    { glEdgeFlagv( flag ); }
    SON8_OVERGLAD_DEPR vertex_2( GLint const *v )
    { glVertex2iv( v ); }
    SON8_OVERGLAD_DEPR vertex_3( GLint const *v )
    { glVertex3iv( v ); }
    SON8_OVERGLAD_DEPR vertex_4( GLint const *v )
    { glVertex4iv( v ); }
    SON8_OVERGLAD_DEPR vertex_2( GLshort const *v )
    { glVertex2sv( v ); }
    SON8_OVERGLAD_DEPR vertex_3( GLshort const *v )
    { glVertex3sv( v ); }
    SON8_OVERGLAD_DEPR vertex_4( GLshort const *v )
    { glVertex4sv( v ); }
    SON8_OVERGLAD_DEPR vertex_2( GLfloat const *v )
    { glVertex2fv( v ); }
    SON8_OVERGLAD_DEPR vertex_3( GLfloat const *v )
    { glVertex3fv( v ); }
    SON8_OVERGLAD_DEPR vertex_4( GLfloat const *v )
    { glVertex4fv( v ); }
    SON8_OVERGLAD_DEPR vertex_2( GLdouble const *v )
    { glVertex2dv( v ); }
    SON8_OVERGLAD_DEPR vertex_3( GLdouble const *v )
    { glVertex3dv( v ); }
    SON8_OVERGLAD_DEPR vertex_4( GLdouble const *v )
    { glVertex4dv( v ); }
#endif//SON8_OVERGLAD_INCLUDE_DEPRECATED

} // namespace son8::overglad

#endif//SON8_OVERGLAD_V1_1_HXX
// Ⓒ 2025 Oleg'Ease'Kharchuk ᦒ
