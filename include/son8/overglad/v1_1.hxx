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
    SON8_OVERGLAD_FUNC get_error() noexcept
    { return static_cast< enums::Error >(glad_glGetError()); }
#ifndef SON8_OVERGLAD_PROFILE_CORE
    SON8_OVERGLAD_PROC begin() noexcept
    { glad_glBegin(static_cast< GLenum >(enums::Draw::Default)); }
    SON8_OVERGLAD_PROC begin(enums::Draw mode) noexcept
    { glad_glBegin(static_cast< GLenum >(mode)); }
    SON8_OVERGLAD_PROC end() noexcept
    { glad_glEnd(); }
#endif//SON8_OVERGLAD_PROFILE_CORE
} // namespace son8::overglad

#endif//SON8_OVERGLAD_V1_1_HXX
// Ⓒ 2025 Oleg'Ease'Kharchuk ᦒ
