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

// Function: entry_0013fec0
// Address: 0x13fec0 - 0x13fee0
void entry_0013fec0_0x13fec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013fec0_0x13fec0");
#endif

    ctx->pc = 0x13fec0u;

    // 0x13fec0: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x13fec0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13fec4: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x13fec4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x13fec8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x13fec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x13fecc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x13feccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13fed0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13fed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13fed4: 0xafa50064  sw          $a1, 0x64($sp)
    ctx->pc = 0x13fed4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 5));
    // 0x13fed8: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x13fed8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
    // 0x13fedc: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x13fedcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    ctx->pc = 0x13fee0u;
}
