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
        else static_assert( false, "Invalid Type for vertex_attrib with Size equal 0 and 1 argument" );
    }
    template< typename Type >
    SON8_OVERGLAD_PROC vertex_attrib( types::Attrib< Type > attrib, Type x, Type y )
    {
        /*_*/if constexpr ( std::is_same_v< Type, GLshort > ) glad_glVertexAttrib2s( attrib.index( ), x, y );
        else if constexpr ( std::is_same_v< Type, GLfloat > ) glad_glVertexAttrib2f( attrib.index( ), x, y );
        else if constexpr ( std::is_same_v< Type, GLdouble > ) glad_glVertexAttrib2d( attrib.index( ), x, y );
        else static_assert( false, "Invalid Type for vertex_attrib with Size equal 0 and 2 arguments" );
    }
    template< typename Type >
    SON8_OVERGLAD_PROC vertex_attrib( types::Attrib< Type > attrib, Type x, Type y, Type z )
    {
        /*_*/if constexpr ( std::is_same_v< Type, GLshort > ) glad_glVertexAttrib3s( attrib.index( ), x, y, z );
        else if constexpr ( std::is_same_v< Type, GLfloat > ) glad_glVertexAttrib3f( attrib.index( ), x, y, z );
        else if constexpr ( std::is_same_v< Type, GLdouble > ) glad_glVertexAttrib3d( attrib.index( ), x, y, z );
        else static_assert( false, "Invalid Type for vertex_attrib with Size equal 0 and 3 arguments" );
    }
    template< typename Type >
    SON8_OVERGLAD_PROC vertex_attrib( types::Attrib< Type > attrib, Type x, Type y, Type z, Type w )
    {
        /*_*/if constexpr ( std::is_same_v< Type, GLshort > ) glad_glVertexAttrib4s( attrib.index( ), x, y, z, w );
        else if constexpr ( std::is_same_v< Type, GLfloat > ) glad_glVertexAttrib4f( attrib.index( ), x, y, z, w );
        else if constexpr ( std::is_same_v< Type, GLdouble > ) glad_glVertexAttrib4d( attrib.index( ), x, y, z, w );
        else static_assert( false, "Invalid Type for vertex_attrib with Size equal 0 and 4 arguments" );
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
                else static_assert( false, "Invalid Type for Normalize vertex_attrib with Size equal 4" );
            }
        } else static_assert( false, "Invalid Size for vertex_attrib" );
    }
    // TODO: VertexAttribPointer,EnableVertexAttribArray,DisableVertexAttribArray
    SON8_OVERGLAD_FUNC shader( enums::Shader type )
    { return types::Shader{ glad_glCreateShader( static_cast< GLenum >( type ) ) }; }
    // TODO: ShaderSource
    SON8_OVERGLAD_PROC compile( types::Shader shader )
    { glad_glCompileShader( shader.index( ) ); }
    SON8_OVERGLAD_PROC free( types::Shader shader )
    { glad_glDeleteShader( shader.index( ) ); }
    SON8_OVERGLAD_FUNC program( )
    { return types::Program{ glad_glCreateProgram( ) }; }
    SON8_OVERGLAD_PROC attach( types::Program program, types::Shader shader )
    { glad_glAttachShader( program.index( ), shader.index( ) ); }
    SON8_OVERGLAD_PROC detach( types::Program program, types::Shader shader )
    { glad_glDetachShader( program.index( ), shader.index( ) ); }
    SON8_OVERGLAD_PROC link( types::Program program )
    { glad_glLinkProgram( program.index( ) ); }
    SON8_OVERGLAD_PROC bind( types::Program program )
    { glad_glUseProgram( program.index( ) ); }
    SON8_OVERGLAD_PROC unbind( enums::Program unused )
    { glad_glUseProgram( static_cast< GLuint >( unused ) ); }
    SON8_OVERGLAD_PROC free( types::Program program )
    { glad_glDeleteProgram( program.index( ) ); }
    // TODO: GetActiveAttrib,GetAttribLocation,BindAttribLocation,GetUniformLocation,GetActiveUniform,Uniform*,UniformMatrix*
    SON8_OVERGLAD_PROC validate( types::Program program )
    { glad_glValidateProgram( program.index( ) ); }
    // Chapter 4: Per-Fragment Operations and the Framebuffer
    // TODO: StencilFuncSeparate,StencilOpSeparate
    SON8_OVERGLAD_PROC blend( enums::Equation separateRGB, enums::Equation separateAlpha )
    { glad_glBlendEquationSeparate( static_cast< GLenum >( separateRGB ), static_cast< GLenum >( separateAlpha ) ); }
    // TODO: DrawBuffers,StencilMaskSeparate
    // Chapter 6: State and State Requests
    SON8_OVERGLAD_FUNC is_shader( GLuint shader )
    { return glad_glIsShader( shader ); }
    // TODO: GetShaderiv
    SON8_OVERGLAD_FUNC is_program( GLuint program )
    { return glad_glIsProgram( program ); }
    // TODO: GetProgramiv,GetAttachedShaders,GetShaderInfoLog,GetProgramInfoLog,GetShaderSource,GetVertexAttrib*,GetVertexAttribPointerv,GetUniform*
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
    SON8_OVERGLAD_DEPR vertex_attrib_pointer( GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, GLvoid const *pointer )
    { glVertexAttribPointer( index, size, type, normalized, stride, pointer ); }
    SON8_OVERGLAD_DEPR enable_vertex_attrib_array( GLuint index)
    { glEnableVertexAttribArray( index ); }
    SON8_OVERGLAD_DEPR disable_vertex_attrib_array( GLuint index)
    { glDisableVertexAttribArray( index ); }
    SON8_OVERGLAD_DEPR create_shader( GLenum type )
    { return glCreateShader( type ); }
    SON8_OVERGLAD_DEPR shader_source( GLuint shader, GLsizei count, GLchar const *const *string, GLint const *length )
    { glShaderSource( shader, count, string, length ); }
    SON8_OVERGLAD_DEPR compile_shader( GLuint shader )
    { glCompileShader( shader ); }
    SON8_OVERGLAD_DEPR delete_shader( GLuint shader )
    { glDeleteShader( shader ); }
    SON8_OVERGLAD_DEPR create_program( )
    { return glCreateProgram( ); }
    SON8_OVERGLAD_DEPR attach_shader( GLuint program, GLuint shader )
    { glAttachShader( program, shader ); }
    SON8_OVERGLAD_DEPR detach_shader( GLuint program, GLuint shader )
    { glDetachShader( program, shader ); }
    SON8_OVERGLAD_DEPR link_program( GLuint program )
    { glLinkProgram( program ); }
    SON8_OVERGLAD_DEPR use_program( GLuint program )
    { glUseProgram( program ); }
    SON8_OVERGLAD_DEPR delete_program( GLuint program )
    { glDeleteProgram( program ); }
    SON8_OVERGLAD_DEPR get_active_attrib( GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name )
    { glGetActiveAttrib( program, index, bufSize, length, size, type, name ); }
    SON8_OVERGLAD_DEPR get_attrib_location( GLuint program, GLchar const *name )
    { return glGetAttribLocation( program, name ); }
    SON8_OVERGLAD_DEPR bind_attrib_location( GLuint program, GLuint index, GLchar const *name )
    { glBindAttribLocation( program, index, name ); }
    SON8_OVERGLAD_DEPR get_uniform_location(  GLuint program, GLchar const *name )
    { return glGetUniformLocation( program, name ); }
    SON8_OVERGLAD_DEPR get_active_uniform( GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name )
    { glGetActiveUniform( program, index, bufSize, length, size, type, name ); }
    SON8_OVERGLAD_DEPR uniform( GLint location, GLint x )
    { glUniform1i( location, x ); }
    SON8_OVERGLAD_DEPR uniform( GLint location, GLfloat x )
    { glUniform1f( location, x ); }
    SON8_OVERGLAD_DEPR uniform( GLint location, GLint x, GLint y )
    { glUniform2i( location, x, y ); }
    SON8_OVERGLAD_DEPR uniform( GLint location, GLfloat x, GLfloat y )
    { glUniform2f( location, x, y ); }
    SON8_OVERGLAD_DEPR uniform( GLint location, GLint x, GLint y, GLint z )
    { glUniform3i( location, x, y, z ); }
    SON8_OVERGLAD_DEPR uniform( GLint location, GLfloat x, GLfloat y, GLfloat z )
    { glUniform3f( location, x, y, z ); }
    SON8_OVERGLAD_DEPR uniform( GLint location, GLint x, GLint y, GLint z, GLint w )
    { glUniform4i( location, x, y, z, w ); }
    SON8_OVERGLAD_DEPR uniform( GLint location, GLfloat x, GLfloat y, GLfloat z, GLfloat w )
    { glUniform4f( location, x, y, z, w ); }
    SON8_OVERGLAD_DEPR uniform_1( GLint location, GLsizei count, GLint const *value )
    { glUniform1iv( location, count, value ); }
    SON8_OVERGLAD_DEPR uniform_1( GLint location, GLsizei count, GLfloat const *value )
    { glUniform1fv( location, count, value ); }
    SON8_OVERGLAD_DEPR uniform_2( GLint location, GLsizei count, GLint const *value )
    { glUniform2iv( location, count, value ); }
    SON8_OVERGLAD_DEPR uniform_2( GLint location, GLsizei count, GLfloat const *value )
    { glUniform2fv( location, count, value ); }
    SON8_OVERGLAD_DEPR uniform_3( GLint location, GLsizei count, GLint const *value )
    { glUniform3iv( location, count, value ); }
    SON8_OVERGLAD_DEPR uniform_3( GLint location, GLsizei count, GLfloat const *value )
    { glUniform3fv( location, count, value ); }
    SON8_OVERGLAD_DEPR uniform_4( GLint location, GLsizei count, GLint const *value )
    { glUniform4iv( location, count, value ); }
    SON8_OVERGLAD_DEPR uniform_4( GLint location, GLsizei count, GLfloat const *value )
    { glUniform4fv( location, count, value ); }
    SON8_OVERGLAD_DEPR uniform_matrix_2( GLint location, GLsizei count, GLboolean transpose, GLfloat const *value )
    { glUniformMatrix2fv( location, count, transpose, value ); }
    SON8_OVERGLAD_DEPR uniform_matrix_3( GLint location, GLsizei count, GLboolean transpose, GLfloat const *value )
    { glUniformMatrix3fv( location, count, transpose, value ); }
    SON8_OVERGLAD_DEPR uniform_matrix_4( GLint location, GLsizei count, GLboolean transpose, GLfloat const *value )
    { glUniformMatrix4fv( location, count, transpose, value ); }
    SON8_OVERGLAD_DEPR uniform_matrix_2x3( GLint location, GLsizei count, GLboolean transpose, GLfloat const *value )
    { glUniformMatrix2x3fv( location, count, transpose, value ); }
    SON8_OVERGLAD_DEPR uniform_matrix_2x4( GLint location, GLsizei count, GLboolean transpose, GLfloat const *value )
    { glUniformMatrix2x4fv( location, count, transpose, value ); }
    SON8_OVERGLAD_DEPR uniform_matrix_3x2( GLint location, GLsizei count, GLboolean transpose, GLfloat const *value )
    { glUniformMatrix3x2fv( location, count, transpose, value ); }
    SON8_OVERGLAD_DEPR uniform_matrix_3x4( GLint location, GLsizei count, GLboolean transpose, GLfloat const *value )
    { glUniformMatrix3x4fv( location, count, transpose, value ); }
    SON8_OVERGLAD_DEPR uniform_matrix_4x2( GLint location, GLsizei count, GLboolean transpose, GLfloat const *value )
    { glUniformMatrix4x2fv( location, count, transpose, value ); }
    SON8_OVERGLAD_DEPR uniform_matrix_4x3( GLint location, GLsizei count, GLboolean transpose, GLfloat const *value )
    { glUniformMatrix4x3fv( location, count, transpose, value ); }
    SON8_OVERGLAD_DEPR validate_program( GLuint program )
    { glValidateProgram( program ); }
    // Chapter 4: Per-Fragment Operations and the Framebuffer
    SON8_OVERGLAD_DEPR stencil_func_separate( GLenum face, GLenum func, GLint ref, GLuint mask )
    { glStencilFuncSeparate( face, func, ref, mask ); }
    SON8_OVERGLAD_DEPR stencil_op_separate( GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass )
    { glStencilOpSeparate( face, sfail, dpfail, dppass ); }
    SON8_OVERGLAD_DEPR blend_equation_separate( GLenum modeRGB, GLenum modeAlpha )
    { glBlendEquationSeparate( modeRGB, modeAlpha ); }
    SON8_OVERGLAD_DEPR draw_buffers( GLsizei n, GLenum const *buffers )
    { glDrawBuffers( n, buffers ); }
    SON8_OVERGLAD_DEPR stencil_mask_separate( GLenum face, GLuint mask )
    { glStencilMaskSeparate( face, mask ); }
    // Chapter 6: State and State Requests
    SON8_OVERGLAD_DEPR get_shader( GLuint shader, GLenum pname, GLint *params )
    { glGetShaderiv( shader, pname, params ); }
    SON8_OVERGLAD_DEPR get_program( GLuint program, GLenum pname, GLint *params )
    { glGetProgramiv( program, pname, params ); }
    SON8_OVERGLAD_DEPR get_attached_shaders( GLuint program, GLsizei maxCount, GLsizei *count, GLuint *shaders )
    { glGetAttachedShaders( program, maxCount, count, shaders ); }
    SON8_OVERGLAD_DEPR get_shader_info_log( GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *infoLog )
    { glGetShaderInfoLog( shader, bufSize, length, infoLog ); }
    SON8_OVERGLAD_DEPR get_program_info_log( GLuint program, GLsizei bufSize, GLsizei *length, GLchar *infoLog )
    { glGetProgramInfoLog( program, bufSize, length, infoLog ); }
    SON8_OVERGLAD_DEPR get_shader_source( GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *source )
    { glGetShaderSource( shader, bufSize, length, source ); }
    SON8_OVERGLAD_DEPR get_vertex_attrib( GLuint index, GLenum pname, GLdouble *params )
    { glGetVertexAttribdv( index, pname, params ); }
    SON8_OVERGLAD_DEPR get_vertex_attrib( GLuint index, GLenum pname, GLfloat *params )
    { glGetVertexAttribfv( index, pname, params ); }
    SON8_OVERGLAD_DEPR get_vertex_attrib( GLuint index, GLenum pname, GLint *params )
    { glGetVertexAttribiv( index, pname, params ); }
    SON8_OVERGLAD_DEPR get_vertex_attrib_pointer( GLuint index, GLenum pname, GLvoid **pointer )
    { glGetVertexAttribPointerv( index, pname, pointer ); }
    SON8_OVERGLAD_DEPR get_uniform( GLuint program, GLint location, GLfloat *params )
    { glGetUniformfv( program, location, params ); }
    SON8_OVERGLAD_DEPR get_uniform( GLuint program, GLint location, GLint *params )
    { glGetUniformiv( program, location, params ); }
#endif//SON8_OVERGLAD_INCLUDE_DEPRECATED
} // namespace son8::overglad

#endif//SON8_OVERGLAD_V2_1_HXX
// Ⓒ 2025 Oleg'Ease'Kharchuk ᦒ
