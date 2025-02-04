#ifndef SON8_OVERGLAD_GLAD_SON8_LOADER_H
#define SON8_OVERGLAD_GLAD_SON8_LOADER_H

#include <glad/son8/header.h>

#ifndef GLAD_GL_H_
extern "C" {
#endif

typedef void (*GLADapiproc)(void);

typedef GLADapiproc (*GLADloadfunc)(const char *name);
typedef GLADapiproc (*GLADuserptrloadfunc)(void *userptr, const char *name);

GLAD_API_CALL int gladLoadGLUserPtr( GLADuserptrloadfunc load, void *userptr);
GLAD_API_CALL int gladLoadGL( GLADloadfunc load);

#ifndef GLAD_GL_H_
} // extern "C" {
#endif

#endif//SON8_OVERGLAD_GLAD_SON8_LOADER_H
