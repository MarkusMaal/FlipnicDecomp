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

// Function: entry_001b82a8
// Address: 0x1b82a8 - 0x1b82cc
void entry_001b82a8_0x1b82a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b82a8_0x1b82a8");
#endif

    switch (ctx->pc) {
        case 0x1b82b8u: goto label_1b82b8;
        case 0x1b82c4u: goto label_1b82c4;
        default: break;
    }

    ctx->pc = 0x1b82a8u;

label_1b82a8:
    // 0x1b82a8: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x1b82a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1b82ac: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x1b82acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1b82b0: 0xc046c14  jal         func_11B050
    ctx->pc = 0x1B82B0u;
    SET_GPR_U32(ctx, 31, 0x1B82B8u);
    ctx->pc = 0x1B82B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B82B0u;
    // 0x1b82b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B050u, 0x1B82B0u, 0x1B82B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B82B8u;
label_1b82b8:
    // 0x1b82b8: 0x8e730004  lw          $s3, 0x4($s3)
    ctx->pc = 0x1b82b8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1b82bc: 0xc06e07c  jal         func_1B81F0
    ctx->pc = 0x1B82BCu;
    SET_GPR_U32(ctx, 31, 0x1B82C4u);
    ctx->pc = 0x1B82C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B82BCu;
    // 0x1b82c0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B81F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B81F0u, 0x1B82BCu, 0x1B82C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B82C4u;
label_1b82c4:
    // 0x1b82c4: 0x1662fff8  bne         $s3, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1B82C4u;
    {
        const bool branch_taken_0x1b82c4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b82c4) {
            ctx->pc = 0x1B82A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b82a8;
        }
    }
    ctx->pc = 0x1B82CCu;
}
