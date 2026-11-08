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

// Function: FUN_001266c0
// Address: 0x1266c0 - 0x1267b4
void FUN_001266c0_0x1266c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001266c0_0x1266c0");
#endif

    switch (ctx->pc) {
        case 0x126700u: goto label_126700;
        case 0x126708u: goto label_126708;
        case 0x126718u: goto label_126718;
        case 0x126720u: goto label_126720;
        case 0x12672cu: goto label_12672c;
        case 0x12673cu: goto label_12673c;
        case 0x126744u: goto label_126744;
        case 0x126754u: goto label_126754;
        case 0x126764u: goto label_126764;
        case 0x126770u: goto label_126770;
        case 0x12677cu: goto label_12677c;
        case 0x126794u: goto label_126794;
        default: break;
    }

    ctx->pc = 0x1266c0u;

    // 0x1266c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1266c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1266c4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1266c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1266c8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1266c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1266cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1266ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1266d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1266d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1266d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1266d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1266d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1266d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1266dc: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1266DCu;
    {
        const bool branch_taken_0x1266dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1266E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1266DCu;
        // 0x1266e0: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1266dc) {
            ctx->pc = 0x126794u;
            goto label_126794;
        }
    }
    ctx->pc = 0x1266E4u;
    // 0x1266e4: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1266e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1266e8: 0x3c050012  lui         $a1, 0x12
    ctx->pc = 0x1266e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18 << 16));
    // 0x1266ec: 0x24428990  addiu       $v0, $v0, -0x7670
    ctx->pc = 0x1266ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936976));
    // 0x1266f0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1266f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1266f4: 0x8e0400f0  lw          $a0, 0xF0($s0)
    ctx->pc = 0x1266f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x1266f8: 0xc07a394  jal         func_1E8E50
    ctx->pc = 0x1266F8u;
    SET_GPR_U32(ctx, 31, 0x126700u);
    ctx->pc = 0x1266FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1266F8u;
    // 0x1266fc: 0x24a567e0  addiu       $a1, $a1, 0x67E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8E50u, 0x1266F8u, 0x126700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126700u;
label_126700:
    // 0x126700: 0xc047a3c  jal         func_11E8F0
    ctx->pc = 0x126700u;
    SET_GPR_U32(ctx, 31, 0x126708u);
    ctx->pc = 0x11E8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E8F0u, 0x126700u, 0x126708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126708u;
label_126708:
    // 0x126708: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x126708u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12670c: 0x27a40058  addiu       $a0, $sp, 0x58
    ctx->pc = 0x12670cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x126710: 0xc048920  jal         func_122480
    ctx->pc = 0x126710u;
    SET_GPR_U32(ctx, 31, 0x126718u);
    ctx->pc = 0x126714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126710u;
    // 0x126714: 0x27a5005c  addiu       $a1, $sp, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122480u, 0x126710u, 0x126718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126718u;
label_126718:
    // 0x126718: 0xc04c254  jal         func_130950
    ctx->pc = 0x126718u;
    SET_GPR_U32(ctx, 31, 0x126720u);
    ctx->pc = 0x130950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130950u, 0x126718u, 0x126720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126720u;
label_126720:
    // 0x126720: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x126720u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126724: 0xc080748  jal         func_201D20
    ctx->pc = 0x126724u;
    SET_GPR_U32(ctx, 31, 0x12672Cu);
    ctx->pc = 0x126728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126724u;
    // 0x126728: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201D20u, 0x126724u, 0x12672Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12672Cu;
label_12672c:
    // 0x12672c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12672cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126730: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x126730u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126734: 0xc048884  jal         func_122210
    ctx->pc = 0x126734u;
    SET_GPR_U32(ctx, 31, 0x12673Cu);
    ctx->pc = 0x126738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126734u;
    // 0x126738: 0x27a40058  addiu       $a0, $sp, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122210u, 0x126734u, 0x12673Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12673Cu;
label_12673c:
    // 0x12673c: 0xc080748  jal         func_201D20
    ctx->pc = 0x12673Cu;
    SET_GPR_U32(ctx, 31, 0x126744u);
    ctx->pc = 0x126740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12673Cu;
    // 0x126740: 0x26040100  addiu       $a0, $s0, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201D20u, 0x12673Cu, 0x126744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126744u;
label_126744:
    // 0x126744: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x126744u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126748: 0x27a40058  addiu       $a0, $sp, 0x58
    ctx->pc = 0x126748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x12674c: 0xc049c74  jal         func_1271D0
    ctx->pc = 0x12674Cu;
    SET_GPR_U32(ctx, 31, 0x126754u);
    ctx->pc = 0x126750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12674Cu;
    // 0x126750: 0x26050100  addiu       $a1, $s0, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1271D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1271D0u, 0x12674Cu, 0x126754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126754u;
label_126754:
    // 0x126754: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x126754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x126758: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x126758u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x12675c: 0xc046c14  jal         func_11B050
    ctx->pc = 0x12675Cu;
    SET_GPR_U32(ctx, 31, 0x126764u);
    ctx->pc = 0x126760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12675Cu;
    // 0x126760: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B050u, 0x12675Cu, 0x126764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126764u;
label_126764:
    // 0x126764: 0x27a40058  addiu       $a0, $sp, 0x58
    ctx->pc = 0x126764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x126768: 0xc04619c  jal         func_118670
    ctx->pc = 0x126768u;
    SET_GPR_U32(ctx, 31, 0x126770u);
    ctx->pc = 0x12676Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126768u;
    // 0x12676c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x126768u, 0x126770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126770u;
label_126770:
    // 0x126770: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x126770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126774: 0xc0497d8  jal         func_125F60
    ctx->pc = 0x126774u;
    SET_GPR_U32(ctx, 31, 0x12677Cu);
    ctx->pc = 0x126778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126774u;
    // 0x126778: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125F60u, 0x126774u, 0x12677Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12677Cu;
label_12677c:
    // 0x12677c: 0x13143c  dsll32      $v0, $s3, 16
    ctx->pc = 0x12677cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 16));
    // 0x126780: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x126780u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x126784: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x126784u;
    {
        const bool branch_taken_0x126784 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x126788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126784u;
        // 0x126788: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126784) {
            ctx->pc = 0x126798u;
            goto label_126798;
        }
    }
    ctx->pc = 0x12678Cu;
    // 0x12678c: 0xc0401a4  jal         func_100690
    ctx->pc = 0x12678Cu;
    SET_GPR_U32(ctx, 31, 0x126794u);
    ctx->pc = 0x126790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12678Cu;
    // 0x126790: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x12678Cu, 0x126794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126794u;
label_126794:
    // 0x126794: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x126794u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_126798:
    // 0x126798: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x126798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12679c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x12679cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1267a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1267a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1267a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1267a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1267a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1267a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1267ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1267ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1267B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1267ACu;
        // 0x1267b0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1267ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1267B4u;
}
