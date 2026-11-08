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

// Function: FUN_001cfa10
// Address: 0x1cfa10 - 0x1cfa20
void FUN_001cfa10_0x1cfa10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001cfa10_0x1cfa10");
#endif

    ctx->pc = 0x1cfa10u;

    // 0x1cfa10: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1cfa10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1cfa14: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1cfa14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cfa18: 0x806de84  j           func_1B7A10
    ctx->pc = 0x1CFA18u;
    ctx->pc = 0x1CFA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFA18u;
    // 0x1cfa1c: 0x24a598b0  addiu       $a1, $a1, -0x6750 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7A10u;
    fade_menu_0x1b7a10(rdram, ctx, runtime); return;
    ctx->pc = 0x1CFA20u;
}
