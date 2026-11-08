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

// Function: FUN_001e0b98
// Address: 0x1e0b98 - 0x1e0bac
void FUN_001e0b98_0x1e0b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e0b98_0x1e0b98");
#endif

    ctx->pc = 0x1e0b98u;

    // 0x1e0b98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e0b98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e0b9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e0b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e0ba0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e0ba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0ba4: 0x8076348  j           func_1D8D20
    ctx->pc = 0x1E0BA4u;
    ctx->pc = 0x1E0BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0BA4u;
    // 0x1e0ba8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8D20u;
    FUN_001d8d20_0x1d8d20(rdram, ctx, runtime); return;
    ctx->pc = 0x1E0BACu;
}
