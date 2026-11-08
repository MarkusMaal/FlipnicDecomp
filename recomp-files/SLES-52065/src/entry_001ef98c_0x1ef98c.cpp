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

// Function: entry_001ef98c
// Address: 0x1ef98c - 0x1ef9b0
void entry_001ef98c_0x1ef98c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ef98c_0x1ef98c");
#endif

    switch (ctx->pc) {
        case 0x1ef998u: goto label_1ef998;
        case 0x1ef9a8u: goto label_1ef9a8;
        default: break;
    }

    ctx->pc = 0x1ef98cu;

    // 0x1ef98c: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x1ef98cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x1ef990: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1EF990u;
    SET_GPR_U32(ctx, 31, 0x1EF998u);
    ctx->pc = 0x1EF994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF990u;
    // 0x1ef994: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1EF990u, 0x1EF998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF998u;
label_1ef998:
    // 0x1ef998: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EF998u;
    {
        const bool branch_taken_0x1ef998 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ef998) {
            ctx->pc = 0x1EF9B0u;
            return;
        }
    }
    ctx->pc = 0x1EF9A0u;
    // 0x1ef9a0: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1EF9A0u;
    SET_GPR_U32(ctx, 31, 0x1EF9A8u);
    ctx->pc = 0x1EF9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF9A0u;
    // 0x1ef9a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1EF9A0u, 0x1EF9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF9A8u;
label_1ef9a8:
    // 0x1ef9a8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1EF9A8u;
    {
        const bool branch_taken_0x1ef9a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF9A8u;
        // 0x1ef9ac: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef9a8) {
            ctx->pc = 0x1EFA14u;
            return;
        }
    }
    ctx->pc = 0x1EF9B0u;
}
