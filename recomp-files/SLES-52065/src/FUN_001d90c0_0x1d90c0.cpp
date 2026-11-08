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

// Function: FUN_001d90c0
// Address: 0x1d90c0 - 0x1d90d8
void FUN_001d90c0_0x1d90c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d90c0_0x1d90c0");
#endif

    ctx->pc = 0x1d90c0u;

    // 0x1d90c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d90c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d90c4: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x1d90c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d90c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d90c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d90cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d90ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d90d0: 0x8076436  j           func_1D90D8
    ctx->pc = 0x1D90D0u;
    ctx->pc = 0x1D90D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D90D0u;
    // 0x1d90d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D90D8u;
    FUN_001d90d8_0x1d90d8(rdram, ctx, runtime); return;
    ctx->pc = 0x1D90D8u;
}
