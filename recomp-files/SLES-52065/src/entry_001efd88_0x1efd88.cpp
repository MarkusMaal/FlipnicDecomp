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

// Function: entry_001efd88
// Address: 0x1efd88 - 0x1efdac
void entry_001efd88_0x1efd88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001efd88_0x1efd88");
#endif

    switch (ctx->pc) {
        case 0x1efd94u: goto label_1efd94;
        case 0x1efda4u: goto label_1efda4;
        default: break;
    }

    ctx->pc = 0x1efd88u;

    // 0x1efd88: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x1efd88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1efd8c: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1EFD8Cu;
    SET_GPR_U32(ctx, 31, 0x1EFD94u);
    ctx->pc = 0x1EFD90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFD8Cu;
    // 0x1efd90: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1EFD8Cu, 0x1EFD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFD94u;
label_1efd94:
    // 0x1efd94: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EFD94u;
    {
        const bool branch_taken_0x1efd94 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EFD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFD94u;
        // 0x1efd98: 0x32628000  andi        $v0, $s3, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efd94) {
            ctx->pc = 0x1EFDACu;
            return;
        }
    }
    ctx->pc = 0x1EFD9Cu;
    // 0x1efd9c: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1EFD9Cu;
    SET_GPR_U32(ctx, 31, 0x1EFDA4u);
    ctx->pc = 0x1EFDA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFD9Cu;
    // 0x1efda0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1EFD9Cu, 0x1EFDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFDA4u;
label_1efda4:
    // 0x1efda4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1EFDA4u;
    {
        const bool branch_taken_0x1efda4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFDA4u;
        // 0x1efda8: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efda4) {
            ctx->pc = 0x1EFDD8u;
            return;
        }
    }
    ctx->pc = 0x1EFDACu;
}
