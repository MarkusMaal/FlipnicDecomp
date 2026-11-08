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

// Function: FUN_0010f680
// Address: 0x10f680 - 0x10f7ac
void FUN_0010f680_0x10f680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0010f680_0x10f680");
#endif

    switch (ctx->pc) {
        case 0x10f680u: goto label_10f680;
        case 0x10f684u: goto label_10f684;
        case 0x10f688u: goto label_10f688;
        case 0x10f68cu: goto label_10f68c;
        case 0x10f690u: goto label_10f690;
        case 0x10f694u: goto label_10f694;
        case 0x10f698u: goto label_10f698;
        case 0x10f69cu: goto label_10f69c;
        case 0x10f6a0u: goto label_10f6a0;
        case 0x10f6a4u: goto label_10f6a4;
        case 0x10f6a8u: goto label_10f6a8;
        case 0x10f6acu: goto label_10f6ac;
        case 0x10f6b0u: goto label_10f6b0;
        case 0x10f6b4u: goto label_10f6b4;
        case 0x10f6b8u: goto label_10f6b8;
        case 0x10f6bcu: goto label_10f6bc;
        case 0x10f6c0u: goto label_10f6c0;
        case 0x10f6c4u: goto label_10f6c4;
        case 0x10f6c8u: goto label_10f6c8;
        case 0x10f6ccu: goto label_10f6cc;
        case 0x10f6d0u: goto label_10f6d0;
        case 0x10f6d4u: goto label_10f6d4;
        case 0x10f6d8u: goto label_10f6d8;
        case 0x10f6dcu: goto label_10f6dc;
        case 0x10f6e0u: goto label_10f6e0;
        case 0x10f6e4u: goto label_10f6e4;
        case 0x10f6e8u: goto label_10f6e8;
        case 0x10f6ecu: goto label_10f6ec;
        case 0x10f6f0u: goto label_10f6f0;
        case 0x10f6f4u: goto label_10f6f4;
        case 0x10f6f8u: goto label_10f6f8;
        case 0x10f6fcu: goto label_10f6fc;
        case 0x10f700u: goto label_10f700;
        case 0x10f704u: goto label_10f704;
        case 0x10f708u: goto label_10f708;
        case 0x10f70cu: goto label_10f70c;
        case 0x10f710u: goto label_10f710;
        case 0x10f714u: goto label_10f714;
        case 0x10f718u: goto label_10f718;
        case 0x10f71cu: goto label_10f71c;
        case 0x10f720u: goto label_10f720;
        case 0x10f724u: goto label_10f724;
        case 0x10f728u: goto label_10f728;
        case 0x10f72cu: goto label_10f72c;
        case 0x10f730u: goto label_10f730;
        case 0x10f734u: goto label_10f734;
        case 0x10f738u: goto label_10f738;
        case 0x10f73cu: goto label_10f73c;
        case 0x10f740u: goto label_10f740;
        case 0x10f744u: goto label_10f744;
        case 0x10f748u: goto label_10f748;
        case 0x10f74cu: goto label_10f74c;
        case 0x10f750u: goto label_10f750;
        case 0x10f754u: goto label_10f754;
        case 0x10f758u: goto label_10f758;
        case 0x10f75cu: goto label_10f75c;
        case 0x10f760u: goto label_10f760;
        case 0x10f764u: goto label_10f764;
        case 0x10f768u: goto label_10f768;
        case 0x10f76cu: goto label_10f76c;
        case 0x10f770u: goto label_10f770;
        case 0x10f774u: goto label_10f774;
        case 0x10f778u: goto label_10f778;
        case 0x10f77cu: goto label_10f77c;
        case 0x10f780u: goto label_10f780;
        case 0x10f784u: goto label_10f784;
        case 0x10f788u: goto label_10f788;
        case 0x10f78cu: goto label_10f78c;
        case 0x10f790u: goto label_10f790;
        case 0x10f794u: goto label_10f794;
        case 0x10f798u: goto label_10f798;
        case 0x10f79cu: goto label_10f79c;
        case 0x10f7a0u: goto label_10f7a0;
        case 0x10f7a4u: goto label_10f7a4;
        case 0x10f7a8u: goto label_10f7a8;
        default: break;
    }

    ctx->pc = 0x10f680u;

label_10f680:
    // 0x10f680: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x10f680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_10f684:
    // 0x10f684: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x10f684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_10f688:
    // 0x10f688: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x10f688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_10f68c:
    // 0x10f68c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x10f68cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_10f690:
    // 0x10f690: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x10f690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_10f694:
    // 0x10f694: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x10f694u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_10f698:
    // 0x10f698: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10f698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_10f69c:
    // 0x10f69c: 0x90830220  lbu         $v1, 0x220($a0)
    ctx->pc = 0x10f69cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 544)));
label_10f6a0:
    // 0x10f6a0: 0x1060003b  beqz        $v1, . + 4 + (0x3B << 2)
label_10f6a4:
    if (ctx->pc == 0x10F6A4u) {
        ctx->pc = 0x10F6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F6A0u;
        // 0x10f6a4: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F6A8u;
        goto label_10f6a8;
    }
    ctx->pc = 0x10F6A0u;
    {
        const bool branch_taken_0x10f6a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F6A0u;
        // 0x10f6a4: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f6a0) {
            ctx->pc = 0x10F790u;
            goto label_10f790;
        }
    }
    ctx->pc = 0x10F6A8u;
label_10f6a8:
    // 0x10f6a8: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x10f6a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_10f6ac:
    // 0x10f6ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10f6acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10f6b0:
    // 0x10f6b0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x10f6b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_10f6b4:
    // 0x10f6b4: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x10f6b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_10f6b8:
    // 0x10f6b8: 0x320f809  jalr        $t9
label_10f6bc:
    if (ctx->pc == 0x10F6BCu) {
        ctx->pc = 0x10F6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F6B8u;
        // 0x10f6bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F6C0u;
        goto label_10f6c0;
    }
    ctx->pc = 0x10F6B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10F6C0u);
        ctx->pc = 0x10F6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F6B8u;
        // 0x10f6bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F6B8u, 0x10F6C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10F6C0u;
label_10f6c0:
    // 0x10f6c0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x10f6c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_10f6c4:
    // 0x10f6c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10f6c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10f6c8:
    // 0x10f6c8: 0x8f3900d8  lw          $t9, 0xD8($t9)
    ctx->pc = 0x10f6c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 216)));
label_10f6cc:
    // 0x10f6cc: 0x320f809  jalr        $t9
label_10f6d0:
    if (ctx->pc == 0x10F6D0u) {
        ctx->pc = 0x10F6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F6CCu;
        // 0x10f6d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F6D4u;
        goto label_10f6d4;
    }
    ctx->pc = 0x10F6CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10F6D4u);
        ctx->pc = 0x10F6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F6CCu;
        // 0x10f6d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F6CCu, 0x10F6D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10F6D4u;
label_10f6d4:
    // 0x10f6d4: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x10f6d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_10f6d8:
    // 0x10f6d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10f6d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10f6dc:
    // 0x10f6dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10f6dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10f6e0:
    // 0x10f6e0: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x10f6e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_10f6e4:
    // 0x10f6e4: 0x320f809  jalr        $t9
label_10f6e8:
    if (ctx->pc == 0x10F6E8u) {
        ctx->pc = 0x10F6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F6E4u;
        // 0x10f6e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F6ECu;
        goto label_10f6ec;
    }
    ctx->pc = 0x10F6E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10F6ECu);
        ctx->pc = 0x10F6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F6E4u;
        // 0x10f6e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F6E4u, 0x10F6ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10F6ECu;
label_10f6ec:
    // 0x10f6ec: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x10f6ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_10f6f0:
    // 0x10f6f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10f6f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10f6f4:
    // 0x10f6f4: 0x8f3900d8  lw          $t9, 0xD8($t9)
    ctx->pc = 0x10f6f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 216)));
label_10f6f8:
    // 0x10f6f8: 0x320f809  jalr        $t9
label_10f6fc:
    if (ctx->pc == 0x10F6FCu) {
        ctx->pc = 0x10F6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F6F8u;
        // 0x10f6fc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F700u;
        goto label_10f700;
    }
    ctx->pc = 0x10F6F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10F700u);
        ctx->pc = 0x10F6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F6F8u;
        // 0x10f6fc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F6F8u, 0x10F700u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10F700u;
label_10f700:
    // 0x10f700: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10f700u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10f704:
    // 0x10f704: 0x92440224  lbu         $a0, 0x224($s2)
    ctx->pc = 0x10f704u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 548)));
label_10f708:
    // 0x10f708: 0x92420225  lbu         $v0, 0x225($s2)
    ctx->pc = 0x10f708u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 549)));
label_10f70c:
    // 0x10f70c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x10f70cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_10f710:
    // 0x10f710: 0x30840007  andi        $a0, $a0, 0x7
    ctx->pc = 0x10f710u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
label_10f714:
    // 0x10f714: 0x217bc  dsll32      $v0, $v0, 30
    ctx->pc = 0x10f714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 30));
label_10f718:
    // 0x10f718: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x10f718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
label_10f71c:
    // 0x10f71c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_10f720:
    if (ctx->pc == 0x10F720u) {
        ctx->pc = 0x10F720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F71Cu;
        // 0x10f720: 0x649823  subu        $s3, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F724u;
        goto label_10f724;
    }
    ctx->pc = 0x10F71Cu;
    {
        const bool branch_taken_0x10f71c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F71Cu;
        // 0x10f720: 0x649823  subu        $s3, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f71c) {
            ctx->pc = 0x10F758u;
            goto label_10f758;
        }
    }
    ctx->pc = 0x10F724u;
label_10f724:
    // 0x10f724: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x10f724u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_10f728:
    // 0x10f728: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10f728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10f72c:
    // 0x10f72c: 0x8f39010c  lw          $t9, 0x10C($t9)
    ctx->pc = 0x10f72cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 268)));
label_10f730:
    // 0x10f730: 0x320f809  jalr        $t9
label_10f734:
    if (ctx->pc == 0x10F734u) {
        ctx->pc = 0x10F734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F730u;
        // 0x10f734: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F738u;
        goto label_10f738;
    }
    ctx->pc = 0x10F730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10F738u);
        ctx->pc = 0x10F734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F730u;
        // 0x10f734: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F730u, 0x10F738u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10F738u;
label_10f738:
    // 0x10f738: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x10f738u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_10f73c:
    // 0x10f73c: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x10f73cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
label_10f740:
    // 0x10f740: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10f740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10f744:
    // 0x10f744: 0x8f3900c8  lw          $t9, 0xC8($t9)
    ctx->pc = 0x10f744u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 200)));
label_10f748:
    // 0x10f748: 0x320f809  jalr        $t9
label_10f74c:
    if (ctx->pc == 0x10F74Cu) {
        ctx->pc = 0x10F74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F748u;
        // 0x10f74c: 0x24a502d0  addiu       $a1, $a1, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 720));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F750u;
        goto label_10f750;
    }
    ctx->pc = 0x10F748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10F750u);
        ctx->pc = 0x10F74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F748u;
        // 0x10f74c: 0x24a502d0  addiu       $a1, $a1, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 720));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F748u, 0x10F750u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10F750u;
label_10f750:
    // 0x10f750: 0x1000000f  b           . + 4 + (0xF << 2)
label_10f754:
    if (ctx->pc == 0x10F754u) {
        ctx->pc = 0x10F754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F750u;
        // 0x10f754: 0xae400228  sw          $zero, 0x228($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 552), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F758u;
        goto label_10f758;
    }
    ctx->pc = 0x10F750u;
    {
        const bool branch_taken_0x10f750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F750u;
        // 0x10f754: 0xae400228  sw          $zero, 0x228($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 552), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f750) {
            ctx->pc = 0x10F790u;
            goto label_10f790;
        }
    }
    ctx->pc = 0x10F758u;
label_10f758:
    // 0x10f758: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x10f758u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_10f75c:
    // 0x10f75c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10f75cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10f760:
    // 0x10f760: 0x8f39010c  lw          $t9, 0x10C($t9)
    ctx->pc = 0x10f760u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 268)));
label_10f764:
    // 0x10f764: 0x320f809  jalr        $t9
label_10f768:
    if (ctx->pc == 0x10F768u) {
        ctx->pc = 0x10F768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F764u;
        // 0x10f768: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F76Cu;
        goto label_10f76c;
    }
    ctx->pc = 0x10F764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10F76Cu);
        ctx->pc = 0x10F768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F764u;
        // 0x10f768: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F764u, 0x10F76Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10F76Cu;
label_10f76c:
    // 0x10f76c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x10f76cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_10f770:
    // 0x10f770: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x10f770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
label_10f774:
    // 0x10f774: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x10f774u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_10f778:
    // 0x10f778: 0x24420290  addiu       $v0, $v0, 0x290
    ctx->pc = 0x10f778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 656));
label_10f77c:
    // 0x10f77c: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x10f77cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_10f780:
    // 0x10f780: 0x8f3900c8  lw          $t9, 0xC8($t9)
    ctx->pc = 0x10f780u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 200)));
label_10f784:
    // 0x10f784: 0x320f809  jalr        $t9
label_10f788:
    if (ctx->pc == 0x10F788u) {
        ctx->pc = 0x10F788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F784u;
        // 0x10f788: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F78Cu;
        goto label_10f78c;
    }
    ctx->pc = 0x10F784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10F78Cu);
        ctx->pc = 0x10F788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F784u;
        // 0x10f788: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F784u, 0x10F78Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10F78Cu;
label_10f78c:
    // 0x10f78c: 0xae400228  sw          $zero, 0x228($s2)
    ctx->pc = 0x10f78cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 552), GPR_U32(ctx, 0));
label_10f790:
    // 0x10f790: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x10f790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_10f794:
    // 0x10f794: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x10f794u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_10f798:
    // 0x10f798: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x10f798u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_10f79c:
    // 0x10f79c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10f79cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_10f7a0:
    // 0x10f7a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10f7a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_10f7a4:
    // 0x10f7a4: 0x3e00008  jr          $ra
label_10f7a8:
    if (ctx->pc == 0x10F7A8u) {
        ctx->pc = 0x10F7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F7A4u;
        // 0x10f7a8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F7ACu;
        goto label_fallthrough_0x10f7a4;
    }
    ctx->pc = 0x10F7A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F7A4u;
        // 0x10f7a8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F7A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x10f7a4:
    ctx->pc = 0x10F7ACu;
}
