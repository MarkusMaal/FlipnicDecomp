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

// Function: FUN_00121720
// Address: 0x121720 - 0x121738
void FUN_00121720_0x121720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00121720_0x121720");
#endif

    ctx->pc = 0x121720u;

    // 0x121720: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x121720u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121724: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x121724u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121728: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x121728u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x12172c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12172cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121730: 0x80487c0  j           func_121F00
    ctx->pc = 0x121730u;
    ctx->pc = 0x121734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121730u;
    // 0x121734: 0x24840c90  addiu       $a0, $a0, 0xC90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121F00u;
    FUN_00121f00_0x121f00(rdram, ctx, runtime); return;
    ctx->pc = 0x121738u;
}
