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

// Function: FUN_00107350
// Address: 0x107350 - 0x107414
void FUN_00107350_0x107350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00107350_0x107350");
#endif

    switch (ctx->pc) {
        case 0x107350u: goto label_107350;
        case 0x107354u: goto label_107354;
        case 0x107358u: goto label_107358;
        case 0x10735cu: goto label_10735c;
        case 0x107360u: goto label_107360;
        case 0x107364u: goto label_107364;
        case 0x107368u: goto label_107368;
        case 0x10736cu: goto label_10736c;
        case 0x107370u: goto label_107370;
        case 0x107374u: goto label_107374;
        case 0x107378u: goto label_107378;
        case 0x10737cu: goto label_10737c;
        case 0x107380u: goto label_107380;
        case 0x107384u: goto label_107384;
        case 0x107388u: goto label_107388;
        case 0x10738cu: goto label_10738c;
        case 0x107390u: goto label_107390;
        case 0x107394u: goto label_107394;
        case 0x107398u: goto label_107398;
        case 0x10739cu: goto label_10739c;
        case 0x1073a0u: goto label_1073a0;
        case 0x1073a4u: goto label_1073a4;
        case 0x1073a8u: goto label_1073a8;
        case 0x1073acu: goto label_1073ac;
        case 0x1073b0u: goto label_1073b0;
        case 0x1073b4u: goto label_1073b4;
        case 0x1073b8u: goto label_1073b8;
        case 0x1073bcu: goto label_1073bc;
        case 0x1073c0u: goto label_1073c0;
        case 0x1073c4u: goto label_1073c4;
        case 0x1073c8u: goto label_1073c8;
        case 0x1073ccu: goto label_1073cc;
        case 0x1073d0u: goto label_1073d0;
        case 0x1073d4u: goto label_1073d4;
        case 0x1073d8u: goto label_1073d8;
        case 0x1073dcu: goto label_1073dc;
        case 0x1073e0u: goto label_1073e0;
        case 0x1073e4u: goto label_1073e4;
        case 0x1073e8u: goto label_1073e8;
        case 0x1073ecu: goto label_1073ec;
        case 0x1073f0u: goto label_1073f0;
        case 0x1073f4u: goto label_1073f4;
        case 0x1073f8u: goto label_1073f8;
        case 0x1073fcu: goto label_1073fc;
        case 0x107400u: goto label_107400;
        case 0x107404u: goto label_107404;
        case 0x107408u: goto label_107408;
        case 0x10740cu: goto label_10740c;
        case 0x107410u: goto label_107410;
        default: break;
    }

    ctx->pc = 0x107350u;

label_107350:
    // 0x107350: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x107350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_107354:
    // 0x107354: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x107354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_107358:
    // 0x107358: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x107358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_10735c:
    // 0x10735c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10735cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_107360:
    // 0x107360: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x107360u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_107364:
    // 0x107364: 0x12200025  beqz        $s1, . + 4 + (0x25 << 2)
label_107368:
    if (ctx->pc == 0x107368u) {
        ctx->pc = 0x107368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107364u;
        // 0x107368: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10736Cu;
        goto label_10736c;
    }
    ctx->pc = 0x107364u;
    {
        const bool branch_taken_0x107364 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x107368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107364u;
        // 0x107368: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107364) {
            ctx->pc = 0x1073FCu;
            goto label_1073fc;
        }
    }
    ctx->pc = 0x10736Cu;
label_10736c:
    // 0x10736c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x10736cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
label_107370:
    // 0x107370: 0x24427ff0  addiu       $v0, $v0, 0x7FF0
    ctx->pc = 0x107370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32752));
label_107374:
    // 0x107374: 0x1220001b  beqz        $s1, . + 4 + (0x1B << 2)
label_107378:
    if (ctx->pc == 0x107378u) {
        ctx->pc = 0x107378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107374u;
        // 0x107378: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10737Cu;
        goto label_10737c;
    }
    ctx->pc = 0x107374u;
    {
        const bool branch_taken_0x107374 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x107378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107374u;
        // 0x107378: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107374) {
            ctx->pc = 0x1073E4u;
            goto label_1073e4;
        }
    }
    ctx->pc = 0x10737Cu;
label_10737c:
    // 0x10737c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x10737cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
label_107380:
    // 0x107380: 0x244280b0  addiu       $v0, $v0, -0x7F50
    ctx->pc = 0x107380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934704));
label_107384:
    // 0x107384: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x107384u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_107388:
    // 0x107388: 0x8e240220  lw          $a0, 0x220($s1)
    ctx->pc = 0x107388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
label_10738c:
    // 0x10738c: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_107390:
    if (ctx->pc == 0x107390u) {
        ctx->pc = 0x107394u;
        goto label_107394;
    }
    ctx->pc = 0x10738Cu;
    {
        const bool branch_taken_0x10738c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x10738c) {
            ctx->pc = 0x1073ACu;
            goto label_1073ac;
        }
    }
    ctx->pc = 0x107394u;
label_107394:
    // 0x107394: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_107398:
    if (ctx->pc == 0x107398u) {
        ctx->pc = 0x10739Cu;
        goto label_10739c;
    }
    ctx->pc = 0x107394u;
    {
        const bool branch_taken_0x107394 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x107394) {
            ctx->pc = 0x1073ACu;
            goto label_1073ac;
        }
    }
    ctx->pc = 0x10739Cu;
label_10739c:
    // 0x10739c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x10739cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1073a0:
    // 0x1073a0: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1073a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1073a4:
    // 0x1073a4: 0x320f809  jalr        $t9
label_1073a8:
    if (ctx->pc == 0x1073A8u) {
        ctx->pc = 0x1073A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1073A4u;
        // 0x1073a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1073ACu;
        goto label_1073ac;
    }
    ctx->pc = 0x1073A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1073ACu);
        ctx->pc = 0x1073A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1073A4u;
        // 0x1073a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1073A4u, 0x1073ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1073ACu;
label_1073ac:
    // 0x1073ac: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_1073b0:
    if (ctx->pc == 0x1073B0u) {
        ctx->pc = 0x1073B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1073ACu;
        // 0x1073b0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1073B4u;
        goto label_1073b4;
    }
    ctx->pc = 0x1073ACu;
    {
        const bool branch_taken_0x1073ac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1073B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1073ACu;
        // 0x1073b0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1073ac) {
            ctx->pc = 0x1073E8u;
            goto label_1073e8;
        }
    }
    ctx->pc = 0x1073B4u;
label_1073b4:
    // 0x1073b4: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1073b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
label_1073b8:
    // 0x1073b8: 0x24427a50  addiu       $v0, $v0, 0x7A50
    ctx->pc = 0x1073b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31312));
label_1073bc:
    // 0x1073bc: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1073bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_1073c0:
    // 0x1073c0: 0x8e240210  lw          $a0, 0x210($s1)
    ctx->pc = 0x1073c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
label_1073c4:
    // 0x1073c4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_1073c8:
    if (ctx->pc == 0x1073C8u) {
        ctx->pc = 0x1073CCu;
        goto label_1073cc;
    }
    ctx->pc = 0x1073C4u;
    {
        const bool branch_taken_0x1073c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1073c4) {
            ctx->pc = 0x1073D4u;
            goto label_1073d4;
        }
    }
    ctx->pc = 0x1073CCu;
label_1073cc:
    // 0x1073cc: 0xc04018c  jal         func_100630
label_1073d0:
    if (ctx->pc == 0x1073D0u) {
        ctx->pc = 0x1073D4u;
        goto label_1073d4;
    }
    ctx->pc = 0x1073CCu;
    SET_GPR_U32(ctx, 31, 0x1073D4u);
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x1073CCu, 0x1073D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1073D4u;
label_1073d4:
    // 0x1073d4: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
label_1073d8:
    if (ctx->pc == 0x1073D8u) {
        ctx->pc = 0x1073D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1073D4u;
        // 0x1073d8: 0x3c020023  lui         $v0, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1073DCu;
        goto label_1073dc;
    }
    ctx->pc = 0x1073D4u;
    {
        const bool branch_taken_0x1073d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1073D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1073D4u;
        // 0x1073d8: 0x3c020023  lui         $v0, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1073d4) {
            ctx->pc = 0x1073E4u;
            goto label_1073e4;
        }
    }
    ctx->pc = 0x1073DCu;
label_1073dc:
    // 0x1073dc: 0x24429a10  addiu       $v0, $v0, -0x65F0
    ctx->pc = 0x1073dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941200));
label_1073e0:
    // 0x1073e0: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1073e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_1073e4:
    // 0x1073e4: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1073e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_1073e8:
    // 0x1073e8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1073e8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1073ec:
    // 0x1073ec: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_1073f0:
    if (ctx->pc == 0x1073F0u) {
        ctx->pc = 0x1073F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1073ECu;
        // 0x1073f0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1073F4u;
        goto label_1073f4;
    }
    ctx->pc = 0x1073ECu;
    {
        const bool branch_taken_0x1073ec = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1073F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1073ECu;
        // 0x1073f0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1073ec) {
            ctx->pc = 0x107400u;
            goto label_107400;
        }
    }
    ctx->pc = 0x1073F4u;
label_1073f4:
    // 0x1073f4: 0xc0401a4  jal         func_100690
label_1073f8:
    if (ctx->pc == 0x1073F8u) {
        ctx->pc = 0x1073F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1073F4u;
        // 0x1073f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1073FCu;
        goto label_1073fc;
    }
    ctx->pc = 0x1073F4u;
    SET_GPR_U32(ctx, 31, 0x1073FCu);
    ctx->pc = 0x1073F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1073F4u;
    // 0x1073f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1073F4u, 0x1073FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1073FCu;
label_1073fc:
    // 0x1073fc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1073fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_107400:
    // 0x107400: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x107400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_107404:
    // 0x107404: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x107404u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_107408:
    // 0x107408: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x107408u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_10740c:
    // 0x10740c: 0x3e00008  jr          $ra
label_107410:
    if (ctx->pc == 0x107410u) {
        ctx->pc = 0x107410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10740Cu;
        // 0x107410: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107414u;
        goto label_fallthrough_0x10740c;
    }
    ctx->pc = 0x10740Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10740Cu;
        // 0x107410: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10740Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x10740c:
    ctx->pc = 0x107414u;
}
