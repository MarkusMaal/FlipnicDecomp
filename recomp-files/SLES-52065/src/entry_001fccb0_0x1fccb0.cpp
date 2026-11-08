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

// Function: entry_001fccb0
// Address: 0x1fccb0 - 0x1fcccc
void entry_001fccb0_0x1fccb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fccb0_0x1fccb0");
#endif

    ctx->pc = 0x1fccb0u;

    // 0x1fccb0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1fccb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fccb4: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1fccb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1fccb8: 0x2048023  subu        $s0, $s0, $a0
    ctx->pc = 0x1fccb8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x1fccbc: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x1fccbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1fccc0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1fccc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1fccc4: 0xafa4001c  sw          $a0, 0x1C($sp)
    ctx->pc = 0x1fccc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 4));
    // 0x1fccc8: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x1fccc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    ctx->pc = 0x1fccccu;
}
