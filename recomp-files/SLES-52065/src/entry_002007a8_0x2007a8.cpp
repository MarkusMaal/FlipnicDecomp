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

// Function: entry_002007a8
// Address: 0x2007a8 - 0x2007c0
void entry_002007a8_0x2007a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002007a8_0x2007a8");
#endif

    ctx->pc = 0x2007a8u;

    // 0x2007a8: 0x3c033ff0  lui         $v1, 0x3FF0
    ctx->pc = 0x2007a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16368 << 16));
    // 0x2007ac: 0x2631825  or          $v1, $s3, $v1
    ctx->pc = 0x2007acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) | GPR_U64(ctx, 3));
    // 0x2007b0: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x2007b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x2007b4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2007b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2007b8: 0x3883c  dsll32      $s1, $v1, 0
    ctx->pc = 0x2007b8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2007bc: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x2007bcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    ctx->pc = 0x2007c0u;
}
