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

// Function: FUN_001b6850
// Address: 0x1b6850 - 0x1b68d8
void FUN_001b6850_0x1b6850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b6850_0x1b6850");
#endif

    switch (ctx->pc) {
        case 0x1b6878u: goto label_1b6878;
        case 0x1b6884u: goto label_1b6884;
        case 0x1b68a4u: goto label_1b68a4;
        case 0x1b68c0u: goto label_1b68c0;
        default: break;
    }

    ctx->pc = 0x1b6850u;

    // 0x1b6850: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b6850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b6854: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b6854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b6858: 0x27a60034  addiu       $a2, $sp, 0x34
    ctx->pc = 0x1b6858u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x1b685c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b685cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b6860: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b6860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b6864: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b6864u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6868: 0xafa50034  sw          $a1, 0x34($sp)
    ctx->pc = 0x1b6868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 5));
    // 0x1b686c: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x1b686cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1b6870: 0xc06da38  jal         func_1B68E0
    ctx->pc = 0x1B6870u;
    SET_GPR_U32(ctx, 31, 0x1B6878u);
    ctx->pc = 0x1B6874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6870u;
    // 0x1b6874: 0x2625001c  addiu       $a1, $s1, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B68E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B68E0u, 0x1B6870u, 0x1B6878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6878u;
label_1b6878:
    // 0x1b6878: 0x8fb0004c  lw          $s0, 0x4C($sp)
    ctx->pc = 0x1b6878u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1b687c: 0xc06d7fc  jal         func_1B5FF0
    ctx->pc = 0x1B687Cu;
    SET_GPR_U32(ctx, 31, 0x1B6884u);
    ctx->pc = 0x1B6880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B687Cu;
    // 0x1b6880: 0x2624001c  addiu       $a0, $s1, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5FF0u, 0x1B687Cu, 0x1B6884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6884u;
label_1b6884:
    // 0x1b6884: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B6884u;
    {
        const bool branch_taken_0x1b6884 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b6884) {
            ctx->pc = 0x1B6894u;
            goto label_1b6894;
        }
    }
    ctx->pc = 0x1B688Cu;
    // 0x1b688c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1B688Cu;
    {
        const bool branch_taken_0x1b688c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B688Cu;
        // 0x1b6890: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b688c) {
            ctx->pc = 0x1B68C4u;
            goto label_1b68c4;
        }
    }
    ctx->pc = 0x1B6894u;
label_1b6894:
    // 0x1b6894: 0x8fa50034  lw          $a1, 0x34($sp)
    ctx->pc = 0x1b6894u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x1b6898: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b6898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b689c: 0xc06d914  jal         func_1B6450
    ctx->pc = 0x1B689Cu;
    SET_GPR_U32(ctx, 31, 0x1B68A4u);
    ctx->pc = 0x1B68A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B689Cu;
    // 0x1b68a0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6450u, 0x1B689Cu, 0x1B68A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B68A4u;
label_1b68a4:
    // 0x1b68a4: 0xafb00040  sw          $s0, 0x40($sp)
    ctx->pc = 0x1b68a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 16));
    // 0x1b68a8: 0x2625001c  addiu       $a1, $s1, 0x1C
    ctx->pc = 0x1b68a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x1b68ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b68acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b68b0: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x1b68b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x1b68b4: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1b68b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1b68b8: 0xc06db6c  jal         func_1B6DB0
    ctx->pc = 0x1B68B8u;
    SET_GPR_U32(ctx, 31, 0x1B68C0u);
    ctx->pc = 0x1B68BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B68B8u;
    // 0x1b68bc: 0xafb00044  sw          $s0, 0x44($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6DB0u, 0x1B68B8u, 0x1B68C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B68C0u;
label_1b68c0:
    // 0x1b68c0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b68c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b68c4:
    // 0x1b68c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b68c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b68c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b68c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b68cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b68ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b68d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B68D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B68D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B68D0u;
        // 0x1b68d4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B68D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B68D8u;
}
