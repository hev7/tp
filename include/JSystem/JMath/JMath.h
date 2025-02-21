#ifndef JMATH_H
#define JMATH_H

#include "dolphin/mtx/mtx.h"

void JMAMTXApplyScale(const Mtx, Mtx, f32, f32, f32);
void JMAEulerToQuat(s16 param_0, s16 param_1, s16 param_2, Quaternion* param_3);

inline f32 JMAFastReciprocal(f32 value) {
    return __fres(value);
}

inline float __frsqrtes(register double f) {
    register float out;
    // clang-format off
    asm {
        frsqrte out, f
    }
    // clang-format on
    return out;
}

inline f32 JMAFastSqrt(register f32 input) {
    if (input > 0.0f) {
        register f32 out;
        asm {
            frsqrte out, input
        }
        return out * input;
    } else {
        return input;
    }
}

namespace JMath {

inline f32 fastReciprocal(f32 value) {
    return JMAFastReciprocal(value);
}

inline void gekko_ps_copy12(register f32* dst, register const f32* src) {
    register f32 src0;
    register f32 src1;
    register f32 src2;
    register f32 src3;
    register f32 src4;
    register f32 src5;
    asm {
        psq_l src0, 0(src), 0, 0
        psq_l src1, 8(src), 0, 0
        psq_l src2, 16(src), 0, 0
        psq_l src3, 24(src), 0, 0
        psq_l src4, 32(src), 0, 0
        psq_l src5, 40(src), 0, 0
        psq_st src0, 0(dst), 0, 0
        psq_st src1, 8(dst), 0, 0
        psq_st src2, 16(dst), 0, 0
        psq_st src3, 24(dst), 0, 0
        psq_st src4, 32(dst), 0, 0
        psq_st src5, 40(dst), 0, 0
    };
}

};  // namespace JMath

#endif /* JMATH_H */
