#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_002009e8
// Address: 0x2009e8 - 0x200a04
void entry_002009e8_0x2009e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002009e8_0x2009e8");
#endif

    ctx->pc = 0x2009e8u;

    // 0x2009e8: 0x6183f  dsra32      $v1, $a2, 0
    ctx->pc = 0x2009e8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x2009ec: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2009ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2009f0: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x2009f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x2009f4: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2009f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2009f8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2009f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2009fc: 0xc43024  and         $a2, $a2, $a0
    ctx->pc = 0x2009fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x200a00: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x200a00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    ctx->pc = 0x200a04u;
}
