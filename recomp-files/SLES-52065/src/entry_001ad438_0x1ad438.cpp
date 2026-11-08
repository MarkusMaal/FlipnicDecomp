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

// Function: entry_001ad438
// Address: 0x1ad438 - 0x1ad470
void entry_001ad438_0x1ad438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ad438_0x1ad438");
#endif

    switch (ctx->pc) {
        case 0x1ad448u: goto label_1ad448;
        case 0x1ad460u: goto label_1ad460;
        case 0x1ad468u: goto label_1ad468;
        default: break;
    }

    ctx->pc = 0x1ad438u;

label_1ad438:
    // 0x1ad438: 0x2331021  addu        $v0, $s1, $s3
    ctx->pc = 0x1ad438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x1ad43c: 0xac400670  sw          $zero, 0x670($v0)
    ctx->pc = 0x1ad43cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1648), GPR_U32(ctx, 0));
    // 0x1ad440: 0xc06b6e0  jal         func_1ADB80
    ctx->pc = 0x1AD440u;
    SET_GPR_U32(ctx, 31, 0x1AD448u);
    ctx->pc = 0x1AD444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD440u;
    // 0x1ad444: 0x24440670  addiu       $a0, $v0, 0x670 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ADB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ADB80u, 0x1AD440u, 0x1AD448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD448u;
label_1ad448:
    // 0x1ad448: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1ad448u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1ad44c: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x1ad44cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1ad450: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1AD450u;
    {
        const bool branch_taken_0x1ad450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AD454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD450u;
        // 0x1ad454: 0x26730020  addiu       $s3, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad450) {
            ctx->pc = 0x1AD438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ad438;
        }
    }
    ctx->pc = 0x1AD458u;
    // 0x1ad458: 0xc058018  jal         func_160060
    ctx->pc = 0x1AD458u;
    SET_GPR_U32(ctx, 31, 0x1AD460u);
    ctx->pc = 0x1AD45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD458u;
    // 0x1ad45c: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160060u, 0x1AD458u, 0x1AD460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD460u;
label_1ad460:
    // 0x1ad460: 0xc06b6e0  jal         func_1ADB80
    ctx->pc = 0x1AD460u;
    SET_GPR_U32(ctx, 31, 0x1AD468u);
    ctx->pc = 0x1AD464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD460u;
    // 0x1ad464: 0x26240670  addiu       $a0, $s1, 0x670 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ADB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ADB80u, 0x1AD460u, 0x1AD468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD468u;
label_1ad468:
    // 0x1ad468: 0xc063e14  jal         func_18F850
    ctx->pc = 0x1AD468u;
    SET_GPR_U32(ctx, 31, 0x1AD470u);
    ctx->pc = 0x1AD46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD468u;
    // 0x1ad46c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1AD468u, 0x1AD470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD470u;
}
