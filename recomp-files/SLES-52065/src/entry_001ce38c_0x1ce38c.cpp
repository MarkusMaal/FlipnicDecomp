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

// Function: entry_001ce38c
// Address: 0x1ce38c - 0x1ce3a4
void entry_001ce38c_0x1ce38c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ce38c_0x1ce38c");
#endif

    switch (ctx->pc) {
        case 0x1ce398u: goto label_1ce398;
        default: break;
    }

    ctx->pc = 0x1ce38cu;

    // 0x1ce38c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1ce38cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1ce390: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CE390u;
    SET_GPR_U32(ctx, 31, 0x1CE398u);
    ctx->pc = 0x1CE394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE390u;
    // 0x1ce394: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CE390u, 0x1CE398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE398u;
label_1ce398:
    // 0x1ce398: 0xa0520008  sb          $s2, 0x8($v0)
    ctx->pc = 0x1ce398u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 18));
    // 0x1ce39c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1ce39cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1ce3a0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1ce3a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x1ce3a4u;
}
