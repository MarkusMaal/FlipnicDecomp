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

// Function: FUN_001c9870
// Address: 0x1c9870 - 0x1c98f0
void FUN_001c9870_0x1c9870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c9870_0x1c9870");
#endif

    switch (ctx->pc) {
        case 0x1c9870u: goto label_1c9870;
        case 0x1c9874u: goto label_1c9874;
        case 0x1c9878u: goto label_1c9878;
        case 0x1c987cu: goto label_1c987c;
        case 0x1c9880u: goto label_1c9880;
        case 0x1c9884u: goto label_1c9884;
        case 0x1c9888u: goto label_1c9888;
        case 0x1c988cu: goto label_1c988c;
        case 0x1c9890u: goto label_1c9890;
        case 0x1c9894u: goto label_1c9894;
        case 0x1c9898u: goto label_1c9898;
        case 0x1c989cu: goto label_1c989c;
        case 0x1c98a0u: goto label_1c98a0;
        case 0x1c98a4u: goto label_1c98a4;
        case 0x1c98a8u: goto label_1c98a8;
        case 0x1c98acu: goto label_1c98ac;
        case 0x1c98b0u: goto label_1c98b0;
        case 0x1c98b4u: goto label_1c98b4;
        case 0x1c98b8u: goto label_1c98b8;
        case 0x1c98bcu: goto label_1c98bc;
        case 0x1c98c0u: goto label_1c98c0;
        case 0x1c98c4u: goto label_1c98c4;
        case 0x1c98c8u: goto label_1c98c8;
        case 0x1c98ccu: goto label_1c98cc;
        case 0x1c98d0u: goto label_1c98d0;
        case 0x1c98d4u: goto label_1c98d4;
        case 0x1c98d8u: goto label_1c98d8;
        case 0x1c98dcu: goto label_1c98dc;
        case 0x1c98e0u: goto label_1c98e0;
        case 0x1c98e4u: goto label_1c98e4;
        case 0x1c98e8u: goto label_1c98e8;
        case 0x1c98ecu: goto label_1c98ec;
        default: break;
    }

    ctx->pc = 0x1c9870u;

label_1c9870:
    // 0x1c9870: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c9870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1c9874:
    // 0x1c9874: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c9874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1c9878:
    // 0x1c9878: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c9878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1c987c:
    // 0x1c987c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c987cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1c9880:
    // 0x1c9880: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c9880u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c9884:
    // 0x1c9884: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
label_1c9888:
    if (ctx->pc == 0x1C9888u) {
        ctx->pc = 0x1C9888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9884u;
        // 0x1c9888: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C988Cu;
        goto label_1c988c;
    }
    ctx->pc = 0x1C9884u;
    {
        const bool branch_taken_0x1c9884 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9884u;
        // 0x1c9888: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9884) {
            ctx->pc = 0x1C98D8u;
            goto label_1c98d8;
        }
    }
    ctx->pc = 0x1C988Cu;
label_1c988c:
    // 0x1c988c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1c988cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
label_1c9890:
    // 0x1c9890: 0x2442bce0  addiu       $v0, $v0, -0x4320
    ctx->pc = 0x1c9890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950112));
label_1c9894:
    // 0x1c9894: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1c9894u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1c9898:
    // 0x1c9898: 0x8e240078  lw          $a0, 0x78($s1)
    ctx->pc = 0x1c9898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
label_1c989c:
    // 0x1c989c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1c98a0:
    if (ctx->pc == 0x1C98A0u) {
        ctx->pc = 0x1C98A4u;
        goto label_1c98a4;
    }
    ctx->pc = 0x1C989Cu;
    {
        const bool branch_taken_0x1c989c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c989c) {
            ctx->pc = 0x1C98B4u;
            goto label_1c98b4;
        }
    }
    ctx->pc = 0x1C98A4u;
label_1c98a4:
    // 0x1c98a4: 0x8c990094  lw          $t9, 0x94($a0)
    ctx->pc = 0x1c98a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
label_1c98a8:
    // 0x1c98a8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1c98a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1c98ac:
    // 0x1c98ac: 0x320f809  jalr        $t9
label_1c98b0:
    if (ctx->pc == 0x1C98B0u) {
        ctx->pc = 0x1C98B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C98ACu;
        // 0x1c98b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C98B4u;
        goto label_1c98b4;
    }
    ctx->pc = 0x1C98ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1C98B4u);
        ctx->pc = 0x1C98B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C98ACu;
        // 0x1c98b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C98ACu, 0x1C98B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C98B4u;
label_1c98b4:
    // 0x1c98b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c98b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c98b8:
    // 0x1c98b8: 0xc06dc54  jal         func_1B7150
label_1c98bc:
    if (ctx->pc == 0x1C98BCu) {
        ctx->pc = 0x1C98BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C98B8u;
        // 0x1c98bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C98C0u;
        goto label_1c98c0;
    }
    ctx->pc = 0x1C98B8u;
    SET_GPR_U32(ctx, 31, 0x1C98C0u);
    ctx->pc = 0x1C98BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C98B8u;
    // 0x1c98bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7150u, 0x1C98B8u, 0x1C98C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C98C0u;
label_1c98c0:
    // 0x1c98c0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1c98c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_1c98c4:
    // 0x1c98c4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1c98c4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1c98c8:
    // 0x1c98c8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_1c98cc:
    if (ctx->pc == 0x1C98CCu) {
        ctx->pc = 0x1C98CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C98C8u;
        // 0x1c98cc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C98D0u;
        goto label_1c98d0;
    }
    ctx->pc = 0x1C98C8u;
    {
        const bool branch_taken_0x1c98c8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1C98CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C98C8u;
        // 0x1c98cc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c98c8) {
            ctx->pc = 0x1C98DCu;
            goto label_1c98dc;
        }
    }
    ctx->pc = 0x1C98D0u;
label_1c98d0:
    // 0x1c98d0: 0xc0401a4  jal         func_100690
label_1c98d4:
    if (ctx->pc == 0x1C98D4u) {
        ctx->pc = 0x1C98D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C98D0u;
        // 0x1c98d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C98D8u;
        goto label_1c98d8;
    }
    ctx->pc = 0x1C98D0u;
    SET_GPR_U32(ctx, 31, 0x1C98D8u);
    ctx->pc = 0x1C98D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C98D0u;
    // 0x1c98d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1C98D0u, 0x1C98D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C98D8u;
label_1c98d8:
    // 0x1c98d8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1c98d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c98dc:
    // 0x1c98dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c98dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1c98e0:
    // 0x1c98e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c98e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c98e4:
    // 0x1c98e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c98e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c98e8:
    // 0x1c98e8: 0x3e00008  jr          $ra
label_1c98ec:
    if (ctx->pc == 0x1C98ECu) {
        ctx->pc = 0x1C98ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C98E8u;
        // 0x1c98ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C98F0u;
        goto label_fallthrough_0x1c98e8;
    }
    ctx->pc = 0x1C98E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C98ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C98E8u;
        // 0x1c98ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C98E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1c98e8:
    ctx->pc = 0x1C98F0u;
}
