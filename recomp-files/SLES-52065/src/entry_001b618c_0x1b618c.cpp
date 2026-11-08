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

// Function: entry_001b618c
// Address: 0x1b618c - 0x1b61b8
void entry_001b618c_0x1b618c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b618c_0x1b618c");
#endif

    switch (ctx->pc) {
        case 0x1b61a0u: goto label_1b61a0;
        case 0x1b61b4u: goto label_1b61b4;
        default: break;
    }

    ctx->pc = 0x1b618cu;

    // 0x1b618c: 0x8e430030  lw          $v1, 0x30($s2)
    ctx->pc = 0x1b618cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x1b6190: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1B6190u;
    {
        const bool branch_taken_0x1b6190 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b6190) {
            ctx->pc = 0x1B61BCu;
            return;
        }
    }
    ctx->pc = 0x1B6198u;
    // 0x1b6198: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1B6198u;
    SET_GPR_U32(ctx, 31, 0x1B61A0u);
    ctx->pc = 0x1B619Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6198u;
    // 0x1b619c: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1B6198u, 0x1B61A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B61A0u;
label_1b61a0:
    // 0x1b61a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b61a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b61a4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B61A4u;
    {
        const bool branch_taken_0x1b61a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b61a4) {
            ctx->pc = 0x1B61B8u;
            return;
        }
    }
    ctx->pc = 0x1B61ACu;
    // 0x1b61ac: 0xc07404c  jal         func_1D0130
    ctx->pc = 0x1B61ACu;
    SET_GPR_U32(ctx, 31, 0x1B61B4u);
    ctx->pc = 0x1D0130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0130u, 0x1B61ACu, 0x1B61B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B61B4u;
label_1b61b4:
    // 0x1b61b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b61b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1b61b8u;
}
