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

// Function: FUN_00121700
// Address: 0x121700 - 0x121718
void FUN_00121700_0x121700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00121700_0x121700");
#endif

    ctx->pc = 0x121700u;

    // 0x121700: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x121700u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121704: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x121704u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121708: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x121708u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x12170c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12170cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121710: 0x8048774  j           func_121DD0
    ctx->pc = 0x121710u;
    ctx->pc = 0x121714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121710u;
    // 0x121714: 0x24840c90  addiu       $a0, $a0, 0xC90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121DD0u;
    FUN_00121dd0_0x121dd0(rdram, ctx, runtime); return;
    ctx->pc = 0x121718u;
}
