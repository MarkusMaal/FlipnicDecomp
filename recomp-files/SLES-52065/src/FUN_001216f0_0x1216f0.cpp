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

// Function: FUN_001216f0
// Address: 0x1216f0 - 0x121700
void FUN_001216f0_0x1216f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001216f0_0x1216f0");
#endif

    ctx->pc = 0x1216f0u;

    // 0x1216f0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1216f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1216f4: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x1216f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x1216f8: 0x8048744  j           func_121D10
    ctx->pc = 0x1216F8u;
    ctx->pc = 0x1216FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1216F8u;
    // 0x1216fc: 0x24840c90  addiu       $a0, $a0, 0xC90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121D10u;
    FUN_00121d10_0x121d10(rdram, ctx, runtime); return;
    ctx->pc = 0x121700u;
}
