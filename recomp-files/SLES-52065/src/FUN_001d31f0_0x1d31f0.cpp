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

// Function: FUN_001d31f0
// Address: 0x1d31f0 - 0x1d3204
void FUN_001d31f0_0x1d31f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d31f0_0x1d31f0");
#endif

    ctx->pc = 0x1d31f0u;

    // 0x1d31f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d31f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d31f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d31f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d31f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d31f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d31fc: 0x8076340  j           func_1D8D00
    ctx->pc = 0x1D31FCu;
    ctx->pc = 0x1D3200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D31FCu;
    // 0x1d3200: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8D00u;
    FUN_001d8d00_0x1d8d00(rdram, ctx, runtime); return;
    ctx->pc = 0x1D3204u;
}
