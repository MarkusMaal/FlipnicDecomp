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

// Function: FUN_00121740
// Address: 0x121740 - 0x12174c
void FUN_00121740_0x121740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00121740_0x121740");
#endif

    ctx->pc = 0x121740u;

    // 0x121740: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x121740u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x121744: 0x80487f0  j           func_121FC0
    ctx->pc = 0x121744u;
    ctx->pc = 0x121748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121744u;
    // 0x121748: 0x24840c90  addiu       $a0, $a0, 0xC90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121FC0u;
    FUN_00121fc0_0x121fc0(rdram, ctx, runtime); return;
    ctx->pc = 0x12174Cu;
}
