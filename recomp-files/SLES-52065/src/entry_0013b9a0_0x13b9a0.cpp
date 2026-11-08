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

// Function: entry_0013b9a0
// Address: 0x13b9a0 - 0x13b9c4
void entry_0013b9a0_0x13b9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b9a0_0x13b9a0");
#endif

    switch (ctx->pc) {
        case 0x13b9b8u: goto label_13b9b8;
        default: break;
    }

    ctx->pc = 0x13b9a0u;

    // 0x13b9a0: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x13b9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x13b9a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13b9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13b9a8: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x13b9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x13b9ac: 0x8ea50004  lw          $a1, 0x4($s5)
    ctx->pc = 0x13b9acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x13b9b0: 0xc048dec  jal         func_1237B0
    ctx->pc = 0x13B9B0u;
    SET_GPR_U32(ctx, 31, 0x13B9B8u);
    ctx->pc = 0x13B9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B9B0u;
    // 0x13b9b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1237B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1237B0u, 0x13B9B0u, 0x13B9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B9B8u;
label_13b9b8:
    // 0x13b9b8: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x13B9B8u;
    {
        const bool branch_taken_0x13b9b8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B9B8u;
        // 0x13b9bc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b9b8) {
            ctx->pc = 0x13B9C4u;
            return;
        }
    }
    ctx->pc = 0x13B9C0u;
    // 0x13b9c0: 0xaeb0000c  sw          $s0, 0xC($s5)
    ctx->pc = 0x13b9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 16));
    ctx->pc = 0x13b9c4u;
}
