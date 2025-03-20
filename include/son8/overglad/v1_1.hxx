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
    // TODO: wrapper for draw_{arrays|elements}
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
    SON8_OVERGLAD_PROC tex_coord( GLint s ) noexcept
    { glad_glTexCoord1i( s ); }
    SON8_OVERGLAD_PROC tex_coord( GLshort s ) noexcept
    { glad_glTexCoord1s( s ); }
    SON8_OVERGLAD_PROC tex_coord( GLfloat s ) noexcept
    { glad_glTexCoord1f( s ); }
    SON8_OVERGLAD_PROC tex_coord( GLdouble s ) noexcept
    { glad_glTexCoord1d( s ); }
    SON8_OVERGLAD_PROC tex_coord( GLint s, GLint t ) noexcept
    { glad_glTexCoord2i( s, t ); }
    SON8_OVERGLAD_PROC tex_coord( GLshort s, GLshort t ) noexcept
    { glad_glTexCoord2s( s, t ); }
    SON8_OVERGLAD_PROC tex_coord( GLfloat s, GLfloat t ) noexcept
    { glad_glTexCoord2f( s, t ); }
    SON8_OVERGLAD_PROC tex_coord( GLdouble s, GLdouble t ) noexcept
    { glad_glTexCoord2d( s, t ); }
    SON8_OVERGLAD_PROC tex_coord( GLint s, GLint t, GLint p ) noexcept
    { glad_glTexCoord3i( s, t, p ); }
    SON8_OVERGLAD_PROC tex_coord( GLshort s, GLshort t, GLshort p ) noexcept
    { glad_glTexCoord3s( s, t, p ); }
    SON8_OVERGLAD_PROC tex_coord( GLfloat s, GLfloat t, GLfloat p ) noexcept
    { glad_glTexCoord3f( s, t, p ); }
    SON8_OVERGLAD_PROC tex_coord( GLdouble s, GLdouble t, GLdouble p ) noexcept
    { glad_glTexCoord3d( s, t, p ); }
    SON8_OVERGLAD_PROC tex_coord( GLint s, GLint t, GLint p, GLint q ) noexcept
    { glad_glTexCoord4i( s, t, p, q ); }
    SON8_OVERGLAD_PROC tex_coord( GLshort s, GLshort t, GLshort p, GLshort q ) noexcept
    { glad_glTexCoord4s( s, t, p, q ); }
    SON8_OVERGLAD_PROC tex_coord( GLfloat s, GLfloat t, GLfloat p, GLfloat q ) noexcept
    { glad_glTexCoord4f( s, t, p, q ); }
    SON8_OVERGLAD_PROC tex_coord( GLdouble s, GLdouble t, GLdouble p, GLdouble q ) noexcept
    { glad_glTexCoord4d( s, t, p, q ); }
    SON8_OVERGLAD_PROC normal( GLbyte x, GLbyte y, GLbyte z ) noexcept
    { glad_glNormal3b( x, y, z ); }
    SON8_OVERGLAD_PROC normal( GLint x, GLint y, GLint z ) noexcept
    { glad_glNormal3i( x, y, z ); }
    SON8_OVERGLAD_PROC normal( GLshort x, GLshort y, GLshort z ) noexcept
    { glad_glNormal3s( x, y, z ); }
    SON8_OVERGLAD_PROC normal( GLfloat x, GLfloat y, GLfloat z ) noexcept
    { glad_glNormal3f( x, y, z ); }
    SON8_OVERGLAD_PROC normal( GLdouble x, GLdouble y, GLdouble z ) noexcept
    { glad_glNormal3d( x, y, z ); }
    SON8_OVERGLAD_PROC color( GLint r, GLint g, GLint b ) noexcept
    { glad_glColor3i( r, g, b ); }
    SON8_OVERGLAD_PROC color( GLbyte r, GLbyte g, GLbyte b ) noexcept
    { glad_glColor3b( r, g, b ); }
    SON8_OVERGLAD_PROC color( GLuint r, GLuint g, GLuint b ) noexcept
    { glad_glColor3ui( r, g, b ); }
    SON8_OVERGLAD_PROC color( GLubyte r, GLubyte g, GLubyte b ) noexcept
    { glad_glColor3ub( r, g, b ); }
    SON8_OVERGLAD_PROC color( GLshort r, GLshort g, GLshort b ) noexcept
    { glad_glColor3s( r, g, b ); }
    SON8_OVERGLAD_PROC color( GLushort r, GLushort g, GLushort b ) noexcept
    { glad_glColor3us( r, g, b ); }
    SON8_OVERGLAD_PROC color( GLfloat r, GLfloat g, GLfloat b ) noexcept
    { glad_glColor3f( r, g, b ); }
    SON8_OVERGLAD_PROC color( GLdouble r, GLdouble g, GLdouble b ) noexcept
    { glad_glColor3d( r, g, b ); }
    SON8_OVERGLAD_PROC color( GLint r, GLint g, GLint b, GLint a ) noexcept
    { glad_glColor4i( r, g, b, a ); }
    SON8_OVERGLAD_PROC color( GLbyte r, GLbyte g, GLbyte b, GLbyte a ) noexcept
    { glad_glColor4b( r, g, b, a ); }
    SON8_OVERGLAD_PROC color( GLuint r, GLuint g, GLuint b, GLuint a ) noexcept
    { glad_glColor4ui( r, g, b, a ); }
    SON8_OVERGLAD_PROC color( GLubyte r, GLubyte g, GLubyte b, GLubyte a ) noexcept
    { glad_glColor4ub( r, g, b, a ); }
    SON8_OVERGLAD_PROC color( GLshort r, GLshort g, GLshort b, GLshort a ) noexcept
    { glad_glColor4s( r, g, b, a ); }
    SON8_OVERGLAD_PROC color( GLushort r, GLushort g, GLushort b, GLushort a ) noexcept
    { glad_glColor4us( r, g, b, a ); }
    SON8_OVERGLAD_PROC color( GLfloat r, GLfloat g, GLfloat b, GLfloat a ) noexcept
    { glad_glColor4f( r, g, b, a ); }
    SON8_OVERGLAD_PROC color( GLdouble r, GLdouble g, GLdouble b, GLdouble a ) noexcept
    { glad_glColor4d( r, g, b, a ); }
    SON8_OVERGLAD_PROC index( GLint i ) noexcept
    { glad_glIndexi( i ); }
    SON8_OVERGLAD_PROC index( GLshort i ) noexcept
    { glad_glIndexs( i ); }
    SON8_OVERGLAD_PROC index( GLubyte i ) noexcept
    { glad_glIndexub( i ); }
    SON8_OVERGLAD_PROC index( GLfloat i ) noexcept
    { glad_glIndexf( i ); }
    SON8_OVERGLAD_PROC index( GLdouble i ) noexcept
    { glad_glIndexd( i ); }
    // TODO: wrapper for {edge_flag|tex_coord|color|index|vertex}_pointer
    SON8_OVERGLAD_PROC enable( enums::ClientState array ) noexcept
    { glad_glEnableClientState( static_cast< GLenum >( array ) ); }
    SON8_OVERGLAD_PROC disable( enums::ClientState array ) noexcept
    { glad_glDisableClientState( static_cast< GLenum >( array ) ); }
    SON8_OVERGLAD_PROC array_element( GLint i ) noexcept
    { glad_glArrayElement( i ); }
    // TODO: wrapper for interleaved_arrays
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
    SON8_OVERGLAD_DEPR tex_coord_1( GLint const *v )
    { glTexCoord1iv( v ); }
    SON8_OVERGLAD_DEPR tex_coord_1( GLshort const *v )
    { glTexCoord1sv( v ); }
    SON8_OVERGLAD_DEPR tex_coord_1( GLfloat const *v )
    { glTexCoord1fv( v ); }
    SON8_OVERGLAD_DEPR tex_coord_1( GLdouble const *v )
    { glTexCoord1dv( v ); }
    SON8_OVERGLAD_DEPR tex_coord_2( GLint const *v )
    { glTexCoord2iv( v ); }
    SON8_OVERGLAD_DEPR tex_coord_2( GLshort const *v )
    { glTexCoord2sv( v ); }
    SON8_OVERGLAD_DEPR tex_coord_2( GLfloat const *v )
    { glTexCoord2fv( v ); }
    SON8_OVERGLAD_DEPR tex_coord_2( GLdouble const *v )
    { glTexCoord2dv( v ); }
    SON8_OVERGLAD_DEPR tex_coord_3( GLint const *v )
    { glTexCoord3iv( v ); }
    SON8_OVERGLAD_DEPR tex_coord_3( GLshort const *v )
    { glTexCoord3sv( v ); }
    SON8_OVERGLAD_DEPR tex_coord_3( GLfloat const *v )
    { glTexCoord3fv( v ); }
    SON8_OVERGLAD_DEPR tex_coord_3( GLdouble const *v )
    { glTexCoord3dv( v ); }
    SON8_OVERGLAD_DEPR tex_coord_4( GLint const *v )
    { glTexCoord4iv( v ); }
    SON8_OVERGLAD_DEPR tex_coord_4( GLshort const *v )
    { glTexCoord4sv( v ); }
    SON8_OVERGLAD_DEPR tex_coord_4( GLfloat const *v )
    { glTexCoord4fv( v ); }
    SON8_OVERGLAD_DEPR tex_coord_4( GLdouble const *v )
    { glTexCoord4dv( v ); }
    SON8_OVERGLAD_DEPR normal( GLbyte const *v )
    { glNormal3bv( v ); }
    SON8_OVERGLAD_DEPR normal( GLint const *v )
    { glNormal3iv( v ); }
    SON8_OVERGLAD_DEPR normal( GLshort const *v )
    { glNormal3sv( v ); }
    SON8_OVERGLAD_DEPR normal( GLfloat const *v )
    { glNormal3fv( v ); }
    SON8_OVERGLAD_DEPR normal( GLdouble const *v )
    { glNormal3dv( v ); }
    SON8_OVERGLAD_DEPR color_3( GLint const *v )
    { glColor3iv( v ); }
    SON8_OVERGLAD_DEPR color_3( GLbyte const *v )
    { glColor3bv( v ); }
    SON8_OVERGLAD_DEPR color_3( GLuint const *v )
    { glColor3uiv( v ); }
    SON8_OVERGLAD_DEPR color_3( GLubyte const *v )
    { glColor3ubv( v ); }
    SON8_OVERGLAD_DEPR color_3( GLshort const *v )
    { glColor3sv( v ); }
    SON8_OVERGLAD_DEPR color_3( GLushort const *v )
    { glColor3usv( v ); }
    SON8_OVERGLAD_DEPR color_3( GLfloat const *v )
    { glColor3fv( v ); }
    SON8_OVERGLAD_DEPR color_3( GLdouble const *v )
    { glColor3dv( v ); }
    SON8_OVERGLAD_DEPR color_4( GLint const *v )
    { glColor4iv( v ); }
    SON8_OVERGLAD_DEPR color_4( GLbyte const *v )
    { glColor4bv( v ); }
    SON8_OVERGLAD_DEPR color_4( GLuint const *v )
    { glColor4uiv( v ); }
    SON8_OVERGLAD_DEPR color_4( GLubyte const *v )
    { glColor4ubv( v ); }
    SON8_OVERGLAD_DEPR color_4( GLshort const *v )
    { glColor4sv( v ); }
    SON8_OVERGLAD_DEPR color_4( GLushort const *v )
    { glColor4usv( v ); }
    SON8_OVERGLAD_DEPR color_4( GLfloat const *v )
    { glColor4fv( v ); }
    SON8_OVERGLAD_DEPR color_4( GLdouble const *v )
    { glColor4dv( v ); }
    SON8_OVERGLAD_DEPR index( GLint const *v )
    { glIndexiv( v ); }
    SON8_OVERGLAD_DEPR index( GLshort const *v )
    { glIndexsv( v ); }
    SON8_OVERGLAD_DEPR index( GLubyte const *v )
    { glIndexubv( v ); }
    SON8_OVERGLAD_DEPR index( GLfloat const *v )
    { glIndexfv( v ); }
    SON8_OVERGLAD_DEPR index( GLdouble const *v )
    { glIndexdv( v ); }
    SON8_OVERGLAD_DEPR edge_flag_pointer( GLsizei stride, GLvoid const *pointer)
    { glEdgeFlagPointer( stride, pointer ); }
    SON8_OVERGLAD_DEPR tex_coord_pointer( GLint size, GLenum type, GLsizei stride, GLvoid const *pointer)
    { glTexCoordPointer( size, type, stride, pointer ); }
    SON8_OVERGLAD_DEPR color_pointer( GLint size, GLenum type, GLsizei stride, GLvoid const *pointer)
    { glColorPointer( size, type, stride, pointer ); }
    SON8_OVERGLAD_DEPR index_pointer( GLenum type, GLsizei stride, GLvoid const *pointer)
    { glIndexPointer( type, stride, pointer ); }
    SON8_OVERGLAD_DEPR normal_pointer( GLenum type, GLsizei stride, GLvoid const *pointer)
    { glNormalPointer( type, stride, pointer ); }
    SON8_OVERGLAD_DEPR vertex_pointer( GLint size, GLenum type, GLsizei stride, GLvoid const *pointer)
    { glVertexPointer( size, type, stride, pointer ); }
    SON8_OVERGLAD_DEPR enable_client_state( GLenum array )
    { glEnableClientState( array ); }
    SON8_OVERGLAD_DEPR disable_client_state( GLenum array )
    { glDisableClientState( array ); }
    SON8_OVERGLAD_DEPR draw_arrays( GLenum mode, GLint first, GLsizei count )
    { glDrawArrays( mode, first, count ); }
    SON8_OVERGLAD_DEPR draw_elements( GLenum mode, GLsizei count, GLenum type, GLvoid const *indices )
    { glDrawElements( mode, count, type, indices ); }
    SON8_OVERGLAD_DEPR interleaved_arrays( GLenum format, GLsizei stride, GLvoid const *pointer )
    { glInterleavedArrays( format, stride, pointer ); }
#endif//SON8_OVERGLAD_INCLUDE_DEPRECATED

} // namespace son8::overglad

#endif//SON8_OVERGLAD_V1_1_HXX
// Ⓒ 2025 Oleg'Ease'Kharchuk ᦒ
