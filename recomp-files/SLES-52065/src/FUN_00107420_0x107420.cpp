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

// Function: FUN_00107420
// Address: 0x107420 - 0x1074e4
void FUN_00107420_0x107420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00107420_0x107420");
#endif

    switch (ctx->pc) {
        case 0x107420u: goto label_107420;
        case 0x107424u: goto label_107424;
        case 0x107428u: goto label_107428;
        case 0x10742cu: goto label_10742c;
        case 0x107430u: goto label_107430;
        case 0x107434u: goto label_107434;
        case 0x107438u: goto label_107438;
        case 0x10743cu: goto label_10743c;
        case 0x107440u: goto label_107440;
        case 0x107444u: goto label_107444;
        case 0x107448u: goto label_107448;
        case 0x10744cu: goto label_10744c;
        case 0x107450u: goto label_107450;
        case 0x107454u: goto label_107454;
        case 0x107458u: goto label_107458;
        case 0x10745cu: goto label_10745c;
        case 0x107460u: goto label_107460;
        case 0x107464u: goto label_107464;
        case 0x107468u: goto label_107468;
        case 0x10746cu: goto label_10746c;
        case 0x107470u: goto label_107470;
        case 0x107474u: goto label_107474;
        case 0x107478u: goto label_107478;
        case 0x10747cu: goto label_10747c;
        case 0x107480u: goto label_107480;
        case 0x107484u: goto label_107484;
        case 0x107488u: goto label_107488;
        case 0x10748cu: goto label_10748c;
        case 0x107490u: goto label_107490;
        case 0x107494u: goto label_107494;
        case 0x107498u: goto label_107498;
        case 0x10749cu: goto label_10749c;
        case 0x1074a0u: goto label_1074a0;
        case 0x1074a4u: goto label_1074a4;
        case 0x1074a8u: goto label_1074a8;
        case 0x1074acu: goto label_1074ac;
        case 0x1074b0u: goto label_1074b0;
        case 0x1074b4u: goto label_1074b4;
        case 0x1074b8u: goto label_1074b8;
        case 0x1074bcu: goto label_1074bc;
        case 0x1074c0u: goto label_1074c0;
        case 0x1074c4u: goto label_1074c4;
        case 0x1074c8u: goto label_1074c8;
        case 0x1074ccu: goto label_1074cc;
        case 0x1074d0u: goto label_1074d0;
        case 0x1074d4u: goto label_1074d4;
        case 0x1074d8u: goto label_1074d8;
        case 0x1074dcu: goto label_1074dc;
        case 0x1074e0u: goto label_1074e0;
        default: break;
    }

    ctx->pc = 0x107420u;

label_107420:
    // 0x107420: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x107420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_107424:
    // 0x107424: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x107424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_107428:
    // 0x107428: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x107428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_10742c:
    // 0x10742c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10742cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_107430:
    // 0x107430: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x107430u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_107434:
    // 0x107434: 0x12200025  beqz        $s1, . + 4 + (0x25 << 2)
label_107438:
    if (ctx->pc == 0x107438u) {
        ctx->pc = 0x107438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107434u;
        // 0x107438: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10743Cu;
        goto label_10743c;
    }
    ctx->pc = 0x107434u;
    {
        const bool branch_taken_0x107434 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x107438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107434u;
        // 0x107438: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107434) {
            ctx->pc = 0x1074CCu;
            goto label_1074cc;
        }
    }
    ctx->pc = 0x10743Cu;
label_10743c:
    // 0x10743c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x10743cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
label_107440:
    // 0x107440: 0x24428050  addiu       $v0, $v0, -0x7FB0
    ctx->pc = 0x107440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934608));
label_107444:
    // 0x107444: 0x1220001b  beqz        $s1, . + 4 + (0x1B << 2)
label_107448:
    if (ctx->pc == 0x107448u) {
        ctx->pc = 0x107448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107444u;
        // 0x107448: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10744Cu;
        goto label_10744c;
    }
    ctx->pc = 0x107444u;
    {
        const bool branch_taken_0x107444 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x107448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107444u;
        // 0x107448: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107444) {
            ctx->pc = 0x1074B4u;
            goto label_1074b4;
        }
    }
    ctx->pc = 0x10744Cu;
label_10744c:
    // 0x10744c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x10744cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
label_107450:
    // 0x107450: 0x244280b0  addiu       $v0, $v0, -0x7F50
    ctx->pc = 0x107450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934704));
label_107454:
    // 0x107454: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x107454u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_107458:
    // 0x107458: 0x8e240220  lw          $a0, 0x220($s1)
    ctx->pc = 0x107458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
label_10745c:
    // 0x10745c: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_107460:
    if (ctx->pc == 0x107460u) {
        ctx->pc = 0x107464u;
        goto label_107464;
    }
    ctx->pc = 0x10745Cu;
    {
        const bool branch_taken_0x10745c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x10745c) {
            ctx->pc = 0x10747Cu;
            goto label_10747c;
        }
    }
    ctx->pc = 0x107464u;
label_107464:
    // 0x107464: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_107468:
    if (ctx->pc == 0x107468u) {
        ctx->pc = 0x10746Cu;
        goto label_10746c;
    }
    ctx->pc = 0x107464u;
    {
        const bool branch_taken_0x107464 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x107464) {
            ctx->pc = 0x10747Cu;
            goto label_10747c;
        }
    }
    ctx->pc = 0x10746Cu;
label_10746c:
    // 0x10746c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x10746cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_107470:
    // 0x107470: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x107470u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_107474:
    // 0x107474: 0x320f809  jalr        $t9
label_107478:
    if (ctx->pc == 0x107478u) {
        ctx->pc = 0x107478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107474u;
        // 0x107478: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10747Cu;
        goto label_10747c;
    }
    ctx->pc = 0x107474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10747Cu);
        ctx->pc = 0x107478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107474u;
        // 0x107478: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107474u, 0x10747Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10747Cu;
label_10747c:
    // 0x10747c: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_107480:
    if (ctx->pc == 0x107480u) {
        ctx->pc = 0x107480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10747Cu;
        // 0x107480: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107484u;
        goto label_107484;
    }
    ctx->pc = 0x10747Cu;
    {
        const bool branch_taken_0x10747c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x107480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10747Cu;
        // 0x107480: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10747c) {
            ctx->pc = 0x1074B8u;
            goto label_1074b8;
        }
    }
    ctx->pc = 0x107484u;
label_107484:
    // 0x107484: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x107484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
label_107488:
    // 0x107488: 0x24427a50  addiu       $v0, $v0, 0x7A50
    ctx->pc = 0x107488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31312));
label_10748c:
    // 0x10748c: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x10748cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_107490:
    // 0x107490: 0x8e240210  lw          $a0, 0x210($s1)
    ctx->pc = 0x107490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
label_107494:
    // 0x107494: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_107498:
    if (ctx->pc == 0x107498u) {
        ctx->pc = 0x10749Cu;
        goto label_10749c;
    }
    ctx->pc = 0x107494u;
    {
        const bool branch_taken_0x107494 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x107494) {
            ctx->pc = 0x1074A4u;
            goto label_1074a4;
        }
    }
    ctx->pc = 0x10749Cu;
label_10749c:
    // 0x10749c: 0xc04018c  jal         func_100630
label_1074a0:
    if (ctx->pc == 0x1074A0u) {
        ctx->pc = 0x1074A4u;
        goto label_1074a4;
    }
    ctx->pc = 0x10749Cu;
    SET_GPR_U32(ctx, 31, 0x1074A4u);
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x10749Cu, 0x1074A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1074A4u;
label_1074a4:
    // 0x1074a4: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
label_1074a8:
    if (ctx->pc == 0x1074A8u) {
        ctx->pc = 0x1074A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1074A4u;
        // 0x1074a8: 0x3c020023  lui         $v0, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1074ACu;
        goto label_1074ac;
    }
    ctx->pc = 0x1074A4u;
    {
        const bool branch_taken_0x1074a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1074A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1074A4u;
        // 0x1074a8: 0x3c020023  lui         $v0, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1074a4) {
            ctx->pc = 0x1074B4u;
            goto label_1074b4;
        }
    }
    ctx->pc = 0x1074ACu;
label_1074ac:
    // 0x1074ac: 0x24429a10  addiu       $v0, $v0, -0x65F0
    ctx->pc = 0x1074acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941200));
label_1074b0:
    // 0x1074b0: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1074b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_1074b4:
    // 0x1074b4: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1074b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_1074b8:
    // 0x1074b8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1074b8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1074bc:
    // 0x1074bc: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_1074c0:
    if (ctx->pc == 0x1074C0u) {
        ctx->pc = 0x1074C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1074BCu;
        // 0x1074c0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1074C4u;
        goto label_1074c4;
    }
    ctx->pc = 0x1074BCu;
    {
        const bool branch_taken_0x1074bc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1074C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1074BCu;
        // 0x1074c0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1074bc) {
            ctx->pc = 0x1074D0u;
            goto label_1074d0;
        }
    }
    ctx->pc = 0x1074C4u;
label_1074c4:
    // 0x1074c4: 0xc0401a4  jal         func_100690
label_1074c8:
    if (ctx->pc == 0x1074C8u) {
        ctx->pc = 0x1074C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1074C4u;
        // 0x1074c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1074CCu;
        goto label_1074cc;
    }
    ctx->pc = 0x1074C4u;
    SET_GPR_U32(ctx, 31, 0x1074CCu);
    ctx->pc = 0x1074C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1074C4u;
    // 0x1074c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1074C4u, 0x1074CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1074CCu;
label_1074cc:
    // 0x1074cc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1074ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1074d0:
    // 0x1074d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1074d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1074d4:
    // 0x1074d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1074d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1074d8:
    // 0x1074d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1074d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1074dc:
    // 0x1074dc: 0x3e00008  jr          $ra
label_1074e0:
    if (ctx->pc == 0x1074E0u) {
        ctx->pc = 0x1074E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1074DCu;
        // 0x1074e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1074E4u;
        goto label_fallthrough_0x1074dc;
    }
    ctx->pc = 0x1074DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1074E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1074DCu;
        // 0x1074e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1074DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1074dc:
    ctx->pc = 0x1074E4u;
}
