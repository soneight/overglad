#ifndef SON8_OVERGLAD_V3_3_HXX
#define SON8_OVERGLAD_V3_3_HXX

#ifndef          SON8_OVERGLAD_DEFINED
#define          SON8_OVERGLAD_DEFINED
#define      SON8_OVERGLAD_VERSION_1_1
#define      SON8_OVERGLAD_VERSION_1_5
#define      SON8_OVERGLAD_VERSION_2_1
#define      SON8_OVERGLAD_VERSION_3_3
#define     SON8_OVERGLAD_PROFILE_CORE
#define SON8_OVERGLAD_VERSION 0x0303CE
#include                    "v1_1.hxx"
#include                    "v1_5.hxx"
#include                    "v2_1.hxx"
#endif         //SON8_OVERGLAD_DEFINED

namespace son8::overglad {
    // core
    // Chapter 2: OpenGL Operation
    // TODO: VertexAttribI*,VertexAttribP*
    // compatibility
#ifndef SON8_OVERGLAD_PROFILE_CORE
#endif//SON8_OVERGLAD_PROFILE_CORE
    // deprecated
#ifdef SON8_OVERGLAD_INCLUDE_DEPRECATED
    // Chapter 2: OpenGL Operation
    SON8_OVERGLAD_DEPR vertex_attrib_I( GLuint index, GLint x )
    { glVertexAttribI1i( index, x ); }
    SON8_OVERGLAD_DEPR vertex_attrib_I( GLuint index, GLuint x )
    { glVertexAttribI1ui( index, x ); }
    SON8_OVERGLAD_DEPR vertex_attrib_I( GLuint index, GLint x, GLint y )
    { glVertexAttribI2i( index, x, y ); }
    SON8_OVERGLAD_DEPR vertex_attrib_I( GLuint index, GLuint x, GLuint y )
    { glVertexAttribI2ui( index, x, y ); }
    SON8_OVERGLAD_DEPR vertex_attrib_I( GLuint index, GLint x, GLint y, GLint z )
    { glVertexAttribI3i( index, x, y, z ); }
    SON8_OVERGLAD_DEPR vertex_attrib_I( GLuint index, GLuint x, GLuint y, GLuint z )
    { glVertexAttribI3ui( index, x, y, z ); }
    SON8_OVERGLAD_DEPR vertex_attrib_I( GLuint index, GLint x, GLint y, GLint z, GLint w )
    { glVertexAttribI4i( index, x, y, z, w ); }
    SON8_OVERGLAD_DEPR vertex_attrib_I( GLuint index, GLuint x, GLuint y, GLuint z, GLuint w )
    { glVertexAttribI4ui( index, x, y, z, w ); }
    SON8_OVERGLAD_DEPR vertex_attrib_I_1( GLuint index, GLint const *values )
    { glVertexAttribI1iv( index, values ); }
    SON8_OVERGLAD_DEPR vertex_attrib_I_1( GLuint index, GLuint const *values )
    { glVertexAttribI1uiv( index, values ); }
    SON8_OVERGLAD_DEPR vertex_attrib_I_2( GLuint index, GLint const *values )
    { glVertexAttribI2iv( index, values ); }
    SON8_OVERGLAD_DEPR vertex_attrib_I_2( GLuint index, GLuint const *values )
    { glVertexAttribI2uiv( index, values ); }
    SON8_OVERGLAD_DEPR vertex_attrib_I_3( GLuint index, GLint const *values )
    { glVertexAttribI3iv( index, values ); }
    SON8_OVERGLAD_DEPR vertex_attrib_I_3( GLuint index, GLuint const *values )
    { glVertexAttribI3uiv( index, values ); }
    SON8_OVERGLAD_DEPR vertex_attrib_I_4( GLuint index, GLint const *values )
    { glVertexAttribI4iv( index, values ); }
    SON8_OVERGLAD_DEPR vertex_attrib_I_4( GLuint index, GLuint const *values )
    { glVertexAttribI4uiv( index, values ); }
    SON8_OVERGLAD_DEPR vertex_attrib_I_4( GLuint index, GLbyte const *values )
    { glVertexAttribI4bv( index, values ); }
    SON8_OVERGLAD_DEPR vertex_attrib_I_4( GLuint index, GLshort const *values )
    { glVertexAttribI4sv( index, values ); }
    SON8_OVERGLAD_DEPR vertex_attrib_I_4( GLuint index, GLubyte const *values )
    { glVertexAttribI4ubv( index, values ); }
    SON8_OVERGLAD_DEPR vertex_attrib_I_4( GLuint index, GLushort const *values )
    { glVertexAttribI4usv( index, values ); }
    SON8_OVERGLAD_DEPR vertex_attrib_P_1( GLuint index, GLenum type, GLboolean normalized, GLuint value )
    { glVertexAttribP1ui( index, type, normalized, value ); }
    SON8_OVERGLAD_DEPR vertex_attrib_P_2( GLuint index, GLenum type, GLboolean normalized, GLuint value )
    { glVertexAttribP2ui( index, type, normalized, value ); }
    SON8_OVERGLAD_DEPR vertex_attrib_P_3( GLuint index, GLenum type, GLboolean normalized, GLuint value )
    { glVertexAttribP3ui( index, type, normalized, value ); }
    SON8_OVERGLAD_DEPR vertex_attrib_P_4( GLuint index, GLenum type, GLboolean normalized, GLuint value )
    { glVertexAttribP4ui( index, type, normalized, value ); }
    SON8_OVERGLAD_DEPR vertex_attrib_P_1( GLuint index, GLenum type, GLboolean normalized, GLuint const *value )
    { glVertexAttribP1uiv( index, type, normalized, value ); }
    SON8_OVERGLAD_DEPR vertex_attrib_P_2( GLuint index, GLenum type, GLboolean normalized, GLuint const *value )
    { glVertexAttribP2uiv( index, type, normalized, value ); }
    SON8_OVERGLAD_DEPR vertex_attrib_P_3( GLuint index, GLenum type, GLboolean normalized, GLuint const *value )
    { glVertexAttribP3uiv( index, type, normalized, value ); }
    SON8_OVERGLAD_DEPR vertex_attrib_P_4( GLuint index, GLenum type, GLboolean normalized, GLuint const *value )
    { glVertexAttribP4uiv( index, type, normalized, value ); }
#endif//SON8_OVERGLAD_INCLUDE_DEPRECATED
} // namespace son8::overglad

#endif//SON8_OVERGLAD_V3_3_HXX
// Ⓒ 2025 Oleg'Ease'Kharchuk ᦒ
