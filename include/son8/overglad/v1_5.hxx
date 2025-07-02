#ifndef SON8_OVERGLAD_V1_5_HXX
#define SON8_OVERGLAD_V1_5_HXX

#ifndef          SON8_OVERGLAD_DEFINED
#define          SON8_OVERGLAD_DEFINED
#define      SON8_OVERGLAD_VERSION_1_1
#define      SON8_OVERGLAD_VERSION_1_5
#define     SON8_OVERGLAD_PROFILE_NONE
#define SON8_OVERGLAD_VERSION 0x010500
#include                    "v1_1.hxx"
#endif         //SON8_OVERGLAD_DEFINED

namespace son8::overglad {
    // core
#ifndef SON8_OVERGLAD_PROFILE_CORE
    // compatibility
    // Chapter 2: OpenGL Operation
    // TODO: MultiTexCoord
    SON8_OVERGLAD_PROC fog_coord( GLfloat coord )
    { glad_glFogCoordf( coord ); }
    SON8_OVERGLAD_PROC fog_coord( GLdouble coord )
    { glad_glFogCoordd( coord ); }
    SON8_OVERGLAD_PROC fog_coord( types::array1f const &coord )
    { glad_glFogCoordfv( coord.data( ) ); }
    SON8_OVERGLAD_PROC fog_coord( types::array1d const &coord )
    { glad_glFogCoorddv( coord.data( ) ); }
    SON8_OVERGLAD_PROC secondary_color( GLint r, GLint g, GLint b )
    { glad_glSecondaryColor3i( r, g, b ); }
    SON8_OVERGLAD_PROC secondary_color( GLbyte r, GLbyte g, GLbyte b )
    { glad_glSecondaryColor3b( r, g, b ); }
    SON8_OVERGLAD_PROC secondary_color( GLshort r, GLshort g, GLshort b )
    { glad_glSecondaryColor3s( r, g, b ); }
    SON8_OVERGLAD_PROC secondary_color( GLfloat r, GLfloat g, GLfloat b )
    { glad_glSecondaryColor3f( r, g, b ); }
    SON8_OVERGLAD_PROC secondary_color( GLdouble r, GLdouble g, GLdouble b )
    { glad_glSecondaryColor3d( r, g, b ); }
    SON8_OVERGLAD_PROC secondary_color( GLuint r, GLuint g, GLuint b )
    { glad_glSecondaryColor3ui( r, g, b ); }
    SON8_OVERGLAD_PROC secondary_color( GLubyte r, GLubyte g, GLubyte b )
    { glad_glSecondaryColor3ub( r, g, b ); }
    SON8_OVERGLAD_PROC secondary_color( GLushort r, GLushort g, GLushort b )
    { glad_glSecondaryColor3us( r, g, b ); }
    SON8_OVERGLAD_PROC secondary_color( types::array3i const &components )
    { glad_glSecondaryColor3iv( components.data( ) ); }
    SON8_OVERGLAD_PROC secondary_color( types::array3b const &components )
    { glad_glSecondaryColor3bv( components.data( ) ); }
    SON8_OVERGLAD_PROC secondary_color( types::array3s const &components)
    { glad_glSecondaryColor3sv( components.data( ) ); }
    SON8_OVERGLAD_PROC secondary_color( types::array3f const &components )
    { glad_glSecondaryColor3fv( components.data( ) ); }
    SON8_OVERGLAD_PROC secondary_color( types::array3d const &components )
    { glad_glSecondaryColor3dv( components.data( ) ); }
    SON8_OVERGLAD_PROC secondary_color( types::array3ui const &components )
    { glad_glSecondaryColor3uiv( components.data( ) ); }
    SON8_OVERGLAD_PROC secondary_color( types::array3ub const &components )
    { glad_glSecondaryColor3ubv( components.data( ) ); }
    SON8_OVERGLAD_PROC secondary_color( types::array3us const &components )
    { glad_glSecondaryColor3usv( components.data( ) ); }
#endif//SON8_OVERGLAD_PROFILE_CORE
#ifdef  SON8_OVERGLAD_INCLUDE_DEPRECATED
    // deprecated
    // Chapter 2: OpenGL Operation
    SON8_OVERGLAD_DEPR multi_tex_coord( GLenum texture, GLint s )
    { glad_glMultiTexCoord1i( texture, s ); }
    SON8_OVERGLAD_DEPR multi_tex_coord( GLenum texture, GLshort s )
    { glad_glMultiTexCoord1s( texture, s ); }
    SON8_OVERGLAD_DEPR multi_tex_coord( GLenum texture, GLfloat s )
    { glad_glMultiTexCoord1f( texture, s ); }
    SON8_OVERGLAD_DEPR multi_tex_coord( GLenum texture, GLdouble s )
    { glad_glMultiTexCoord1d( texture, s ); }
    SON8_OVERGLAD_DEPR multi_tex_coord( GLenum texture, GLint s, GLint t )
    { glad_glMultiTexCoord2i( texture, s, t ); }
    SON8_OVERGLAD_DEPR multi_tex_coord( GLenum texture, GLshort s, GLshort t )
    { glad_glMultiTexCoord2s( texture, s, t ); }
    SON8_OVERGLAD_DEPR multi_tex_coord( GLenum texture, GLfloat s, GLfloat t )
    { glad_glMultiTexCoord2f( texture, s, t ); }
    SON8_OVERGLAD_DEPR multi_tex_coord( GLenum texture, GLdouble s, GLdouble t )
    { glad_glMultiTexCoord2d( texture, s, t ); }
    SON8_OVERGLAD_DEPR multi_tex_coord( GLenum texture, GLint s, GLint t, GLint p )
    { glad_glMultiTexCoord3i( texture, s, t, p ); }
    SON8_OVERGLAD_DEPR multi_tex_coord( GLenum texture, GLshort s, GLshort t, GLshort p )
    { glad_glMultiTexCoord3s( texture, s, t, p ); }
    SON8_OVERGLAD_DEPR multi_tex_coord( GLenum texture, GLfloat s, GLfloat t, GLfloat p )
    { glad_glMultiTexCoord3f( texture, s, t, p ); }
    SON8_OVERGLAD_DEPR multi_tex_coord( GLenum texture, GLdouble s, GLdouble t, GLdouble p )
    { glad_glMultiTexCoord3d( texture, s, t, p ); }
    SON8_OVERGLAD_DEPR multi_tex_coord( GLenum texture, GLint s, GLint t, GLint p, GLint q )
    { glad_glMultiTexCoord4i( texture, s, t, p, q ); }
    SON8_OVERGLAD_DEPR multi_tex_coord( GLenum texture, GLshort s, GLshort t, GLshort p, GLshort q )
    { glad_glMultiTexCoord4s( texture, s, t, p, q ); }
    SON8_OVERGLAD_DEPR multi_tex_coord( GLenum texture, GLfloat s, GLfloat t, GLfloat p, GLfloat q )
    { glad_glMultiTexCoord4f( texture, s, t, p, q ); }
    SON8_OVERGLAD_DEPR multi_tex_coord( GLenum texture, GLdouble s, GLdouble t, GLdouble p, GLdouble q )
    { glad_glMultiTexCoord4d( texture, s, t, p, q ); }
    SON8_OVERGLAD_DEPR multi_tex_coord_1( GLenum texture, GLint const *coords )
    { glad_glMultiTexCoord1iv( texture, coords ); }
    SON8_OVERGLAD_DEPR multi_tex_coord_1( GLenum texture, GLshort const *coords )
    { glad_glMultiTexCoord1sv( texture, coords ); }
    SON8_OVERGLAD_DEPR multi_tex_coord_1( GLenum texture, GLfloat const *coords )
    { glad_glMultiTexCoord1fv( texture, coords ); }
    SON8_OVERGLAD_DEPR multi_tex_coord_1( GLenum texture, GLdouble const *coords )
    { glad_glMultiTexCoord1dv( texture, coords ); }
    SON8_OVERGLAD_DEPR multi_tex_coord_2( GLenum texture, GLint const *coords )
    { glad_glMultiTexCoord2iv( texture, coords ); }
    SON8_OVERGLAD_DEPR multi_tex_coord_2( GLenum texture, GLshort const *coords )
    { glad_glMultiTexCoord2sv( texture, coords ); }
    SON8_OVERGLAD_DEPR multi_tex_coord_2( GLenum texture, GLfloat const *coords )
    { glad_glMultiTexCoord2fv( texture, coords ); }
    SON8_OVERGLAD_DEPR multi_tex_coord_2( GLenum texture, GLdouble const *coords )
    { glad_glMultiTexCoord2dv( texture, coords ); }
    SON8_OVERGLAD_DEPR multi_tex_coord_3( GLenum texture, GLint const *coords )
    { glad_glMultiTexCoord3iv( texture, coords ); }
    SON8_OVERGLAD_DEPR multi_tex_coord_3( GLenum texture, GLshort const *coords )
    { glad_glMultiTexCoord3sv( texture, coords ); }
    SON8_OVERGLAD_DEPR multi_tex_coord_3( GLenum texture, GLfloat const *coords )
    { glad_glMultiTexCoord3fv( texture, coords ); }
    SON8_OVERGLAD_DEPR multi_tex_coord_3( GLenum texture, GLdouble const *coords )
    { glad_glMultiTexCoord3dv( texture, coords ); }
    SON8_OVERGLAD_DEPR multi_tex_coord_4( GLenum texture, GLint const *coords )
    { glad_glMultiTexCoord4iv( texture, coords ); }
    SON8_OVERGLAD_DEPR multi_tex_coord_4( GLenum texture, GLshort const *coords )
    { glad_glMultiTexCoord4sv( texture, coords ); }
    SON8_OVERGLAD_DEPR multi_tex_coord_4( GLenum texture, GLfloat const *coords )
    { glad_glMultiTexCoord4fv( texture, coords ); }
    SON8_OVERGLAD_DEPR multi_tex_coord_4( GLenum texture, GLdouble const *coords )
    { glad_glMultiTexCoord4dv( texture, coords ); }
    SON8_OVERGLAD_DEPR fog_coord( GLfloat const *coord )
    { glad_glFogCoordfv( coord ); }
    SON8_OVERGLAD_DEPR fog_coord( GLdouble const *coord )
    { glad_glFogCoorddv( coord ); }
    SON8_OVERGLAD_DEPR secondary_color( GLint const *components )
    { glad_glSecondaryColor3iv( components ); }
    SON8_OVERGLAD_DEPR secondary_color( GLbyte const *components )
    { glad_glSecondaryColor3bv( components ); }
    SON8_OVERGLAD_DEPR secondary_color( GLshort const *components)
    { glad_glSecondaryColor3sv( components ); }
    SON8_OVERGLAD_DEPR secondary_color( GLfloat const *components )
    { glad_glSecondaryColor3fv( components ); }
    SON8_OVERGLAD_DEPR secondary_color( GLdouble const *components )
    { glad_glSecondaryColor3dv( components ); }
    SON8_OVERGLAD_DEPR secondary_color( GLuint const *components )
    { glad_glSecondaryColor3uiv( components ); }
    SON8_OVERGLAD_DEPR secondary_color( GLubyte const *components )
    { glad_glSecondaryColor3ubv( components ); }
    SON8_OVERGLAD_DEPR secondary_color( GLushort const *components )
    { glad_glSecondaryColor3usv( components ); }
#endif//SON8_OVERGLAD_INCLUDE_DEPRECATED
} // namespace son8::overglad

#endif//SON8_OVERGLAD_V1_5_HXX
// Ⓒ 2025 Oleg'Ease'Kharchuk ᦒ
