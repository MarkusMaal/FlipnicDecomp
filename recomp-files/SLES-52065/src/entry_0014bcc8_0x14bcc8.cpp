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

// Function: entry_0014bcc8
// Address: 0x14bcc8 - 0x14bce8
void entry_0014bcc8_0x14bcc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014bcc8_0x14bcc8");
#endif

    ctx->pc = 0x14bcc8u;

    // 0x14bcc8: 0x852823  subu        $a1, $a0, $a1
    ctx->pc = 0x14bcc8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x14bccc: 0x27ab0060  addiu       $t3, $sp, 0x60
    ctx->pc = 0x14bcccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x14bcd0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x14bcd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x14bcd4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x14bcd4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x14bcd8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x14bcd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x14bcdc: 0xafa60064  sw          $a2, 0x64($sp)
    ctx->pc = 0x14bcdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 6));
    // 0x14bce0: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x14bce0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
    // 0x14bce4: 0xafb00060  sw          $s0, 0x60($sp)
    ctx->pc = 0x14bce4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 16));
    ctx->pc = 0x14bce8u;
}
