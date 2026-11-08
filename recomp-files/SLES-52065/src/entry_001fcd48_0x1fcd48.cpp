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

// Function: entry_001fcd48
// Address: 0x1fcd48 - 0x1fcd94
void entry_001fcd48_0x1fcd48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fcd48_0x1fcd48");
#endif

    switch (ctx->pc) {
        case 0x1fcd70u: goto label_1fcd70;
        case 0x1fcd84u: goto label_1fcd84;
        default: break;
    }

    ctx->pc = 0x1fcd48u;

    // 0x1fcd48: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x1fcd48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1fcd4c: 0x1860001e  blez        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x1FCD4Cu;
    {
        const bool branch_taken_0x1fcd4c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1FCD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCD4Cu;
        // 0x1fcd50: 0x8fa40034  lw          $a0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcd4c) {
            ctx->pc = 0x1FCDC8u;
            return;
        }
    }
    ctx->pc = 0x1FCD54u;
    // 0x1fcd54: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1FCD54u;
    {
        const bool branch_taken_0x1fcd54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCD54u;
        // 0x1fcd58: 0x8fa50048  lw          $a1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcd54) {
            ctx->pc = 0x1FCDB8u;
            return;
        }
    }
    ctx->pc = 0x1FCD5Cu;
    // 0x1fcd5c: 0x1a40000d  blez        $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x1FCD5Cu;
    {
        const bool branch_taken_0x1fcd5c = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x1FCD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCD5Cu;
        // 0x1fcd60: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcd5c) {
            ctx->pc = 0x1FCD94u;
            return;
        }
    }
    ctx->pc = 0x1FCD64u;
    // 0x1fcd64: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1fcd64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcd68: 0xc08005a  jal         func_200168
    ctx->pc = 0x1FCD68u;
    SET_GPR_U32(ctx, 31, 0x1FCD70u);
    ctx->pc = 0x1FCD6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCD68u;
    // 0x1fcd6c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200168u, 0x1FCD68u, 0x1FCD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCD70u;
label_1fcd70:
    // 0x1fcd70: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x1fcd70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x1fcd74: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1fcd74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcd78: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1fcd78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fcd7c: 0xc07ffce  jal         func_1FFF38
    ctx->pc = 0x1FCD7Cu;
    SET_GPR_U32(ctx, 31, 0x1FCD84u);
    ctx->pc = 0x1FCD80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCD7Cu;
    // 0x1fcd80: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFF38u, 0x1FCD7Cu, 0x1FCD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCD84u;
label_1fcd84:
    // 0x1fcd84: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1fcd84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fcd88: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1fcd88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcd8c: 0xc07feca  jal         func_1FFB28
    ctx->pc = 0x1FCD8Cu;
    SET_GPR_U32(ctx, 31, 0x1FCD94u);
    ctx->pc = 0x1FCD90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCD8Cu;
    // 0x1fcd90: 0xafa20048  sw          $v0, 0x48($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFB28u, 0x1FCD8Cu, 0x1FCD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCD94u;
}
