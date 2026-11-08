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

// Function: FUN_001f6130
// Address: 0x1f6130 - 0x1f6180
void FUN_001f6130_0x1f6130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f6130_0x1f6130");
#endif

    switch (ctx->pc) {
        case 0x1f6170u: goto label_1f6170;
        default: break;
    }

    ctx->pc = 0x1f6130u;

    // 0x1f6130: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1f6130u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6134: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x1f6134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x1f6138: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x1f6138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1f613c: 0x70c31818  mult1       $v1, $a2, $v1
    ctx->pc = 0x1f613cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1f6140: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x1f6140u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1f6144: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f6144u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f6148: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1f6148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1f614c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f614cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f6150: 0x244210d0  addiu       $v0, $v0, 0x10D0
    ctx->pc = 0x1f6150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4304));
    // 0x1f6154: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1f6154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1f6158: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1f6158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1f615c: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1f615cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1f6160: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F6160u;
    {
        const bool branch_taken_0x1f6160 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6160u;
        // 0x1f6164: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6160) {
            ctx->pc = 0x1F6174u;
            goto label_1f6174;
        }
    }
    ctx->pc = 0x1F6168u;
    // 0x1f6168: 0xc07d7ba  jal         func_1F5EE8
    ctx->pc = 0x1F6168u;
    SET_GPR_U32(ctx, 31, 0x1F6170u);
    ctx->pc = 0x1F616Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6168u;
    // 0x1f616c: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5EE8u, 0x1F6168u, 0x1F6170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6170u;
label_1f6170:
    // 0x1f6170: 0x90420071  lbu         $v0, 0x71($v0)
    ctx->pc = 0x1f6170u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 113)));
label_1f6174:
    // 0x1f6174: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f6174u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f6178: 0x3e00008  jr          $ra
    ctx->pc = 0x1F6178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F617Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6178u;
        // 0x1f617c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6178u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F6180u;
}
