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

// Function: entry_001fc590
// Address: 0x1fc590 - 0x1fc5a8
void entry_001fc590_0x1fc590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fc590_0x1fc590");
#endif

    ctx->pc = 0x1fc590u;

    // 0x1fc590: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1fc590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fc594: 0x131023  negu        $v0, $s3
    ctx->pc = 0x1fc594u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
    // 0x1fc598: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x1fc598u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x1fc59c: 0x932023  subu        $a0, $a0, $s3
    ctx->pc = 0x1fc59cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x1fc5a0: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x1fc5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x1fc5a4: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x1fc5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    ctx->pc = 0x1fc5a8u;
}
