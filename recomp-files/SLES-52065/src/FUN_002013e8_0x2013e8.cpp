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

// Function: FUN_002013e8
// Address: 0x2013e8 - 0x2014d8
void FUN_002013e8_0x2013e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002013e8_0x2013e8");
#endif

    switch (ctx->pc) {
        case 0x2013e8u: goto label_2013e8;
        case 0x2013ecu: goto label_2013ec;
        case 0x2013f0u: goto label_2013f0;
        case 0x2013f4u: goto label_2013f4;
        case 0x2013f8u: goto label_2013f8;
        case 0x2013fcu: goto label_2013fc;
        case 0x201400u: goto label_201400;
        case 0x201404u: goto label_201404;
        case 0x201408u: goto label_201408;
        case 0x20140cu: goto label_20140c;
        case 0x201410u: goto label_201410;
        case 0x201414u: goto label_201414;
        case 0x201418u: goto label_201418;
        case 0x20141cu: goto label_20141c;
        case 0x201420u: goto label_201420;
        case 0x201424u: goto label_201424;
        case 0x201428u: goto label_201428;
        case 0x20142cu: goto label_20142c;
        case 0x201430u: goto label_201430;
        case 0x201434u: goto label_201434;
        case 0x201438u: goto label_201438;
        case 0x20143cu: goto label_20143c;
        case 0x201440u: goto label_201440;
        case 0x201444u: goto label_201444;
        case 0x201448u: goto label_201448;
        case 0x20144cu: goto label_20144c;
        case 0x201450u: goto label_201450;
        case 0x201454u: goto label_201454;
        case 0x201458u: goto label_201458;
        case 0x20145cu: goto label_20145c;
        case 0x201460u: goto label_201460;
        case 0x201464u: goto label_201464;
        case 0x201468u: goto label_201468;
        case 0x20146cu: goto label_20146c;
        case 0x201470u: goto label_201470;
        case 0x201474u: goto label_201474;
        case 0x201478u: goto label_201478;
        case 0x20147cu: goto label_20147c;
        case 0x201480u: goto label_201480;
        case 0x201484u: goto label_201484;
        case 0x201488u: goto label_201488;
        case 0x20148cu: goto label_20148c;
        case 0x201490u: goto label_201490;
        case 0x201494u: goto label_201494;
        case 0x201498u: goto label_201498;
        case 0x20149cu: goto label_20149c;
        case 0x2014a0u: goto label_2014a0;
        case 0x2014a4u: goto label_2014a4;
        case 0x2014a8u: goto label_2014a8;
        case 0x2014acu: goto label_2014ac;
        case 0x2014b0u: goto label_2014b0;
        case 0x2014b4u: goto label_2014b4;
        case 0x2014b8u: goto label_2014b8;
        case 0x2014bcu: goto label_2014bc;
        case 0x2014c0u: goto label_2014c0;
        case 0x2014c4u: goto label_2014c4;
        case 0x2014c8u: goto label_2014c8;
        case 0x2014ccu: goto label_2014cc;
        case 0x2014d0u: goto label_2014d0;
        case 0x2014d4u: goto label_2014d4;
        default: break;
    }

    ctx->pc = 0x2013e8u;

label_2013e8:
    // 0x2013e8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2013e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2013ec:
    // 0x2013ec: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2013ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2013f0:
    // 0x2013f0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2013f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2013f4:
    // 0x2013f4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2013f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2013f8:
    // 0x2013f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2013f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2013fc:
    // 0x2013fc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2013fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_201400:
    // 0x201400: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x201400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_201404:
    // 0x201404: 0x2e220020  sltiu       $v0, $s1, 0x20
    ctx->pc = 0x201404u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_201408:
    // 0x201408: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_20140c:
    if (ctx->pc == 0x20140Cu) {
        ctx->pc = 0x20140Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201408u;
        // 0x20140c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201410u;
        goto label_201410;
    }
    ctx->pc = 0x201408u;
    {
        const bool branch_taken_0x201408 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20140Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201408u;
        // 0x20140c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201408) {
            ctx->pc = 0x201420u;
            goto label_201420;
        }
    }
    ctx->pc = 0x201410u;
label_201410:
    // 0x201410: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x201410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_201414:
    // 0x201414: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x201414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_201418:
    // 0x201418: 0x10000029  b           . + 4 + (0x29 << 2)
label_20141c:
    if (ctx->pc == 0x20141Cu) {
        ctx->pc = 0x20141Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201418u;
        // 0x20141c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201420u;
        goto label_201420;
    }
    ctx->pc = 0x201418u;
    {
        const bool branch_taken_0x201418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20141Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201418u;
        // 0x20141c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201418) {
            ctx->pc = 0x2014C0u;
            goto label_2014c0;
        }
    }
    ctx->pc = 0x201420u;
label_201420:
    // 0x201420: 0x8e0401d4  lw          $a0, 0x1D4($s0)
    ctx->pc = 0x201420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
label_201424:
    // 0x201424: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
label_201428:
    if (ctx->pc == 0x201428u) {
        ctx->pc = 0x201428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201424u;
        // 0x201428: 0x112880  sll         $a1, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20142Cu;
        goto label_20142c;
    }
    ctx->pc = 0x201424u;
    {
        const bool branch_taken_0x201424 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x201428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201424u;
        // 0x201428: 0x112880  sll         $a1, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201424) {
            ctx->pc = 0x201444u;
            goto label_201444;
        }
    }
    ctx->pc = 0x20142Cu;
label_20142c:
    // 0x20142c: 0xc0804ba  jal         func_2012E8
label_201430:
    if (ctx->pc == 0x201430u) {
        ctx->pc = 0x201430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20142Cu;
        // 0x201430: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201434u;
        goto label_201434;
    }
    ctx->pc = 0x20142Cu;
    SET_GPR_U32(ctx, 31, 0x201434u);
    ctx->pc = 0x201430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20142Cu;
    // 0x201430: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2012E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2012E8u, 0x20142Cu, 0x201434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201434u;
label_201434:
    // 0x201434: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
label_201438:
    if (ctx->pc == 0x201438u) {
        ctx->pc = 0x201438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201434u;
        // 0x201438: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20143Cu;
        goto label_20143c;
    }
    ctx->pc = 0x201434u;
    {
        const bool branch_taken_0x201434 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x201438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201434u;
        // 0x201438: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201434) {
            ctx->pc = 0x2014C0u;
            goto label_2014c0;
        }
    }
    ctx->pc = 0x20143Cu;
label_20143c:
    // 0x20143c: 0x8e0401d4  lw          $a0, 0x1D4($s0)
    ctx->pc = 0x20143cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
label_201440:
    // 0x201440: 0x112880  sll         $a1, $s1, 2
    ctx->pc = 0x201440u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_201444:
    // 0x201444: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x201444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_201448:
    // 0x201448: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x201448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20144c:
    // 0x20144c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_201450:
    if (ctx->pc == 0x201450u) {
        ctx->pc = 0x201454u;
        goto label_201454;
    }
    ctx->pc = 0x20144Cu;
    {
        const bool branch_taken_0x20144c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20144c) {
            ctx->pc = 0x201480u;
            goto label_201480;
        }
    }
    ctx->pc = 0x201454u;
label_201454:
    // 0x201454: 0x1c600006  bgtz        $v1, . + 4 + (0x6 << 2)
label_201458:
    if (ctx->pc == 0x201458u) {
        ctx->pc = 0x201458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201454u;
        // 0x201458: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20145Cu;
        goto label_20145c;
    }
    ctx->pc = 0x201454u;
    {
        const bool branch_taken_0x201454 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x201458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201454u;
        // 0x201458: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201454) {
            ctx->pc = 0x201470u;
            goto label_201470;
        }
    }
    ctx->pc = 0x20145Cu;
label_20145c:
    // 0x20145c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x20145cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_201460:
    // 0x201460: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
label_201464:
    if (ctx->pc == 0x201464u) {
        ctx->pc = 0x201464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201460u;
        // 0x201464: 0xa41021  addu        $v0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201468u;
        goto label_201468;
    }
    ctx->pc = 0x201460u;
    {
        const bool branch_taken_0x201460 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x201464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201460u;
        // 0x201464: 0xa41021  addu        $v0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201460) {
            ctx->pc = 0x2014A0u;
            goto label_2014a0;
        }
    }
    ctx->pc = 0x201468u;
label_201468:
    // 0x201468: 0x10000011  b           . + 4 + (0x11 << 2)
label_20146c:
    if (ctx->pc == 0x20146Cu) {
        ctx->pc = 0x20146Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201468u;
        // 0x20146c: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201470u;
        goto label_201470;
    }
    ctx->pc = 0x201468u;
    {
        const bool branch_taken_0x201468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20146Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201468u;
        // 0x20146c: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201468) {
            ctx->pc = 0x2014B0u;
            goto label_2014b0;
        }
    }
    ctx->pc = 0x201470u;
label_201470:
    // 0x201470: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
label_201474:
    if (ctx->pc == 0x201474u) {
        ctx->pc = 0x201474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201470u;
        // 0x201474: 0xa41021  addu        $v0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201478u;
        goto label_201478;
    }
    ctx->pc = 0x201470u;
    {
        const bool branch_taken_0x201470 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x201474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201470u;
        // 0x201474: 0xa41021  addu        $v0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201470) {
            ctx->pc = 0x2014BCu;
            goto label_2014bc;
        }
    }
    ctx->pc = 0x201478u;
label_201478:
    // 0x201478: 0x1000000d  b           . + 4 + (0xD << 2)
label_20147c:
    if (ctx->pc == 0x20147Cu) {
        ctx->pc = 0x20147Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201478u;
        // 0x20147c: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201480u;
        goto label_201480;
    }
    ctx->pc = 0x201478u;
    {
        const bool branch_taken_0x201478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20147Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201478u;
        // 0x20147c: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201478) {
            ctx->pc = 0x2014B0u;
            goto label_2014b0;
        }
    }
    ctx->pc = 0x201480u;
label_201480:
    // 0x201480: 0xc0805a6  jal         func_201698
label_201484:
    if (ctx->pc == 0x201484u) {
        ctx->pc = 0x201484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201480u;
        // 0x201484: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201488u;
        goto label_201488;
    }
    ctx->pc = 0x201480u;
    SET_GPR_U32(ctx, 31, 0x201488u);
    ctx->pc = 0x201484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201480u;
    // 0x201484: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201698u, 0x201480u, 0x201488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201488u;
label_201488:
    // 0x201488: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x201488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20148c:
    // 0x20148c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20148cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_201490:
    // 0x201490: 0xc08058e  jal         func_201638
label_201494:
    if (ctx->pc == 0x201494u) {
        ctx->pc = 0x201494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201490u;
        // 0x201494: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201498u;
        goto label_201498;
    }
    ctx->pc = 0x201490u;
    SET_GPR_U32(ctx, 31, 0x201498u);
    ctx->pc = 0x201494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201490u;
    // 0x201494: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201638u, 0x201490u, 0x201498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201498u;
label_201498:
    // 0x201498: 0x1000000a  b           . + 4 + (0xA << 2)
label_20149c:
    if (ctx->pc == 0x20149Cu) {
        ctx->pc = 0x20149Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201498u;
        // 0x20149c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2014A0u;
        goto label_2014a0;
    }
    ctx->pc = 0x201498u;
    {
        const bool branch_taken_0x201498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20149Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201498u;
        // 0x20149c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201498) {
            ctx->pc = 0x2014C4u;
            goto label_2014c4;
        }
    }
    ctx->pc = 0x2014A0u;
label_2014a0:
    // 0x2014a0: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x2014a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_2014a4:
    // 0x2014a4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2014a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2014a8:
    // 0x2014a8: 0x10000004  b           . + 4 + (0x4 << 2)
label_2014ac:
    if (ctx->pc == 0x2014ACu) {
        ctx->pc = 0x2014ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2014A8u;
        // 0x2014ac: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2014B0u;
        goto label_2014b0;
    }
    ctx->pc = 0x2014A8u;
    {
        const bool branch_taken_0x2014a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2014ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2014A8u;
        // 0x2014ac: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2014a8) {
            ctx->pc = 0x2014BCu;
            goto label_2014bc;
        }
    }
    ctx->pc = 0x2014B0u;
label_2014b0:
    // 0x2014b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2014b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2014b4:
    // 0x2014b4: 0x60f809  jalr        $v1
label_2014b8:
    if (ctx->pc == 0x2014B8u) {
        ctx->pc = 0x2014B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2014B4u;
        // 0x2014b8: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2014BCu;
        goto label_2014bc;
    }
    ctx->pc = 0x2014B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2014BCu);
        ctx->pc = 0x2014B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2014B4u;
        // 0x2014b8: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2014B4u, 0x2014BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2014BCu;
label_2014bc:
    // 0x2014bc: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2014bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2014c0:
    // 0x2014c0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2014c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2014c4:
    // 0x2014c4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2014c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2014c8:
    // 0x2014c8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2014c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2014cc:
    // 0x2014cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2014ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2014d0:
    // 0x2014d0: 0x3e00008  jr          $ra
label_2014d4:
    if (ctx->pc == 0x2014D4u) {
        ctx->pc = 0x2014D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2014D0u;
        // 0x2014d4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2014D8u;
        goto label_fallthrough_0x2014d0;
    }
    ctx->pc = 0x2014D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2014D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2014D0u;
        // 0x2014d4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2014D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2014d0:
    ctx->pc = 0x2014D8u;
}
