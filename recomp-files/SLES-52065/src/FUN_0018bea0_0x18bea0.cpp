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

// Function: FUN_0018bea0
// Address: 0x18bea0 - 0x18beb0
void FUN_0018bea0_0x18bea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018bea0_0x18bea0");
#endif

    ctx->pc = 0x18bea0u;

    // 0x18bea0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x18bea0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x18bea4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x18bea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18bea8: 0x805f878  j           func_17E1E0
    ctx->pc = 0x18BEA8u;
    ctx->pc = 0x18BEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BEA8u;
    // 0x18beac: 0x24a5fce0  addiu       $a1, $a1, -0x320 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E1E0u;
    FUN_0017e1e0_0x17e1e0(rdram, ctx, runtime); return;
    ctx->pc = 0x18BEB0u;
}
