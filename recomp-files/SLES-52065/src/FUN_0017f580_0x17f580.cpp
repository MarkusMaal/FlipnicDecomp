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

// Function: FUN_0017f580
// Address: 0x17f580 - 0x17f674
void FUN_0017f580_0x17f580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017f580_0x17f580");
#endif

    switch (ctx->pc) {
        case 0x17f5c0u: goto label_17f5c0;
        case 0x17f5d4u: goto label_17f5d4;
        case 0x17f5e0u: goto label_17f5e0;
        case 0x17f5e8u: goto label_17f5e8;
        case 0x17f5f0u: goto label_17f5f0;
        case 0x17f610u: goto label_17f610;
        case 0x17f624u: goto label_17f624;
        case 0x17f630u: goto label_17f630;
        case 0x17f638u: goto label_17f638;
        case 0x17f640u: goto label_17f640;
        case 0x17f64cu: goto label_17f64c;
        default: break;
    }

    ctx->pc = 0x17f580u;

    // 0x17f580: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17f580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17f584: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x17f584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x17f588: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17f588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17f58c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17f58cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17f590: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17f590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17f594: 0x8c900004  lw          $s0, 0x4($a0)
    ctx->pc = 0x17f594u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x17f598: 0x12000030  beqz        $s0, . + 4 + (0x30 << 2)
    ctx->pc = 0x17F598u;
    {
        const bool branch_taken_0x17f598 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F598u;
        // 0x17f59c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f598) {
            ctx->pc = 0x17F65Cu;
            goto label_17f65c;
        }
    }
    ctx->pc = 0x17F5A0u;
    // 0x17f5a0: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x17f5a0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17f5a4: 0x12200012  beqz        $s1, . + 4 + (0x12 << 2)
    ctx->pc = 0x17F5A4u;
    {
        const bool branch_taken_0x17f5a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f5a4) {
            ctx->pc = 0x17F5F0u;
            goto label_17f5f0;
        }
    }
    ctx->pc = 0x17F5ACu;
    // 0x17f5ac: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x17f5acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17f5b0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17F5B0u;
    {
        const bool branch_taken_0x17f5b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f5b0) {
            ctx->pc = 0x17F5C0u;
            goto label_17f5c0;
        }
    }
    ctx->pc = 0x17F5B8u;
    // 0x17f5b8: 0xc05fce8  jal         func_17F3A0
    ctx->pc = 0x17F5B8u;
    SET_GPR_U32(ctx, 31, 0x17F5C0u);
    ctx->pc = 0x17F3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F3A0u, 0x17F5B8u, 0x17F5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F5C0u;
label_17f5c0:
    // 0x17f5c0: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x17f5c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x17f5c4: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x17F5C4u;
    {
        const bool branch_taken_0x17f5c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F5C4u;
        // 0x17f5c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f5c4) {
            ctx->pc = 0x17F5D8u;
            goto label_17f5d8;
        }
    }
    ctx->pc = 0x17F5CCu;
    // 0x17f5cc: 0xc05fce8  jal         func_17F3A0
    ctx->pc = 0x17F5CCu;
    SET_GPR_U32(ctx, 31, 0x17F5D4u);
    ctx->pc = 0x17F5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F5CCu;
    // 0x17f5d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F3A0u, 0x17F5CCu, 0x17F5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F5D4u;
label_17f5d4:
    // 0x17f5d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17f5d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_17f5d8:
    // 0x17f5d8: 0xc05fd5c  jal         func_17F570
    ctx->pc = 0x17F5D8u;
    SET_GPR_U32(ctx, 31, 0x17F5E0u);
    ctx->pc = 0x17F570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F570u, 0x17F5D8u, 0x17F5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F5E0u;
label_17f5e0:
    // 0x17f5e0: 0xc05fd58  jal         func_17F560
    ctx->pc = 0x17F5E0u;
    SET_GPR_U32(ctx, 31, 0x17F5E8u);
    ctx->pc = 0x17F5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F5E0u;
    // 0x17f5e4: 0x26440004  addiu       $a0, $s2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F560u, 0x17F5E0u, 0x17F5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F5E8u;
label_17f5e8:
    // 0x17f5e8: 0xc0401a4  jal         func_100690
    ctx->pc = 0x17F5E8u;
    SET_GPR_U32(ctx, 31, 0x17F5F0u);
    ctx->pc = 0x17F5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F5E8u;
    // 0x17f5ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x17F5E8u, 0x17F5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F5F0u;
label_17f5f0:
    // 0x17f5f0: 0x8e110004  lw          $s1, 0x4($s0)
    ctx->pc = 0x17f5f0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x17f5f4: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x17F5F4u;
    {
        const bool branch_taken_0x17f5f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F5F4u;
        // 0x17f5f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f5f4) {
            ctx->pc = 0x17F644u;
            goto label_17f644;
        }
    }
    ctx->pc = 0x17F5FCu;
    // 0x17f5fc: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x17f5fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17f600: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17F600u;
    {
        const bool branch_taken_0x17f600 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F600u;
        // 0x17f604: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f600) {
            ctx->pc = 0x17F610u;
            goto label_17f610;
        }
    }
    ctx->pc = 0x17F608u;
    // 0x17f608: 0xc05fce8  jal         func_17F3A0
    ctx->pc = 0x17F608u;
    SET_GPR_U32(ctx, 31, 0x17F610u);
    ctx->pc = 0x17F3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F3A0u, 0x17F608u, 0x17F610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F610u;
label_17f610:
    // 0x17f610: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x17f610u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x17f614: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x17F614u;
    {
        const bool branch_taken_0x17f614 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F614u;
        // 0x17f618: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f614) {
            ctx->pc = 0x17F628u;
            goto label_17f628;
        }
    }
    ctx->pc = 0x17F61Cu;
    // 0x17f61c: 0xc05fce8  jal         func_17F3A0
    ctx->pc = 0x17F61Cu;
    SET_GPR_U32(ctx, 31, 0x17F624u);
    ctx->pc = 0x17F620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F61Cu;
    // 0x17f620: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F3A0u, 0x17F61Cu, 0x17F624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F624u;
label_17f624:
    // 0x17f624: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17f624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_17f628:
    // 0x17f628: 0xc05fd5c  jal         func_17F570
    ctx->pc = 0x17F628u;
    SET_GPR_U32(ctx, 31, 0x17F630u);
    ctx->pc = 0x17F570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F570u, 0x17F628u, 0x17F630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F630u;
label_17f630:
    // 0x17f630: 0xc05fd58  jal         func_17F560
    ctx->pc = 0x17F630u;
    SET_GPR_U32(ctx, 31, 0x17F638u);
    ctx->pc = 0x17F634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F630u;
    // 0x17f634: 0x26440004  addiu       $a0, $s2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F560u, 0x17F630u, 0x17F638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F638u;
label_17f638:
    // 0x17f638: 0xc0401a4  jal         func_100690
    ctx->pc = 0x17F638u;
    SET_GPR_U32(ctx, 31, 0x17F640u);
    ctx->pc = 0x17F63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F638u;
    // 0x17f63c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x17F638u, 0x17F640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F640u;
label_17f640:
    // 0x17f640: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17f640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17f644:
    // 0x17f644: 0xc0401a4  jal         func_100690
    ctx->pc = 0x17F644u;
    SET_GPR_U32(ctx, 31, 0x17F64Cu);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x17F644u, 0x17F64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F64Cu;
label_17f64c:
    // 0x17f64c: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x17f64cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x17f650: 0x26430004  addiu       $v1, $s2, 0x4
    ctx->pc = 0x17f650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x17f654: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x17f654u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x17f658: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x17f658u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
label_17f65c:
    // 0x17f65c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x17f65cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17f660: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17f660u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17f664: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17f664u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17f668: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17f668u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17f66c: 0x3e00008  jr          $ra
    ctx->pc = 0x17F66Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F66Cu;
        // 0x17f670: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F66Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F674u;
}
