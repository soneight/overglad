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

    SON8_OVERGLAD_DEPR vertex_attrib_I_pointer( GLuint index, GLint size, GLenum type, GLsizei stride, GLvoid const *pointer )
    { glVertexAttribIPointer( index, size, type, stride, pointer ); }
    SON8_OVERGLAD_DEPR vertex_attrib_divisor( GLuint index, GLuint divisor )
    { glVertexAttribDivisor( index, divisor ); }
    SON8_OVERGLAD_DEPR primitive_restart_index( GLuint index )
    { glPrimitiveRestartIndex( index ); }
    SON8_OVERGLAD_DEPR draw_arrays_instanced( GLenum mode, GLint first,
        GLsizei count, GLsizei primcount )
    { glDrawArraysInstanced( mode, first, count, primcount ); }
    SON8_OVERGLAD_DEPR draw_elements_instanced( GLenum mode,
        GLsizei count, GLenum type, GLvoid const *indices, GLsizei primcount )
    { glDrawElementsInstanced( mode, count, type, indices, primcount ); }
    SON8_OVERGLAD_DEPR draw_elements_base_vertex( GLenum mode,
        GLsizei count, GLenum type, GLvoid const *indices, GLint basevertex )
    { glDrawElementsBaseVertex( mode, count, type, indices, basevertex ); }
    SON8_OVERGLAD_DEPR draw_range_elements_base_vertex( GLenum mode, GLuint start, GLuint end,
        GLsizei count, GLenum type, GLvoid const *indices, GLint basevertex )
    { glDrawRangeElementsBaseVertex( mode, start, end, count, type, indices, basevertex ); }
    SON8_OVERGLAD_DEPR draw_elements_instanced_base_vertex( GLenum mode,
        GLsizei count, GLenum type, GLvoid const *indices, GLsizei primcount, GLint basevertex )
    { glDrawElementsInstancedBaseVertex( mode, count, type, indices, primcount, basevertex ); }
    SON8_OVERGLAD_DEPR multi_draw_elements_base_vertex( GLenum mode,
        GLsizei const *count, GLenum type, GLvoid const *const *indices, GLsizei primcount, GLint const *basevertex )
    { glMultiDrawElementsBaseVertex( mode, count, type, indices, primcount, basevertex ); }
    SON8_OVERGLAD_DEPR bind_buffer_range( GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size )
    { glBindBufferRange( target, index, buffer, offset, size ); }
    SON8_OVERGLAD_DEPR bind_buffer_base( GLenum target, GLuint index, GLuint buffer )
    { glBindBufferBase( target, index, buffer ); }
    SON8_OVERGLAD_DEPR map_buffer_range( GLuint buffer, GLintptr offset, GLsizeiptr length, GLbitfield access )
    { return glMapBufferRange( buffer, offset, length, access ); }
    SON8_OVERGLAD_DEPR flush_mapped_buffer_range( GLuint buffer, GLintptr offset, GLsizeiptr length )
    { glFlushMappedBufferRange( buffer, offset, length ); }
    SON8_OVERGLAD_DEPR copy_buffer_sub_data( GLenum readtarget, GLenum writetarget,
        GLintptr readoffset, GLintptr writeoffset, GLsizeiptr size )
    { glCopyBufferSubData( readtarget, writetarget, readoffset, writeoffset, size ); }
    SON8_OVERGLAD_DEPR gen_vertex_arrays( GLsizei n, GLuint *arrays )
    { glGenVertexArrays( n, arrays ); }
    SON8_OVERGLAD_DEPR delete_vertex_arrays( GLsizei n, GLuint const *arrays )
    { glDeleteVertexArrays( n, arrays ); }
    SON8_OVERGLAD_DEPR bind_vertex_array( GLuint array )
    { glBindVertexArray( array ); }
    SON8_OVERGLAD_DEPR get_uniform_block_index( GLuint program, GLchar const *uniformBlockName )
    { return glGetUniformBlockIndex( program, uniformBlockName ); }
    SON8_OVERGLAD_DEPR get_active_uniform_block_name( GLuint program,
        GLuint uniformBlockIndex, GLsizei bufSize, GLsizei *length, GLchar *uniformBlockName )
    { glGetActiveUniformBlockName( program, uniformBlockIndex, bufSize, length, uniformBlockName ); }
    SON8_OVERGLAD_DEPR get_active_uniform_block( GLuint program,
        GLuint uniformBlockIndex, GLenum pname, GLint *params )
    { glGetActiveUniformBlockiv( program, uniformBlockIndex, pname, params ); }
    SON8_OVERGLAD_DEPR get_uniform_indices( GLuint program,
        GLsizei uniformCount, GLchar const *const *uniformNames, GLuint *uniformIndices )
    { glGetUniformIndices( program, uniformCount, uniformNames, uniformIndices ); }
    SON8_OVERGLAD_DEPR get_active_uniform_name( GLuint program,
        GLuint uniformIndex, GLsizei bufSize, GLsizei *length, GLchar *uniformName )
    { glGetActiveUniformName( program, uniformIndex, bufSize, length, uniformName ); }
    SON8_OVERGLAD_DEPR get_active_uniforms( GLuint program,
        GLsizei uniformCount, GLuint const *uniformIndices, GLenum pname, GLint *params )
    { glGetActiveUniformsiv( program, uniformCount, uniformIndices, pname, params ); }
#endif//SON8_OVERGLAD_INCLUDE_DEPRECATED
} // namespace son8::overglad

#endif//SON8_OVERGLAD_V3_3_HXX
// Ⓒ 2025 Oleg'Ease'Kharchuk ᦒ
