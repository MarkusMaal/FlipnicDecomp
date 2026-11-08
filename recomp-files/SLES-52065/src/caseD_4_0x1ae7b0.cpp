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

// Function: caseD_4
// Address: 0x1ae7b0 - 0x1ae7d8
void caseD_4_0x1ae7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x1ae7b0");
#endif

    switch (ctx->pc) {
        case 0x1ae7b8u: goto label_1ae7b8;
        case 0x1ae7c8u: goto label_1ae7c8;
        case 0x1ae7d0u: goto label_1ae7d0;
        default: break;
    }

    ctx->pc = 0x1ae7b0u;

    // 0x1ae7b0: 0xc069afc  jal         func_1A6BF0
    ctx->pc = 0x1AE7B0u;
    SET_GPR_U32(ctx, 31, 0x1AE7B8u);
    ctx->pc = 0x1AE7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE7B0u;
    // 0x1ae7b4: 0x268406d0  addiu       $a0, $s4, 0x6D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6BF0u, 0x1AE7B0u, 0x1AE7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE7B8u;
label_1ae7b8:
    // 0x1ae7b8: 0x1040017f  beqz        $v0, . + 4 + (0x17F << 2)
    ctx->pc = 0x1AE7B8u;
    {
        const bool branch_taken_0x1ae7b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE7B8u;
        // 0x1ae7bc: 0x268406d0  addiu       $a0, $s4, 0x6D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1744));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae7b8) {
            ctx->pc = 0x1AEDB8u;
            return;
        }
    }
    ctx->pc = 0x1AE7C0u;
    // 0x1ae7c0: 0xc069ae8  jal         func_1A6BA0
    ctx->pc = 0x1AE7C0u;
    SET_GPR_U32(ctx, 31, 0x1AE7C8u);
    ctx->pc = 0x1A6BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6BA0u, 0x1AE7C0u, 0x1AE7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE7C8u;
label_1ae7c8:
    // 0x1ae7c8: 0xc063e14  jal         func_18F850
    ctx->pc = 0x1AE7C8u;
    SET_GPR_U32(ctx, 31, 0x1AE7D0u);
    ctx->pc = 0x1AE7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE7C8u;
    // 0x1ae7cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1AE7C8u, 0x1AE7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE7D0u;
label_1ae7d0:
    // 0x1ae7d0: 0x10000179  b           . + 4 + (0x179 << 2)
    ctx->pc = 0x1AE7D0u;
    {
        const bool branch_taken_0x1ae7d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae7d0) {
            ctx->pc = 0x1AEDB8u;
            return;
        }
    }
    ctx->pc = 0x1AE7D8u;
}
