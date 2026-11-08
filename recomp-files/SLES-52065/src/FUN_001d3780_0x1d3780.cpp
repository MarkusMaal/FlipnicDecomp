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

// Function: FUN_001d3780
// Address: 0x1d3780 - 0x1d379c
void FUN_001d3780_0x1d3780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d3780_0x1d3780");
#endif

    switch (ctx->pc) {
        case 0x1d3790u: goto label_1d3790;
        default: break;
    }

    ctx->pc = 0x1d3780u;

    // 0x1d3780: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d3780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d3784: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d3784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d3788: 0xc074e1c  jal         func_1D3870
    ctx->pc = 0x1D3788u;
    SET_GPR_U32(ctx, 31, 0x1D3790u);
    ctx->pc = 0x1D3870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3870u, 0x1D3788u, 0x1D3790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3790u;
label_1d3790:
    // 0x1d3790: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d3790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d3794: 0x80782f8  j           func_1E0BE0
    ctx->pc = 0x1D3794u;
    ctx->pc = 0x1D3798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3794u;
    // 0x1d3798: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0BE0u;
    FUN_001e0be0_0x1e0be0(rdram, ctx, runtime); return;
    ctx->pc = 0x1D379Cu;
}
