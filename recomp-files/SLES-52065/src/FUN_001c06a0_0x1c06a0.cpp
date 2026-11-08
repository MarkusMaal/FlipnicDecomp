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

// Function: FUN_001c06a0
// Address: 0x1c06a0 - 0x1c0720
void FUN_001c06a0_0x1c06a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c06a0_0x1c06a0");
#endif

    switch (ctx->pc) {
        case 0x1c06a0u: goto label_1c06a0;
        case 0x1c06a4u: goto label_1c06a4;
        case 0x1c06a8u: goto label_1c06a8;
        case 0x1c06acu: goto label_1c06ac;
        case 0x1c06b0u: goto label_1c06b0;
        case 0x1c06b4u: goto label_1c06b4;
        case 0x1c06b8u: goto label_1c06b8;
        case 0x1c06bcu: goto label_1c06bc;
        case 0x1c06c0u: goto label_1c06c0;
        case 0x1c06c4u: goto label_1c06c4;
        case 0x1c06c8u: goto label_1c06c8;
        case 0x1c06ccu: goto label_1c06cc;
        case 0x1c06d0u: goto label_1c06d0;
        case 0x1c06d4u: goto label_1c06d4;
        case 0x1c06d8u: goto label_1c06d8;
        case 0x1c06dcu: goto label_1c06dc;
        case 0x1c06e0u: goto label_1c06e0;
        case 0x1c06e4u: goto label_1c06e4;
        case 0x1c06e8u: goto label_1c06e8;
        case 0x1c06ecu: goto label_1c06ec;
        case 0x1c06f0u: goto label_1c06f0;
        case 0x1c06f4u: goto label_1c06f4;
        case 0x1c06f8u: goto label_1c06f8;
        case 0x1c06fcu: goto label_1c06fc;
        case 0x1c0700u: goto label_1c0700;
        case 0x1c0704u: goto label_1c0704;
        case 0x1c0708u: goto label_1c0708;
        case 0x1c070cu: goto label_1c070c;
        case 0x1c0710u: goto label_1c0710;
        case 0x1c0714u: goto label_1c0714;
        case 0x1c0718u: goto label_1c0718;
        case 0x1c071cu: goto label_1c071c;
        default: break;
    }

    ctx->pc = 0x1c06a0u;

label_1c06a0:
    // 0x1c06a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c06a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1c06a4:
    // 0x1c06a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c06a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1c06a8:
    // 0x1c06a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c06a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1c06ac:
    // 0x1c06ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c06acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1c06b0:
    // 0x1c06b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c06b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c06b4:
    // 0x1c06b4: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
label_1c06b8:
    if (ctx->pc == 0x1C06B8u) {
        ctx->pc = 0x1C06B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C06B4u;
        // 0x1c06b8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C06BCu;
        goto label_1c06bc;
    }
    ctx->pc = 0x1C06B4u;
    {
        const bool branch_taken_0x1c06b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C06B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C06B4u;
        // 0x1c06b8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c06b4) {
            ctx->pc = 0x1C0708u;
            goto label_1c0708;
        }
    }
    ctx->pc = 0x1C06BCu;
label_1c06bc:
    // 0x1c06bc: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1c06bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
label_1c06c0:
    // 0x1c06c0: 0x2442baa0  addiu       $v0, $v0, -0x4560
    ctx->pc = 0x1c06c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949536));
label_1c06c4:
    // 0x1c06c4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1c06c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1c06c8:
    // 0x1c06c8: 0x8e240078  lw          $a0, 0x78($s1)
    ctx->pc = 0x1c06c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
label_1c06cc:
    // 0x1c06cc: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1c06d0:
    if (ctx->pc == 0x1C06D0u) {
        ctx->pc = 0x1C06D4u;
        goto label_1c06d4;
    }
    ctx->pc = 0x1C06CCu;
    {
        const bool branch_taken_0x1c06cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c06cc) {
            ctx->pc = 0x1C06E4u;
            goto label_1c06e4;
        }
    }
    ctx->pc = 0x1C06D4u;
label_1c06d4:
    // 0x1c06d4: 0x8c990094  lw          $t9, 0x94($a0)
    ctx->pc = 0x1c06d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
label_1c06d8:
    // 0x1c06d8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1c06d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1c06dc:
    // 0x1c06dc: 0x320f809  jalr        $t9
label_1c06e0:
    if (ctx->pc == 0x1C06E0u) {
        ctx->pc = 0x1C06E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C06DCu;
        // 0x1c06e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C06E4u;
        goto label_1c06e4;
    }
    ctx->pc = 0x1C06DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1C06E4u);
        ctx->pc = 0x1C06E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C06DCu;
        // 0x1c06e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C06DCu, 0x1C06E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C06E4u;
label_1c06e4:
    // 0x1c06e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c06e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c06e8:
    // 0x1c06e8: 0xc06dc54  jal         func_1B7150
label_1c06ec:
    if (ctx->pc == 0x1C06ECu) {
        ctx->pc = 0x1C06ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C06E8u;
        // 0x1c06ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C06F0u;
        goto label_1c06f0;
    }
    ctx->pc = 0x1C06E8u;
    SET_GPR_U32(ctx, 31, 0x1C06F0u);
    ctx->pc = 0x1C06ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C06E8u;
    // 0x1c06ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7150u, 0x1C06E8u, 0x1C06F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C06F0u;
label_1c06f0:
    // 0x1c06f0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1c06f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_1c06f4:
    // 0x1c06f4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1c06f4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1c06f8:
    // 0x1c06f8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_1c06fc:
    if (ctx->pc == 0x1C06FCu) {
        ctx->pc = 0x1C06FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C06F8u;
        // 0x1c06fc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0700u;
        goto label_1c0700;
    }
    ctx->pc = 0x1C06F8u;
    {
        const bool branch_taken_0x1c06f8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1C06FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C06F8u;
        // 0x1c06fc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c06f8) {
            ctx->pc = 0x1C070Cu;
            goto label_1c070c;
        }
    }
    ctx->pc = 0x1C0700u;
label_1c0700:
    // 0x1c0700: 0xc0401a4  jal         func_100690
label_1c0704:
    if (ctx->pc == 0x1C0704u) {
        ctx->pc = 0x1C0704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0700u;
        // 0x1c0704: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0708u;
        goto label_1c0708;
    }
    ctx->pc = 0x1C0700u;
    SET_GPR_U32(ctx, 31, 0x1C0708u);
    ctx->pc = 0x1C0704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0700u;
    // 0x1c0704: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1C0700u, 0x1C0708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0708u;
label_1c0708:
    // 0x1c0708: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1c0708u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c070c:
    // 0x1c070c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c070cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1c0710:
    // 0x1c0710: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c0710u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c0714:
    // 0x1c0714: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c0714u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c0718:
    // 0x1c0718: 0x3e00008  jr          $ra
label_1c071c:
    if (ctx->pc == 0x1C071Cu) {
        ctx->pc = 0x1C071Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0718u;
        // 0x1c071c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0720u;
        goto label_fallthrough_0x1c0718;
    }
    ctx->pc = 0x1C0718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C071Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0718u;
        // 0x1c071c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0718u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1c0718:
    ctx->pc = 0x1C0720u;
}
