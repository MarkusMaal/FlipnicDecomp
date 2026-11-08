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

// Function: FUN_00206830
// Address: 0x206830 - 0x20688c
void FUN_00206830_0x206830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00206830_0x206830");
#endif

    switch (ctx->pc) {
        case 0x206850u: goto label_206850;
        case 0x206860u: goto label_206860;
        case 0x206868u: goto label_206868;
        case 0x206878u: goto label_206878;
        default: break;
    }

    ctx->pc = 0x206830u;

    // 0x206830: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x206830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x206834: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x206834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x206838: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x206838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20683c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x20683cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206840: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x206840u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206844: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x206844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x206848: 0xc082178  jal         func_2085E0
    ctx->pc = 0x206848u;
    SET_GPR_U32(ctx, 31, 0x206850u);
    ctx->pc = 0x20684Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206848u;
    // 0x20684c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2085E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2085E0u, 0x206848u, 0x206850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206850u;
label_206850:
    // 0x206850: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x206850u;
    {
        const bool branch_taken_0x206850 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x206854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206850u;
        // 0x206854: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206850) {
            ctx->pc = 0x206870u;
            goto label_206870;
        }
    }
    ctx->pc = 0x206858u;
    // 0x206858: 0xc082014  jal         func_208050
    ctx->pc = 0x206858u;
    SET_GPR_U32(ctx, 31, 0x206860u);
    ctx->pc = 0x20685Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206858u;
    // 0x20685c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208050u, 0x206858u, 0x206860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206860u;
label_206860:
    // 0x206860: 0xc081a24  jal         func_206890
    ctx->pc = 0x206860u;
    SET_GPR_U32(ctx, 31, 0x206868u);
    ctx->pc = 0x206864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206860u;
    // 0x206864: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206890u, 0x206860u, 0x206868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206868u;
label_206868:
    // 0x206868: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x206868u;
    {
        const bool branch_taken_0x206868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20686Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206868u;
        // 0x20686c: 0x2102f  dsubu       $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206868) {
            ctx->pc = 0x206878u;
            goto label_206878;
        }
    }
    ctx->pc = 0x206870u;
label_206870:
    // 0x206870: 0xc081a24  jal         func_206890
    ctx->pc = 0x206870u;
    SET_GPR_U32(ctx, 31, 0x206878u);
    ctx->pc = 0x206874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206870u;
    // 0x206874: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206890u, 0x206870u, 0x206878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206878u;
label_206878:
    // 0x206878: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x206878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20687c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x20687cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x206880: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x206880u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x206884: 0x3e00008  jr          $ra
    ctx->pc = 0x206884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206884u;
        // 0x206888: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206884u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20688Cu;
}
