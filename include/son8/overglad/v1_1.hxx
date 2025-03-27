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
    SON8_OVERGLAD_PROC depth_range( GLdouble n, GLdouble f ) noexcept
    { glad_glDepthRange( n, f ); }
    SON8_OVERGLAD_PROC viewport( ) noexcept
    { glad_glViewport( 0, 0, 640, 360 ); }
    SON8_OVERGLAD_PROC viewport( GLsizei wh ) noexcept
    { glad_glViewport( 0, 0, wh, wh ); }
    SON8_OVERGLAD_PROC viewport( GLsizei w, GLsizei h ) noexcept
    { glad_glViewport( 0, 0, w, h ); }
    SON8_OVERGLAD_PROC viewport( GLint x, GLint y, GLsizei w, GLsizei h ) noexcept
    { glad_glViewport( x, y, w, h ); }
    // TODO: enable/disable (target, capability?)
    SON8_OVERGLAD_PROC front_face( enums::Dir dir ) noexcept
    { glad_glFrontFace( static_cast< GLenum >( dir ) ); }
    // Chapter 3: Rasterization
    // TODO: double check PointSize core profile
    SON8_OVERGLAD_PROC point_size( GLfloat size ) noexcept
    { glad_glPointSize( size ); }
    SON8_OVERGLAD_PROC line_width( GLfloat width ) noexcept
    { glad_glLineWidth( width ); }
    // TODO: maybe overload function that have mode as parameter in this way?
    SON8_OVERGLAD_PROC cull( enums::Face face ) noexcept
    { glad_glCullFace( static_cast< GLenum >( face ) ); }
    // in core profile face is always Front_Back, so use it by default
    SON8_OVERGLAD_PROC mode( enums::Polygon m ) noexcept
    { glad_glPolygonMode( static_cast< GLenum >( enums::Face::Front_Back ), static_cast< GLenum >( m ) ); }
    SON8_OVERGLAD_PROC polygon_offset( GLfloat factor, GLfloat units ) noexcept
    { glad_glPolygonOffset( factor, units ); }
    // TODO: add PixelStore, TexImage, CopyTexImage, TexSubImage, CopyTexSubImage, TexParameter, BindTexture, DeleteTextures, GenTextures
    // Chapter 4: Per-Fragment Operations and the Framebuffer
    // TODO: Scissor, StencilFunc, StencilOp, BlendFunc, LogicOp, DrawBuffer, ColorMask, DepthMask
    SON8_OVERGLAD_PROC clear( enums::Clearbit mask ) noexcept
    { glad_glClear( static_cast< GLbitfield >( mask ) ); }
    SON8_OVERGLAD_PROC clear_color( )
    { glad_glClearColor( 0.f, 0.f, 0.f, 1.f ); } // TODO: or alpha zero?
    SON8_OVERGLAD_PROC clear_color( GLfloat grey )
    { glad_glClearColor( grey, grey, grey, 1.f ); }
    SON8_OVERGLAD_PROC clear_color( GLfloat grey, GLfloat alpha )
    { glad_glClearColor( grey, grey, grey, alpha ); }
    SON8_OVERGLAD_PROC clear_color( GLfloat r, GLfloat g, GLfloat b)
    { glad_glClearColor( r, g, b, 1.f ); }
    SON8_OVERGLAD_PROC clear_color( GLfloat r, GLfloat g, GLfloat b, GLfloat a)
    { glad_glClearColor( r, g, b, a ); }
    // TODO: ClearColor, ClearDepth, ClearStencil, ReadPixels, ReadBuffer
    // Chapter 5: Special Functions
    SON8_OVERGLAD_PROC flush( ) noexcept
    { glad_glFlush( ); }
    SON8_OVERGLAD_PROC finish( ) noexcept
    { glad_glFinish( ); }
    // TODO: Hint
    // Chapter 6: State and State Requests
    // TODO: GetBooleanv, GetIntegerv, GetFloatv, GetDoublev
    // IsEnabled,
    SON8_OVERGLAD_FUNC get( enums::Capability cap ) noexcept
    { return static_cast< bool >( glad_glIsEnabled( static_cast< GLenum >( cap ) ) ); }
    // TODO: GetTexParameter*, GetTexLevelParameter*, GetTexImage, IsTexture, GetPointerv, GetString
#ifndef SON8_OVERGLAD_PROFILE_CORE
    // Chapter 2: OpenGL Operation
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
    SON8_OVERGLAD_PROC rect( GLint x1, GLint y1, GLint x2, GLint y2 ) noexcept
    { glad_glRecti( x1, y1, x2, y2 ); }
    SON8_OVERGLAD_PROC rect( GLshort x1, GLshort y1, GLshort x2, GLshort y2 ) noexcept
    { glad_glRects( x1, y1, x2, y2 ); }
    SON8_OVERGLAD_PROC rect( GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2 ) noexcept
    { glad_glRectf( x1, y1, x2, y2 ); }
    SON8_OVERGLAD_PROC rect( GLdouble x1, GLdouble y1, GLdouble x2, GLdouble y2 ) noexcept
    { glad_glRectd( x1, y1, x2, y2 ); }
    SON8_OVERGLAD_PROC load_identity( ) noexcept
    { glad_glLoadIdentity( ); }
    SON8_OVERGLAD_PROC matrix_mode( enums::MatrixMode mode ) noexcept
    { glad_glMatrixMode( static_cast< GLenum >( mode ) ); }
    SON8_OVERGLAD_PROC rotate( GLfloat degrees, GLfloat x, GLfloat y, GLfloat z ) noexcept
    { glad_glRotatef( degrees, x, y, z ); }
    SON8_OVERGLAD_PROC rotate( GLdouble degrees, GLdouble x, GLdouble y, GLdouble z ) noexcept
    { glad_glRotated( degrees, x, y, z ); }
    SON8_OVERGLAD_PROC translate( GLfloat x, GLfloat y, GLfloat z ) noexcept
    { glad_glTranslatef( x, y, z ); }
    SON8_OVERGLAD_PROC translate( GLdouble x, GLdouble y, GLdouble z ) noexcept
    { glad_glTranslated( x, y, z ); }
    SON8_OVERGLAD_PROC scale( GLfloat x, GLfloat y, GLfloat z ) noexcept
    { glad_glScalef( x, y, z ); }
    SON8_OVERGLAD_PROC scale( GLdouble x, GLdouble y, GLdouble z ) noexcept
    { glad_glScaled( x, y, z ); }
    SON8_OVERGLAD_PROC frustum( GLdouble l, GLdouble r, GLdouble b, GLdouble t, GLdouble n, GLdouble f ) noexcept
    { glad_glFrustum( l, r, b, t, n, f ); }
    SON8_OVERGLAD_PROC ortho( GLdouble l, GLdouble r, GLdouble b, GLdouble t, GLdouble n, GLdouble f ) noexcept
    { glad_glOrtho( l, r, b, t, n, f ); }
    SON8_OVERGLAD_PROC push_matrix( ) noexcept
    { glad_glPushMatrix( ); }
    SON8_OVERGLAD_PROC pop_matrix( ) noexcept
    { glad_glPopMatrix( ); }
    SON8_OVERGLAD_PROC raster_pos( GLint x, GLint y ) noexcept
    { glad_glRasterPos2i( x, y ); }
    SON8_OVERGLAD_PROC raster_pos( GLshort x, GLshort y ) noexcept
    { glad_glRasterPos2s( x, y ); }
    SON8_OVERGLAD_PROC raster_pos( GLfloat x, GLfloat y ) noexcept
    { glad_glRasterPos2f( x, y ); }
    SON8_OVERGLAD_PROC raster_pos( GLdouble x, GLdouble y ) noexcept
    { glad_glRasterPos2d( x, y ); }
    SON8_OVERGLAD_PROC raster_pos( GLint x, GLint y, GLint z ) noexcept
    { glad_glRasterPos3i( x, y, z ); }
    SON8_OVERGLAD_PROC raster_pos( GLshort x, GLshort y, GLshort z ) noexcept
    { glad_glRasterPos3s( x, y, z ); }
    SON8_OVERGLAD_PROC raster_pos( GLfloat x, GLfloat y, GLfloat z ) noexcept
    { glad_glRasterPos3f( x, y, z ); }
    SON8_OVERGLAD_PROC raster_pos( GLdouble x, GLdouble y, GLdouble z ) noexcept
    { glad_glRasterPos3d( x, y, z ); }
    SON8_OVERGLAD_PROC raster_pos( GLint x, GLint y, GLint z, GLint w ) noexcept
    { glad_glRasterPos4i( x, y, z, w ); }
    SON8_OVERGLAD_PROC raster_pos( GLshort x, GLshort y, GLshort z, GLshort w ) noexcept
    { glad_glRasterPos4s( x, y, z, w ); }
    SON8_OVERGLAD_PROC raster_pos( GLfloat x, GLfloat y, GLfloat z, GLfloat w ) noexcept
    { glad_glRasterPos4f( x, y, z, w ); }
    SON8_OVERGLAD_PROC raster_pos( GLdouble x, GLdouble y, GLdouble z, GLdouble w ) noexcept
    { glad_glRasterPos4d( x, y, z, w ); }
    // TODO: add {material|light|light_model|color_material|shade_model}
    // Chapter 3: Rasterization
    SON8_OVERGLAD_PROC line_stipple( GLint factor, GLushort pattern ) noexcept
    { glad_glLineStipple( factor, pattern ); }
    SON8_OVERGLAD_PROC mode( enums::Face face, enums::Polygon m) noexcept
    { glad_glPolygonMode( static_cast< GLenum >( face ), static_cast< GLenum >( m ) ); }
    // TODO: add PixelTransfer, DrawPixels
    SON8_OVERGLAD_PROC pixel_zoom( GLfloat x, GLfloat y ) noexcept
    { glad_glPixelZoom( x, y ); }
    // TODO: add Bitmap, AreTexuresResident, PrioritizeTextures, TexEnv, Fog
    // Chapter 4: Per-Fragment Operations and the Framebuffer
    // TODO: AlphaFunc, IndexMask, ClearIndex, ClearAccum, Accum, CopyPixels
    // Chapter 5: Special Functions
    // TODO: Map+, EvalCoord+, MapGrid+, EvalMesh+, EvalPoint, InitNames, PopName, PushName, LoadName
    SON8_OVERGLAD_FUNC mode( enums::Render m ) noexcept
    { return glad_glRenderMode( static_cast< GLenum >( m ) ); }
    // TODO: SelectBuffer, FeedbackBuffer, Passthrough, NewList
    SON8_OVERGLAD_PROC end_list( ) noexcept
    { glad_glEndList( ); }
    // TODO: CallList, CallLists, ListBase, GenLists, IsList, DeleteLists
    // Chapter 6: State and State Requests
    // TODO: GetClipPlane, GetLight*, GetMaterial*, GetTexEnv*, GetTexGen*, GetPixelMap*, GetMap*, GetPolygonStipple
    SON8_OVERGLAD_PROC push_attrib( enums::Server bitfield ) noexcept
    { glad_glPushAttrib( static_cast< GLbitfield >( bitfield ) ); }
    SON8_OVERGLAD_PROC push_attrib( enums::Client bitfield ) noexcept
    { glad_glPushClientAttrib( static_cast< GLbitfield >( bitfield ) ); }
    SON8_OVERGLAD_PROC pop_attrib( ) noexcept
    { glad_glPopAttrib( ); }
    SON8_OVERGLAD_PROC pop_client_attrib( ) noexcept
    { glad_glPopClientAttrib( ); }
#endif//SON8_OVERGLAD_PROFILE_CORE
// INFO: do not apply profile macros for DEPRECATED as glad header not doing this either (TODO?)
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
    SON8_OVERGLAD_DEPR rect( GLint const *v1, GLint const *v2 )
    { glRectiv( v1, v2 ); }
    SON8_OVERGLAD_DEPR rect( GLshort const *v1, GLshort const *v2 )
    { glRectsv( v1, v2 ); }
    SON8_OVERGLAD_DEPR rect( GLfloat const *v1, GLfloat const *v2 )
    { glRectfv( v1, v2 ); }
    SON8_OVERGLAD_DEPR rect( GLdouble const *v1, GLdouble const *v2 )
    { glRectdv( v1, v2 ); }
    SON8_OVERGLAD_DEPR matrix_mode( GLenum mode)
    { glMatrixMode( mode ); }
    SON8_OVERGLAD_DEPR load_matrix( GLfloat const *m )
    { glLoadMatrixf( m ); }
    SON8_OVERGLAD_DEPR load_matrix( GLdouble const *m )
    { glLoadMatrixd( m ); }
    SON8_OVERGLAD_DEPR mult_matrix( GLfloat const *m )
    { glMultMatrixf( m ); }
    SON8_OVERGLAD_DEPR mult_matrix( GLdouble const *m )
    { glMultMatrixd( m ); }
    SON8_OVERGLAD_DEPR enable( GLenum target )
    { glEnable( target ); }
    SON8_OVERGLAD_DEPR disable( GLenum target )
    { glDisable( target ); }
    SON8_OVERGLAD_DEPR tex_gen( GLenum coord, GLenum pname, GLint param )
    { glTexGeni( coord, pname, param ); }
    SON8_OVERGLAD_DEPR tex_gen( GLenum coord, GLenum pname, GLfloat param )
    { glTexGenf( coord, pname, param ); }
    SON8_OVERGLAD_DEPR tex_gen( GLenum coord, GLenum pname, GLdouble param )
    { glTexGend( coord, pname, param ); }
    SON8_OVERGLAD_DEPR tex_gen( GLenum coord, GLenum pname, GLint const *param )
    { glTexGeniv( coord, pname, param ); }
    SON8_OVERGLAD_DEPR tex_gen( GLenum coord, GLenum pname, GLfloat const *param )
    { glTexGenfv( coord, pname, param ); }
    SON8_OVERGLAD_DEPR tex_gen( GLenum coord, GLenum pname, GLdouble const *param )
    { glTexGendv( coord, pname, param ); }
    SON8_OVERGLAD_DEPR clip_plane( GLenum plane, GLdouble const *eqn )
    { glClipPlane( plane, eqn ); }
    SON8_OVERGLAD_DEPR raster_pos_2( GLint const *v)
    { glRasterPos2iv( v ); }
    SON8_OVERGLAD_DEPR raster_pos_2( GLshort const *v)
    { glRasterPos2sv( v ); }
    SON8_OVERGLAD_DEPR raster_pos_2( GLfloat const *v)
    { glRasterPos2fv( v ); }
    SON8_OVERGLAD_DEPR raster_pos_2( GLdouble const *v)
    { glRasterPos2dv( v ); }
    SON8_OVERGLAD_DEPR raster_pos_3( GLint const *v)
    { glRasterPos3iv( v ); }
    SON8_OVERGLAD_DEPR raster_pos_3( GLshort const *v)
    { glRasterPos3sv( v ); }
    SON8_OVERGLAD_DEPR raster_pos_3( GLfloat const *v)
    { glRasterPos3fv( v ); }
    SON8_OVERGLAD_DEPR raster_pos_3( GLdouble const *v)
    { glRasterPos3dv( v ); }
    SON8_OVERGLAD_DEPR raster_pos_4( GLint const *v)
    { glRasterPos4iv( v ); }
    SON8_OVERGLAD_DEPR raster_pos_4( GLshort const *v)
    { glRasterPos4sv( v ); }
    SON8_OVERGLAD_DEPR raster_pos_4( GLfloat const *v)
    { glRasterPos4fv( v ); }
    SON8_OVERGLAD_DEPR raster_pos_4( GLdouble const *v)
    { glRasterPos4dv( v ); }
    SON8_OVERGLAD_DEPR front_face( GLenum mode )
    { glFrontFace( mode ); }
    SON8_OVERGLAD_DEPR material( GLenum face, GLenum pname, GLint param )
    { glMateriali( face, pname, param ); }
    SON8_OVERGLAD_DEPR material( GLenum face, GLenum pname, GLfloat param )
    { glMaterialf( face, pname, param ); }
    SON8_OVERGLAD_DEPR material( GLenum face, GLenum pname, GLint const *params )
    { glMaterialiv( face, pname, params ); }
    SON8_OVERGLAD_DEPR material( GLenum face, GLenum pname, GLfloat const *params )
    { glMaterialfv( face, pname, params ); }
    SON8_OVERGLAD_DEPR light( GLenum light, GLenum pname, GLint param )
    { glLighti( light, pname, param ); }
    SON8_OVERGLAD_DEPR light( GLenum light, GLenum pname, GLfloat param )
    { glLightf( light, pname, param ); }
    SON8_OVERGLAD_DEPR light( GLenum light, GLenum pname, GLint const *params )
    { glLightiv( light, pname, params ); }
    SON8_OVERGLAD_DEPR light( GLenum light, GLenum pname, GLfloat const *params )
    { glLightfv( light, pname, params ); }
    SON8_OVERGLAD_DEPR light_model( GLenum pname, GLint param )
    { glLightModeli( pname, param ); }
    SON8_OVERGLAD_DEPR light_model( GLenum pname, GLfloat param )
    { glLightModelf( pname, param ); }
    SON8_OVERGLAD_DEPR light_model( GLenum pname, GLint const *params )
    { glLightModeliv( pname, params ); }
    SON8_OVERGLAD_DEPR light_model( GLenum pname, GLfloat const *params )
    { glLightModelfv( pname, params ); }
    SON8_OVERGLAD_DEPR color_material( GLenum face, GLenum mode )
    { glColorMaterial( face, mode ); }
    SON8_OVERGLAD_DEPR shade_model( GLenum mode )
    { glShadeModel( mode ); }
    // Chapter 3: Rasterization
    SON8_OVERGLAD_DEPR polygon_stipple( GLubyte const *pattern )
    { glPolygonStipple( pattern ); }
    SON8_OVERGLAD_DEPR cull_face( GLenum mode )
    { glCullFace( mode ); }
    SON8_OVERGLAD_DEPR polygon_mode( GLenum face, GLenum mode )
    { glPolygonMode( face, mode ); }
    SON8_OVERGLAD_DEPR pixel_store( GLenum pname, GLint param )
    { glPixelStorei( pname, param ); }
    SON8_OVERGLAD_DEPR pixel_store( GLenum pname, GLfloat param )
    { glPixelStoref( pname, param ); }
    SON8_OVERGLAD_DEPR pixel_transfer( GLenum pname, GLint param )
    { glPixelTransferi( pname, param ); }
    SON8_OVERGLAD_DEPR pixel_transfer( GLenum pname, GLfloat param )
    { glPixelTransferf( pname, param ); }
    SON8_OVERGLAD_DEPR pixel_map( GLenum map, GLsizei size, GLuint const *values )
    { glPixelMapuiv( map, size, values ); }
    SON8_OVERGLAD_DEPR pixel_map( GLenum map, GLsizei size, GLfloat const *values )
    { glPixelMapfv( map, size, values ); }
    SON8_OVERGLAD_DEPR pixel_map( GLenum map, GLsizei size, GLushort const *values )
    { glPixelMapusv( map, size, values ); }
    SON8_OVERGLAD_DEPR draw_pixels( GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid const *data )
    { glDrawPixels( width, height, format, type, data ); }
    SON8_OVERGLAD_DEPR bitmap( GLsizei w, GLsizei h, GLfloat xbo, GLfloat ybo, GLfloat xbi, GLfloat ybi, GLubyte const *data )
    { glBitmap( w, h, xbo, ybo, xbi, ybi, data ); }
    SON8_OVERGLAD_DEPR tex_image( GLenum target, GLint level, GLint internal, GLsizei w, GLsizei h, GLint border, GLenum format, GLenum type, GLvoid const *data )
    { glTexImage2D( target, level, internal, w, h, border, format, type, data ); }
    SON8_OVERGLAD_DEPR tex_image( GLenum target, GLint level, GLint internal, GLsizei w, GLint border, GLenum format, GLenum type, GLvoid const *data )
    { glTexImage1D( target, level, internal, w, border, format, type, data ); }
    SON8_OVERGLAD_DEPR copy_tex_image( GLenum target, GLint level, GLenum internal, GLint x, GLint y, GLsizei w, GLsizei h, GLint border )
    { glCopyTexImage2D( target, level, internal, x, y, w, h, border ); }
    SON8_OVERGLAD_DEPR copy_tex_image ( GLenum target, GLint level, GLenum internal, GLint x, GLint y, GLsizei w, GLint border )
    { glCopyTexImage1D( target, level, internal, x, y, w, border ); }
    SON8_OVERGLAD_DEPR tex_subimage( GLenum target, GLint level, GLint x, GLsizei w, GLenum format, GLenum type, GLvoid const *data )
    { glTexSubImage1D( target, level, x, w, format, type, data ); }
    SON8_OVERGLAD_DEPR tex_subimage( GLenum target, GLint level, GLint x, GLint y, GLsizei w, GLsizei h, GLenum format, GLenum type, GLvoid const *data )
    { glTexSubImage2D( target, level, x, y, w, h, format, type, data ); }
    SON8_OVERGLAD_DEPR copy_tex_subimage( GLenum target, GLint level, GLint xoffset, GLint y, GLint x, GLsizei w )
    { glCopyTexSubImage1D( target, level, xoffset, x, y, w ); }
    SON8_OVERGLAD_DEPR copy_tex_subimage( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei w, GLsizei h )
    { glCopyTexSubImage2D( target, level, xoffset, yoffset, x, y, w, h ); }
    SON8_OVERGLAD_DEPR tex_parameter( GLenum target, GLenum pname, GLint param )
    { glTexParameteri( target, pname, param ); }
    SON8_OVERGLAD_DEPR tex_parameter( GLenum target, GLenum pname, GLfloat param )
    { glTexParameterf( target, pname, param ); }
    SON8_OVERGLAD_DEPR tex_parameter( GLenum target, GLenum pname, GLint const *params )
    { glTexParameteriv( target, pname, params ); }
    SON8_OVERGLAD_DEPR tex_parameter( GLenum target, GLenum pname, GLfloat const *params )
    { glTexParameterfv( target, pname, params ); }
    SON8_OVERGLAD_DEPR bind_texture( GLenum target, GLuint texture)
    { glBindTexture( target, texture ); }
    SON8_OVERGLAD_DEPR delete_textures( GLsizei n, GLuint const *textures )
    { glDeleteTextures( n, textures ); }
    SON8_OVERGLAD_DEPR gen_textures( GLsizei n, GLuint *textures )
    { glGenTextures( n, textures ); }
    SON8_OVERGLAD_DEPR are_textures_resident( GLsizei n, GLuint const *textures, GLboolean *residences )
    { return glAreTexturesResident( n, textures, residences ); }
    SON8_OVERGLAD_DEPR prioritize_textures( GLsizei n, GLuint const *textures, GLclampf const *priorities )
    { glPrioritizeTextures( n, textures, priorities ); }
    SON8_OVERGLAD_DEPR tex_env( GLenum target, GLenum pname, GLint param )
    { glTexEnvi( target, pname, param ); }
    SON8_OVERGLAD_DEPR tex_env( GLenum target, GLenum pname, GLfloat param )
    { glTexEnvf( target, pname, param ); }
    SON8_OVERGLAD_DEPR tex_env( GLenum target, GLenum pname, GLint const *params )
    { glTexEnviv( target, pname, params ); }
    SON8_OVERGLAD_DEPR tex_env( GLenum target, GLenum pname, GLfloat const *params )
    { glTexEnvfv( target, pname, params ); }
    SON8_OVERGLAD_DEPR fog( GLenum pname, GLint param )
    { glFogi( pname, param ); }
    SON8_OVERGLAD_DEPR fog( GLenum pname, GLfloat param )
    { glFogf( pname, param ); }
    SON8_OVERGLAD_DEPR fog( GLenum pname, GLint const *params )
    { glFogiv( pname, params ); }
    SON8_OVERGLAD_DEPR fog( GLenum pname, GLfloat const *params )
    { glFogfv( pname, params ); }
    // Chapter 4: Per-Fragment Operations and the Framebuffer
    SON8_OVERGLAD_DEPR scissor( GLint left, GLint bottom, GLsizei width, GLsizei height )
    { glScissor( left, bottom, width, height ); }
    SON8_OVERGLAD_DEPR alpha_func( GLenum func, GLclampf ref )
    { glAlphaFunc( func, ref ); }
    SON8_OVERGLAD_DEPR stencil_func( GLenum func, GLint ref, GLuint mask )
    { glStencilFunc( func, ref, mask ); }
    SON8_OVERGLAD_DEPR stencil_op( GLenum fail, GLenum dpfail, GLenum dppass )
    { glStencilOp( fail, dpfail, dppass ); }
    SON8_OVERGLAD_DEPR depth_func( GLenum func )
    { glDepthFunc( func ); }
    SON8_OVERGLAD_DEPR blend_func( GLenum src, GLenum dst )
    { glBlendFunc( src, dst ); }
    SON8_OVERGLAD_DEPR logic_op( GLenum op )
    { glLogicOp( op ); }
    SON8_OVERGLAD_DEPR draw_buffer( GLenum buf )
    { glDrawBuffer( buf ); }
    SON8_OVERGLAD_DEPR index_mask( GLuint mask )
    { glIndexMask( mask ); }
    SON8_OVERGLAD_DEPR color_mask( GLboolean r, GLboolean g, GLboolean b, GLboolean a )
    { glColorMask( r, g, b, a ); }
    SON8_OVERGLAD_DEPR depth_mask( GLboolean mask )
    { glDepthMask( mask ); }
    SON8_OVERGLAD_DEPR clear( GLbitfield buf )
    { glClear( buf ); }
    SON8_OVERGLAD_DEPR clear_index( GLfloat index )
    { glClearIndex( index ); }
    SON8_OVERGLAD_DEPR clear_depth( GLclampd d )
    { glClearDepth( d ); }
    SON8_OVERGLAD_DEPR clear_stencil( GLint s )
    { glClearStencil( s ); }
    SON8_OVERGLAD_DEPR clear_accum( GLfloat r, GLfloat g, GLfloat b, GLfloat a )
    { glClearAccum( r, g, b, a ); }
    SON8_OVERGLAD_DEPR accum( GLenum op, GLfloat value )
    { glAccum( op, value ); }
    SON8_OVERGLAD_DEPR read_pixels( GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid *data)
    { glReadPixels( x, y, width, height, format, type, data ); }
    SON8_OVERGLAD_DEPR read_buffer( GLenum buf )
    { glReadBuffer( buf ); }
    SON8_OVERGLAD_DEPR copy_pixels( GLint x, GLint y, GLsizei width, GLsizei height, GLenum type )
    { glCopyPixels( x, y, width, height, type ); }
    // Chapter 5: Special Functions
    SON8_OVERGLAD_DEPR map( GLenum type, GLfloat u1, GLfloat u2, GLint stride, GLint order, GLfloat const *points )
    { glMap1f( type, u1, u2, stride, order, points ); }
    SON8_OVERGLAD_DEPR map( GLenum type, GLdouble u1, GLdouble u2, GLint stride, GLint order, GLdouble const *points )
    { glMap1d( type, u1, u2, stride, order, points ); }
    SON8_OVERGLAD_DEPR map( GLenum target
        , GLfloat u1, GLfloat u2, GLint ustride, GLint uorder
        , GLfloat v1, GLfloat v2, GLint vstride, GLint vorder
        , GLfloat const *points )
    { glMap2f( target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points ); }
    SON8_OVERGLAD_DEPR map( GLenum target
        , GLdouble u1, GLdouble u2, GLint ustride, GLint uorder
        , GLdouble v1, GLdouble v2, GLint vstride, GLint vorder
        , GLdouble const *points )
    { glMap2d( target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points ); }
    SON8_OVERGLAD_DEPR eval( GLfloat arg )
    { glEvalCoord1f( arg ); }
    SON8_OVERGLAD_DEPR eval( GLdouble arg )
    { glEvalCoord1d( arg ); }
    SON8_OVERGLAD_DEPR eval( GLfloat arg1, GLfloat arg2 )
    { glEvalCoord2f( arg1, arg2 ); }
    SON8_OVERGLAD_DEPR eval( GLdouble arg1, GLdouble arg2 )
    { glEvalCoord2d( arg1, arg2 ); }
    SON8_OVERGLAD_DEPR eval_1( GLfloat const *arg)
    { glEvalCoord1fv( arg ); }
    SON8_OVERGLAD_DEPR eval_1( GLdouble const *arg)
    { glEvalCoord1dv( arg ); }
    SON8_OVERGLAD_DEPR eval_2( GLfloat const *arg)
    { glEvalCoord2fv( arg ); }
    SON8_OVERGLAD_DEPR eval_2( GLdouble const *arg)
    { glEvalCoord2dv( arg ); }
    SON8_OVERGLAD_DEPR grid( GLint n, GLfloat u1, GLfloat u2 )
    { glMapGrid1f( n, u1, u2 ); }
    SON8_OVERGLAD_DEPR grid( GLint n, GLdouble u1, GLdouble u2 )
    { glMapGrid1d( n, u1, u2 ); }
    SON8_OVERGLAD_DEPR grid( GLint un, GLfloat u1, GLfloat u2, GLint vn, GLfloat v1, GLfloat v2 )
    { glMapGrid2f( un, u1, u2, vn, v1, v2 ); }
    SON8_OVERGLAD_DEPR grid( GLint un, GLdouble u1, GLdouble u2, GLint vn, GLdouble v1, GLdouble v2 )
    { glMapGrid2d( un, u1, u2, vn, v1, v2 ); }
    SON8_OVERGLAD_DEPR eval( GLenum mode, GLint p1, GLint p2)
    { glEvalMesh1( mode, p1, p2 ); }
    SON8_OVERGLAD_DEPR eval( GLenum mode, GLint p1, GLint p2, GLint q1, GLint q2)
    { glEvalMesh2( mode, p1, p2, q1, q2 ); }
    SON8_OVERGLAD_DEPR eval( GLint p )
    { glEvalPoint1( p ); }
    SON8_OVERGLAD_DEPR eval( GLint p, GLint q )
    { glEvalPoint2( p, q ); }
    SON8_OVERGLAD_DEPR init_names()
    { glInitNames(); }
    SON8_OVERGLAD_DEPR pop_name()
    { glPopName(); }
    SON8_OVERGLAD_DEPR push_name( GLuint name )
    { glPushName( name ); }
    SON8_OVERGLAD_DEPR load_name( GLuint name )
    { glLoadName( name ); }
    SON8_OVERGLAD_DEPR render_mode( GLenum mode )
    { return glRenderMode( mode ); }
    SON8_OVERGLAD_DEPR select_buffer( GLsizei n, GLuint *buffer )
    { glSelectBuffer( n, buffer ); }
    SON8_OVERGLAD_DEPR feedback_buffer( GLsizei n, GLenum type, GLfloat *buffer )
    { glFeedbackBuffer( n, type, buffer ); }
    SON8_OVERGLAD_DEPR pass_through( GLfloat token )
    { glPassThrough( token ); }
    SON8_OVERGLAD_DEPR new_list( GLuint n, GLenum mode )
    { glNewList( n, mode ); }
    SON8_OVERGLAD_DEPR call_list( GLuint n )
    { glCallList( n ); }
    SON8_OVERGLAD_DEPR call_lists( GLsizei n, GLenum type, GLvoid const *lists )
    { glCallLists( n, type, lists ); }
    SON8_OVERGLAD_DEPR list_base( GLuint base )
    { glListBase( base ); }
    SON8_OVERGLAD_DEPR gen_lists( GLsizei n )
    { return glGenLists( n ); }
    SON8_OVERGLAD_DEPR is_list( GLuint list )
    { return glIsList( list ); }
    SON8_OVERGLAD_DEPR delete_lists( GLuint list, GLsizei range )
    { glDeleteLists( list, range ); }
    SON8_OVERGLAD_DEPR hint( GLenum target, GLenum hint )
    { glHint( target, hint ); }
    // Chapter 6: State and State Requests
    SON8_OVERGLAD_DEPR get_boolean( GLenum value, GLboolean *data )
    { glGetBooleanv( value, data ); }
    SON8_OVERGLAD_DEPR get_integer( GLenum value, GLint *data )
    { glGetIntegerv( value, data ); }
    SON8_OVERGLAD_DEPR get_float( GLenum value, GLfloat *data )
    { glGetFloatv( value, data ); }
    SON8_OVERGLAD_DEPR get_double( GLenum value, GLdouble *data )
    { glGetDoublev( value, data ); }
    SON8_OVERGLAD_DEPR is_enabled( GLenum value )
    { return glIsEnabled( value ); }
    SON8_OVERGLAD_DEPR get_clip_plane( GLenum plane, GLdouble *eqn )
    { glGetClipPlane( plane, eqn ); }
    SON8_OVERGLAD_DEPR get_light( GLenum light, GLenum value, GLint *data )
    { glGetLightiv( light, value, data ); }
    SON8_OVERGLAD_DEPR get_light( GLenum light, GLenum value, GLfloat *data )
    { glGetLightfv( light, value, data ); }
    SON8_OVERGLAD_DEPR get_material( GLenum face, GLenum value, GLint *data )
    { glGetMaterialiv( face, value, data ); }
    SON8_OVERGLAD_DEPR get_material( GLenum face, GLenum value, GLfloat *data )
    { glGetMaterialfv( face, value, data ); }
    SON8_OVERGLAD_DEPR get_tex_env( GLenum env, GLenum value, GLint *data )
    { glGetTexEnviv( env, value, data ); }
    SON8_OVERGLAD_DEPR get_tex_env( GLenum env, GLenum value, GLfloat *data )
    { glGetTexEnvfv( env, value, data ); }
    SON8_OVERGLAD_DEPR get_tex_gen( GLenum coord, GLenum value, GLint *data )
    { glGetTexGeniv( coord, value, data ); }
    SON8_OVERGLAD_DEPR get_tex_gen( GLenum coord, GLenum value, GLfloat *data )
    { glGetTexGenfv( coord, value, data ); }
    SON8_OVERGLAD_DEPR get_tex_parameter( GLenum target, GLenum value, GLint *data )
    { glGetTexParameteriv( target, value, data ); }
    SON8_OVERGLAD_DEPR get_tex_parameter( GLenum target, GLenum value, GLfloat *data )
    { glGetTexParameterfv( target, value, data ); }
    SON8_OVERGLAD_DEPR get_tex_level_parameter( GLenum target, GLint lod, GLenum value, GLint *data )
    { glGetTexLevelParameteriv( target, lod, value, data ); }
    SON8_OVERGLAD_DEPR get_pixel_map( GLenum map, GLuint *data )
    { glGetPixelMapuiv( map, data ); }
    SON8_OVERGLAD_DEPR get_pixel_map( GLenum map, GLushort *data )
    { glGetPixelMapusv( map, data ); }
    SON8_OVERGLAD_DEPR get_pixel_map( GLenum map, GLfloat *data )
    { glGetPixelMapfv( map, data ); }
    SON8_OVERGLAD_DEPR get_map( GLenum map, GLenum value, GLint *data)
    { glGetMapiv( map, value, data ); }
    SON8_OVERGLAD_DEPR get_map( GLenum map, GLenum value, GLfloat *data)
    { glGetMapfv( map, value, data ); }
    SON8_OVERGLAD_DEPR get_map( GLenum map, GLenum value, GLdouble *data)
    { glGetMapdv( map, value, data ); }
    SON8_OVERGLAD_DEPR get_tex_image( GLenum tex, GLint lod, GLenum format, GLenum type, GLvoid *img )
    { glGetTexImage( tex, lod, format, type, img ); }
    SON8_OVERGLAD_DEPR is_texture( GLuint texture )
    { return glIsTexture( texture ); }
    SON8_OVERGLAD_DEPR get_polygon_stipple( GLubyte *pattern)
    { glGetPolygonStipple( pattern ); }
    SON8_OVERGLAD_DEPR get_pointer( GLenum pname, GLvoid **params )
    { glGetPointerv( pname, params ); }
    SON8_OVERGLAD_DEPR get_string( GLenum name )
    { return reinterpret_cast< char const * >( glGetString( name ) ); }
    SON8_OVERGLAD_DEPR push_attrib( GLbitfield mask )
    { glPushAttrib( mask ); }
    SON8_OVERGLAD_DEPR push_client_attrib( GLbitfield mask )
    { glPushClientAttrib( mask ); }

#endif//SON8_OVERGLAD_INCLUDE_DEPRECATED

} // namespace son8::overglad

#endif//SON8_OVERGLAD_V1_1_HXX
// Ⓒ 2025 Oleg'Ease'Kharchuk ᦒ
