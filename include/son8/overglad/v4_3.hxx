#ifndef SON8_OVERGLAD_V4_3_HXX
#define SON8_OVERGLAD_V4_3_HXX

#ifndef          SON8_OVERGLAD_DEFINED
#define          SON8_OVERGLAD_DEFINED
#define      SON8_OVERGLAD_VERSION_1_1
#define      SON8_OVERGLAD_VERSION_1_5
#define      SON8_OVERGLAD_VERSION_2_1
#define      SON8_OVERGLAD_VERSION_3_3
#define      SON8_OVERGLAD_VERSION_4_3
#define     SON8_OVERGLAD_PROFILE_CORE
#define SON8_OVERGLAD_VERSION 0x0403CE
#include                    "v1_1.hxx"
#include                    "v1_5.hxx"
#include                    "v2_1.hxx"
#include                    "v3_3.hxx"
#endif         //SON8_OVERGLAD_DEFINED

namespace son8::overglad {
    // core

    // compatibility
#ifndef SON8_OVERGLAD_PROFILE_CORE
#endif//SON8_OVERGLAD_PROFILE_CORE
    // deprecated
#ifdef  SON8_OVERGLAD_INCLUDE_DEPRECATED
    // Chapter 4: Event Model
    SON8_OVERGLAD_DEPR begin_query( GLenum target, GLuint index, GLuint id )
    { glBeginQueryIndexed( target, index, id ); }
    SON8_OVERGLAD_DEPR end_query( GLenum target, GLuint index )
    { glEndQueryIndexed( target, index ); }
    SON8_OVERGLAD_DEPR get_query( GLenum target, GLuint index, GLenum pname, GLint *params )
    { glGetQueryIndexediv( target, index, pname, params ); }
    // Chapter 6: Buffer Objects
    SON8_OVERGLAD_DEPR clear_buffer_sub_data( GLenum target, GLenum internalformat,
        GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, GLvoid const *data )
    { glClearBufferSubData( target, internalformat, offset, size, format, type, data ); }
    SON8_OVERGLAD_DEPR clear_buffer_data( GLenum target, GLenum internalformat,
        GLenum format, GLenum type, GLvoid const *data )
    { glClearBufferData( target, internalformat, format, type, data ); }
    SON8_OVERGLAD_DEPR invalidate_buffer_sub_data( GLuint buffer, GLintptr offset, GLsizeiptr length )
    { glInvalidateBufferSubData( buffer, offset, length ); }
    SON8_OVERGLAD_DEPR invalidate_buffer_data( GLuint buffer )
    { glInvalidateBufferData( buffer ); }
    // Chapter 7: Programs and Shaders
    SON8_OVERGLAD_DEPR release_shader_compiler( )
    { glReleaseShaderCompiler( ); }
    SON8_OVERGLAD_DEPR shader_binary( GLsizei count, GLuint const *shaders, GLenum binaryformat,
        GLvoid const *binary, GLsizei length )
    { glShaderBinary( count, shaders, binaryformat, binary, length ); }
    SON8_OVERGLAD_DEPR program_parameter( GLuint program, GLenum pname, GLint value )
    { glProgramParameteri( program, pname, value ); }
    SON8_OVERGLAD_DEPR create_shader_program( GLenum type, GLsizei count, GLchar const *const *strings )
    { return glCreateShaderProgramv( type, count, strings ); }
    SON8_OVERGLAD_DEPR get_program_interface( GLuint program, GLenum programInterface, GLenum pname, GLint *params )
    { glGetProgramInterfaceiv( program, programInterface, pname, params ); }
    SON8_OVERGLAD_DEPR get_program_resource_index( GLuint program, GLenum programInterface, GLchar const *name )
    { return glGetProgramResourceIndex( program, programInterface, name ); }
    SON8_OVERGLAD_DEPR get_program_resource_name( GLuint program, GLenum programInterface, GLuint index,
        GLsizei bufSize, GLsizei *length, GLchar *name )
    { glGetProgramResourceName( program, programInterface, index, bufSize, length, name ); }
    SON8_OVERGLAD_DEPR get_program_resourceiv( GLuint program, GLenum programInterface, GLuint index,
        GLsizei propCount, GLenum const *props, GLsizei bufSize, GLsizei *length, GLint *params )
    { glGetProgramResourceiv( program, programInterface, index, propCount, props, bufSize, length, params ); }
    SON8_OVERGLAD_DEPR get_program_resource_location( GLuint program, GLenum programInterface, GLchar const *name )
    { return glGetProgramResourceLocation( program, programInterface, name ); }
    SON8_OVERGLAD_DEPR get_program_resource_location_index( GLuint program, GLenum programInterface, GLchar const *name )
    { return glGetProgramResourceLocationIndex( program, programInterface, name ); }
    SON8_OVERGLAD_DEPR gen_program_pipelines( GLsizei n, GLuint *pipelines )
    { glGenProgramPipelines( n, pipelines ); }
    SON8_OVERGLAD_DEPR delete_program_pipelines( GLsizei n, GLuint const *pipelines )
    { glDeleteProgramPipelines( n, pipelines ); }
    SON8_OVERGLAD_DEPR is_program_pipeline( GLuint pipeline )
    { return glIsProgramPipeline( pipeline ); }
    SON8_OVERGLAD_DEPR bind_program_pipeline( GLuint pipeline )
    { glBindProgramPipeline( pipeline ); }
    SON8_OVERGLAD_DEPR use_program_stages( GLuint pipeline, GLenum stages, GLuint program )
    { glUseProgramStages( pipeline, stages, program ); }
    SON8_OVERGLAD_DEPR active_shader_program( GLuint pipeline, GLuint program )
    { glActiveShaderProgram( pipeline, program ); }
    SON8_OVERGLAD_DEPR get_program_binary( GLuint program, GLsizei bufSize, GLsizei *length, GLenum *binaryFormat, GLvoid *binary )
    { glGetProgramBinary( program, bufSize, length, binaryFormat, binary ); }
    SON8_OVERGLAD_DEPR program_binary( GLuint program, GLenum binaryFormat, GLvoid const *binary, GLsizei length )
    { glProgramBinary( program, binaryFormat, binary, length ); }
    SON8_OVERGLAD_DEPR get_active_atomic_counter_buffer( GLuint program, GLuint bufferIndex, GLenum pname, GLint *params )
    { glGetActiveAtomicCounterBufferiv( program, bufferIndex, pname, params ); }
    SON8_OVERGLAD_DEPR uniform( GLint location, GLdouble x )
    { glUniform1d( location, x ); }
    SON8_OVERGLAD_DEPR uniform( GLint location, GLdouble x, GLdouble y )
    { glUniform2d( location, x, y ); }
    SON8_OVERGLAD_DEPR uniform( GLint location, GLdouble x, GLdouble y, GLdouble z )
    { glUniform3d( location, x, y, z ); }
    SON8_OVERGLAD_DEPR uniform( GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w )
    { glUniform4d( location, x, y, z, w ); }
    SON8_OVERGLAD_DEPR uniform_1( GLint location, GLsizei count, GLdouble const *value )
    { glUniform1dv( location, count, value ); }
    SON8_OVERGLAD_DEPR uniform_2( GLint location, GLsizei count, GLdouble const *value )
    { glUniform2dv( location, count, value ); }
    SON8_OVERGLAD_DEPR uniform_3( GLint location, GLsizei count, GLdouble const *value )
    { glUniform3dv( location, count, value ); }
    SON8_OVERGLAD_DEPR uniform_4( GLint location, GLsizei count, GLdouble const *value )
    { glUniform4dv( location, count, value ); }
    SON8_OVERGLAD_DEPR uniform_matrix_2( GLint location, GLsizei count, GLboolean transpose, GLdouble const *value )
    { glUniformMatrix2dv( location, count, transpose, value ); }
    SON8_OVERGLAD_DEPR uniform_matrix_3( GLint location, GLsizei count, GLboolean transpose, GLdouble const *value )
    { glUniformMatrix3dv( location, count, transpose, value ); }
    SON8_OVERGLAD_DEPR uniform_matrix_4( GLint location, GLsizei count, GLboolean transpose, GLdouble const *value )
    { glUniformMatrix4dv( location, count, transpose, value ); }
    SON8_OVERGLAD_DEPR uniform_matrix_2x3( GLint location, GLsizei count, GLboolean transpose, GLdouble const *value )
    { glUniformMatrix2x3dv( location, count, transpose, value ); }
    SON8_OVERGLAD_DEPR uniform_matrix_2x4( GLint location, GLsizei count, GLboolean transpose, GLdouble const *value )
    { glUniformMatrix2x4dv( location, count, transpose, value ); }
    SON8_OVERGLAD_DEPR uniform_matrix_3x2( GLint location, GLsizei count, GLboolean transpose, GLdouble const *value )
    { glUniformMatrix3x2dv( location, count, transpose, value ); }
    SON8_OVERGLAD_DEPR uniform_matrix_3x4( GLint location, GLsizei count, GLboolean transpose, GLdouble const *value )
    { glUniformMatrix3x4dv( location, count, transpose, value ); }
    SON8_OVERGLAD_DEPR uniform_matrix_4x2( GLint location, GLsizei count, GLboolean transpose, GLdouble const *value )
    { glUniformMatrix4x2dv( location, count, transpose, value ); }
    SON8_OVERGLAD_DEPR uniform_matrix_4x3( GLint location, GLsizei count, GLboolean transpose, GLdouble const *value )
    { glUniformMatrix4x3dv( location, count, transpose, value ); }
    SON8_OVERGLAD_DEPR program_uniform( GLuint program, GLint location, GLint x )
    {  glProgramUniform1i( program, location, x ); }
    SON8_OVERGLAD_DEPR program_uniform( GLuint program, GLint location, GLfloat x )
    {  glProgramUniform1f( program, location, x ); }
    SON8_OVERGLAD_DEPR program_uniform( GLuint program, GLint location, GLdouble x )
    {  glProgramUniform1d( program, location, x ); }
    SON8_OVERGLAD_DEPR program_uniform( GLuint program, GLint location, GLint x, GLint y )
    {  glProgramUniform2i( program, location, x, y ); }
    SON8_OVERGLAD_DEPR program_uniform( GLuint program, GLint location, GLfloat x, GLfloat y )
    {  glProgramUniform2f( program, location, x, y ); }
    SON8_OVERGLAD_DEPR program_uniform( GLuint program, GLint location, GLdouble x, GLdouble y )
    {  glProgramUniform2d( program, location, x, y ); }
    SON8_OVERGLAD_DEPR program_uniform( GLuint program, GLint location, GLint x, GLint y, GLint z )
    {  glProgramUniform3i( program, location, x, y, z ); }
    SON8_OVERGLAD_DEPR program_uniform( GLuint program, GLint location, GLfloat x, GLfloat y, GLfloat z )
    {  glProgramUniform3f( program, location, x, y, z ); }
    SON8_OVERGLAD_DEPR program_uniform( GLuint program, GLint location, GLdouble x, GLdouble y, GLdouble z )
    {  glProgramUniform3d( program, location, x, y, z ); }
    SON8_OVERGLAD_DEPR program_uniform( GLuint program, GLint location, GLint x, GLint y, GLint z, GLint w )
    {  glProgramUniform4i( program, location, x, y, z, w ); }
    SON8_OVERGLAD_DEPR program_uniform( GLuint program, GLint location, GLfloat x, GLfloat y, GLfloat z, GLfloat w )
    {  glProgramUniform4f( program, location, x, y, z, w ); }
    SON8_OVERGLAD_DEPR program_uniform( GLuint program, GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w )
    {  glProgramUniform4d( program, location, x, y, z, w ); }
    SON8_OVERGLAD_DEPR program_uniform_1( GLuint program, GLint location, GLsizei count, GLint const *value )
    {  glProgramUniform1iv( program, location, count, value ); }
    SON8_OVERGLAD_DEPR program_uniform_1( GLuint program, GLint location, GLsizei count, GLfloat const *value )
    {  glProgramUniform1fv( program, location, count, value ); }
    SON8_OVERGLAD_DEPR program_uniform_1( GLuint program, GLint location, GLsizei count, GLdouble const *value )
    {  glProgramUniform1dv( program, location, count, value ); }
    SON8_OVERGLAD_DEPR program_uniform_2( GLuint program, GLint location, GLsizei count, GLint const *value )
    {  glProgramUniform2iv( program, location, count, value ); }
    SON8_OVERGLAD_DEPR program_uniform_2( GLuint program, GLint location, GLsizei count, GLfloat const *value )
    {  glProgramUniform2fv( program, location, count, value ); }
    SON8_OVERGLAD_DEPR program_uniform_2( GLuint program, GLint location, GLsizei count, GLdouble const *value )
    {  glProgramUniform2dv( program, location, count, value ); }
    SON8_OVERGLAD_DEPR program_uniform_3( GLuint program, GLint location, GLsizei count, GLint const *value )
    {  glProgramUniform3iv( program, location, count, value ); }
    SON8_OVERGLAD_DEPR program_uniform_3( GLuint program, GLint location, GLsizei count, GLfloat const *value )
    {  glProgramUniform3fv( program, location, count, value ); }
    SON8_OVERGLAD_DEPR program_uniform_3( GLuint program, GLint location, GLsizei count, GLdouble const *value )
    {  glProgramUniform3dv( program, location, count, value ); }
    SON8_OVERGLAD_DEPR program_uniform_4( GLuint program, GLint location, GLsizei count, GLint const *value )
    {  glProgramUniform4iv( program, location, count, value ); }
    SON8_OVERGLAD_DEPR program_uniform_4( GLuint program, GLint location, GLsizei count, GLfloat const *value )
    {  glProgramUniform4fv( program, location, count, value ); }
    SON8_OVERGLAD_DEPR program_uniform_4( GLuint program, GLint location, GLsizei count, GLdouble const *value )
    {  glProgramUniform4dv( program, location, count, value ); }
    SON8_OVERGLAD_DEPR program_uniform( GLuint program, GLint location, GLuint x )
    {  glProgramUniform1ui( program, location, x ); }
    SON8_OVERGLAD_DEPR program_uniform( GLuint program, GLint location, GLuint x, GLuint y )
    {  glProgramUniform2ui( program, location, x, y ); }
    SON8_OVERGLAD_DEPR program_uniform( GLuint program, GLint location, GLuint x, GLuint y, GLuint z )
    {  glProgramUniform3ui( program, location, x, y, z ); }
    SON8_OVERGLAD_DEPR program_uniform( GLuint program, GLint location, GLuint x, GLuint y, GLuint z, GLuint w )
    {  glProgramUniform4ui( program, location, x, y, z, w ); }
    SON8_OVERGLAD_DEPR program_uniform_1( GLuint program, GLint location, GLsizei count, GLuint const *value )
    {  glProgramUniform1uiv( program, location, count, value ); }
    SON8_OVERGLAD_DEPR program_uniform_2( GLuint program, GLint location, GLsizei count, GLuint const *value )
    {  glProgramUniform2uiv( program, location, count, value ); }
    SON8_OVERGLAD_DEPR program_uniform_3( GLuint program, GLint location, GLsizei count, GLuint const *value )
    {  glProgramUniform3uiv( program, location, count, value ); }
    SON8_OVERGLAD_DEPR program_uniform_4( GLuint program, GLint location, GLsizei count, GLuint const *value )
    {  glProgramUniform4uiv( program, location, count, value ); }
    SON8_OVERGLAD_DEPR program_uniform_matrix_2( GLuint program, GLint location, GLsizei count, GLboolean transpose, GLfloat const *value )
    {  glProgramUniformMatrix2fv( program, location, count, transpose, value ); }
    SON8_OVERGLAD_DEPR program_uniform_matrix_2( GLuint program, GLint location, GLsizei count, GLboolean transpose, GLdouble const *value )
    {  glProgramUniformMatrix2dv( program, location, count, transpose, value ); }
    SON8_OVERGLAD_DEPR program_uniform_matrix_3( GLuint program, GLint location, GLsizei count, GLboolean transpose, GLfloat const *value )
    {  glProgramUniformMatrix3fv( program, location, count, transpose, value ); }
    SON8_OVERGLAD_DEPR program_uniform_matrix_3( GLuint program, GLint location, GLsizei count, GLboolean transpose, GLdouble const *value )
    {  glProgramUniformMatrix3dv( program, location, count, transpose, value ); }
    SON8_OVERGLAD_DEPR program_uniform_matrix_4( GLuint program, GLint location, GLsizei count, GLboolean transpose, GLfloat const *value )
    {  glProgramUniformMatrix4fv( program, location, count, transpose, value ); }
    SON8_OVERGLAD_DEPR program_uniform_matrix_4( GLuint program, GLint location, GLsizei count, GLboolean transpose, GLdouble const *value )
    {  glProgramUniformMatrix4dv( program, location, count, transpose, value ); }
    SON8_OVERGLAD_DEPR program_uniform_matrix_2x3( GLuint program, GLint location, GLsizei count, GLboolean transpose, GLfloat const *value )
    {  glProgramUniformMatrix2x3fv( program, location, count, transpose, value ); }
    SON8_OVERGLAD_DEPR program_uniform_matrix_2x3( GLuint program, GLint location, GLsizei count, GLboolean transpose, GLdouble const *value )
    {  glProgramUniformMatrix2x3dv( program, location, count, transpose, value ); }
    SON8_OVERGLAD_DEPR program_uniform_matrix_2x4( GLuint program, GLint location, GLsizei count, GLboolean transpose, GLfloat const *value )
    {  glProgramUniformMatrix2x4fv( program, location, count, transpose, value ); }
    SON8_OVERGLAD_DEPR program_uniform_matrix_2x4( GLuint program, GLint location, GLsizei count, GLboolean transpose, GLdouble const *value )
    {  glProgramUniformMatrix2x4dv( program, location, count, transpose, value ); }
    SON8_OVERGLAD_DEPR program_uniform_matrix_3x2( GLuint program, GLint location, GLsizei count, GLboolean transpose, GLfloat const *value )
    {  glProgramUniformMatrix3x2fv( program, location, count, transpose, value ); }
    SON8_OVERGLAD_DEPR program_uniform_matrix_3x2( GLuint program, GLint location, GLsizei count, GLboolean transpose, GLdouble const *value )
    {  glProgramUniformMatrix3x2dv( program, location, count, transpose, value ); }
    SON8_OVERGLAD_DEPR program_uniform_matrix_3x4( GLuint program, GLint location, GLsizei count, GLboolean transpose, GLfloat const *value )
    {  glProgramUniformMatrix3x4fv( program, location, count, transpose, value ); }
    SON8_OVERGLAD_DEPR program_uniform_matrix_3x4( GLuint program, GLint location, GLsizei count, GLboolean transpose, GLdouble const *value )
    {  glProgramUniformMatrix3x4dv( program, location, count, transpose, value ); }
    SON8_OVERGLAD_DEPR program_uniform_matrix_4x2( GLuint program, GLint location, GLsizei count, GLboolean transpose, GLfloat const *value )
    {  glProgramUniformMatrix4x2fv( program, location, count, transpose, value ); }
    SON8_OVERGLAD_DEPR program_uniform_matrix_4x2( GLuint program, GLint location, GLsizei count, GLboolean transpose, GLdouble const *value )
    {  glProgramUniformMatrix4x2dv( program, location, count, transpose, value ); }
    SON8_OVERGLAD_DEPR program_uniform_matrix_4x3( GLuint program, GLint location, GLsizei count, GLboolean transpose, GLfloat const *value )
    {  glProgramUniformMatrix4x3fv( program, location, count, transpose, value ); }
    SON8_OVERGLAD_DEPR program_uniform_matrix_4x3( GLuint program, GLint location, GLsizei count, GLboolean transpose, GLdouble const *value )
    {  glProgramUniformMatrix4x3dv( program, location, count, transpose, value ); }
    SON8_OVERGLAD_DEPR shader_storage_block_binding( GLuint program, GLuint storageBlockIndex, GLuint storageBlockBinding )
    { glShaderStorageBlockBinding( program, storageBlockIndex, storageBlockBinding ); }
    SON8_OVERGLAD_DEPR get_subroutine_index( GLuint program, GLenum shadertype, GLchar const *name )
    { return glGetSubroutineIndex( program, shadertype, name ); }
    SON8_OVERGLAD_DEPR get_active_subroutine_name( GLuint program, GLenum shadertype, GLuint index,
        GLsizei bufSize, GLsizei *length, GLchar *name )
    { glGetActiveSubroutineName( program, shadertype, index, bufSize, length, name ); }
    SON8_OVERGLAD_DEPR get_subroutine_uniform_location( GLuint program, GLenum shadertype, GLchar const *name )
    { return glGetSubroutineUniformLocation( program, shadertype, name ); }
    SON8_OVERGLAD_DEPR get_active_subroutine_uniform_name( GLuint program, GLenum shadertype, GLuint index,
        GLsizei bufSize, GLsizei *length, GLchar *name )
    { glGetActiveSubroutineUniformName( program, shadertype, index, bufSize, length, name ); }
    SON8_OVERGLAD_DEPR get_active_subroutine_uniform( GLuint program, GLenum shadertype, GLuint index,
        GLenum pname, GLint *values )
    { glGetActiveSubroutineUniformiv( program, shadertype, index, pname, values ); }
    SON8_OVERGLAD_DEPR uniform_subroutine( GLenum shadertype, GLsizei count, GLuint const *indices )
    { glUniformSubroutinesuiv( shadertype, count, indices ); }
    SON8_OVERGLAD_DEPR memory_barrier( GLbitfield barriers )
    { glMemoryBarrier( barriers ); }
    SON8_OVERGLAD_DEPR get_program_pipeline( GLuint pipeline, GLenum pname, GLint *params )
    { glGetProgramPipelineiv( pipeline, pname, params ); }
    SON8_OVERGLAD_DEPR get_program_pipeline_info_log( GLuint pipeline, GLsizei bufSize, GLsizei *length, GLchar *infoLog )
    { glGetProgramPipelineInfoLog( pipeline, bufSize, length, infoLog ); }
    SON8_OVERGLAD_DEPR get_shader_precision_format( GLenum shadertype, GLenum precisiontype, GLint *range, GLint *precision )
    { glGetShaderPrecisionFormat( shadertype, precisiontype, range, precision ); }
    SON8_OVERGLAD_DEPR get_uniform( GLuint program, GLint location, GLdouble *params )
    { glGetUniformdv( program, location, params ); }
    SON8_OVERGLAD_DEPR get_uniform_subroutine( GLenum shadertype, GLint location, GLuint *params )
    { glGetUniformSubroutineuiv( shadertype, location, params ); }
    SON8_OVERGLAD_DEPR get_program_stage( GLuint program, GLenum shadertype, GLenum pname, GLint *params )
    { glGetProgramStageiv( program, shadertype, pname, params ); }
    // Chapter 8: Textures and Samplers
#endif//SON8_OVERGLAD_INCLUDE_DEPRECATED
} // namespace son8::overglad

#endif//SON8_OVERGLAD_V4_3_HXX
// Ⓒ 2025 Oleg'Ease'Kharchuk ᦒ
