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

// Function: entry_001e9814
// Address: 0x1e9814 - 0x1e9894
void entry_001e9814_0x1e9814(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e9814_0x1e9814");
#endif

    switch (ctx->pc) {
        case 0x1e9820u: goto label_1e9820;
        case 0x1e9830u: goto label_1e9830;
        case 0x1e9840u: goto label_1e9840;
        default: break;
    }

    ctx->pc = 0x1e9814u;

    // 0x1e9814: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x1e9814u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
    // 0x1e9818: 0xc07a574  jal         func_1E95D0
    ctx->pc = 0x1E9818u;
    SET_GPR_U32(ctx, 31, 0x1E9820u);
    ctx->pc = 0x1E981Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9818u;
    // 0x1e981c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E95D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E95D0u, 0x1E9818u, 0x1E9820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9820u;
label_1e9820:
    // 0x1e9820: 0x27b30070  addiu       $s3, $sp, 0x70
    ctx->pc = 0x1e9820u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1e9824: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e9824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9828: 0xc07a59c  jal         func_1E9670
    ctx->pc = 0x1E9828u;
    SET_GPR_U32(ctx, 31, 0x1E9830u);
    ctx->pc = 0x1E982Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9828u;
    // 0x1e982c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9670u, 0x1E9828u, 0x1E9830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9830u;
label_1e9830:
    // 0x1e9830: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1e9830u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9834: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e9834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9838: 0xc07a7f0  jal         func_1E9FC0
    ctx->pc = 0x1E9838u;
    SET_GPR_U32(ctx, 31, 0x1E9840u);
    ctx->pc = 0x1E983Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9838u;
    // 0x1e983c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9FC0u, 0x1E9838u, 0x1E9840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9840u;
label_1e9840:
    // 0x1e9840: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x1e9840u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1e9844: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x1e9844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x1e9848: 0x8e440018  lw          $a0, 0x18($s2)
    ctx->pc = 0x1e9848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x1e984c: 0xdfa60078  ld          $a2, 0x78($sp)
    ctx->pc = 0x1e984cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1e9850: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1e9850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1e9854: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1e9854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1e9858: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1e9858u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1e985c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1e985cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1e9860: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1e9860u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x1e9864: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x1e9864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1e9868: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1e9868u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x1e986c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1e986cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1e9870: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x1e9870u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e9874: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E9874u;
    {
        const bool branch_taken_0x1e9874 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E9878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9874u;
        // 0x1e9878: 0x24820010  addiu       $v0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9874) {
            ctx->pc = 0x1E9894u;
            return;
        }
    }
    ctx->pc = 0x1E987Cu;
    // 0x1e987c: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x1e987cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x1e9880: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1e9880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1e9884: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e9884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e9888: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1e9888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1e988c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1E988Cu;
    {
        const bool branch_taken_0x1e988c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E988Cu;
        // 0x1e9890: 0xac820010  sw          $v0, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e988c) {
            ctx->pc = 0x1E98A8u;
            return;
        }
    }
    ctx->pc = 0x1E9894u;
}
