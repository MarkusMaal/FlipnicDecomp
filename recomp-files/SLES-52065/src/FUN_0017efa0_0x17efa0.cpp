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

// Function: FUN_0017efa0
// Address: 0x17efa0 - 0x17efac
void FUN_0017efa0_0x17efa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017efa0_0x17efa0");
#endif

    ctx->pc = 0x17efa0u;

    // 0x17efa0: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x17efa0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x17efa4: 0x805fc1c  j           func_17F070
    ctx->pc = 0x17EFA4u;
    ctx->pc = 0x17EFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EFA4u;
    // 0x17efa8: 0x24847730  addiu       $a0, $a0, 0x7730 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F070u;
    FUN_0017f070_0x17f070(rdram, ctx, runtime); return;
    ctx->pc = 0x17EFACu;
}
