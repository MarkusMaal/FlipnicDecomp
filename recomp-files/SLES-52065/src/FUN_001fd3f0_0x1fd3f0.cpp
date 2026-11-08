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

// Function: FUN_001fd3f0
// Address: 0x1fd3f0 - 0x1fd4f4
void FUN_001fd3f0_0x1fd3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001fd3f0_0x1fd3f0");
#endif

    switch (ctx->pc) {
        case 0x1fd3f0u: goto label_1fd3f0;
        case 0x1fd3f4u: goto label_1fd3f4;
        case 0x1fd3f8u: goto label_1fd3f8;
        case 0x1fd3fcu: goto label_1fd3fc;
        case 0x1fd400u: goto label_1fd400;
        case 0x1fd404u: goto label_1fd404;
        case 0x1fd408u: goto label_1fd408;
        case 0x1fd40cu: goto label_1fd40c;
        case 0x1fd410u: goto label_1fd410;
        case 0x1fd414u: goto label_1fd414;
        case 0x1fd418u: goto label_1fd418;
        case 0x1fd41cu: goto label_1fd41c;
        case 0x1fd420u: goto label_1fd420;
        case 0x1fd424u: goto label_1fd424;
        case 0x1fd428u: goto label_1fd428;
        case 0x1fd42cu: goto label_1fd42c;
        case 0x1fd430u: goto label_1fd430;
        case 0x1fd434u: goto label_1fd434;
        case 0x1fd438u: goto label_1fd438;
        case 0x1fd43cu: goto label_1fd43c;
        case 0x1fd440u: goto label_1fd440;
        case 0x1fd444u: goto label_1fd444;
        case 0x1fd448u: goto label_1fd448;
        case 0x1fd44cu: goto label_1fd44c;
        case 0x1fd450u: goto label_1fd450;
        case 0x1fd454u: goto label_1fd454;
        case 0x1fd458u: goto label_1fd458;
        case 0x1fd45cu: goto label_1fd45c;
        case 0x1fd460u: goto label_1fd460;
        case 0x1fd464u: goto label_1fd464;
        case 0x1fd468u: goto label_1fd468;
        case 0x1fd46cu: goto label_1fd46c;
        case 0x1fd470u: goto label_1fd470;
        case 0x1fd474u: goto label_1fd474;
        case 0x1fd478u: goto label_1fd478;
        case 0x1fd47cu: goto label_1fd47c;
        case 0x1fd480u: goto label_1fd480;
        case 0x1fd484u: goto label_1fd484;
        case 0x1fd488u: goto label_1fd488;
        case 0x1fd48cu: goto label_1fd48c;
        case 0x1fd490u: goto label_1fd490;
        case 0x1fd494u: goto label_1fd494;
        case 0x1fd498u: goto label_1fd498;
        case 0x1fd49cu: goto label_1fd49c;
        case 0x1fd4a0u: goto label_1fd4a0;
        case 0x1fd4a4u: goto label_1fd4a4;
        case 0x1fd4a8u: goto label_1fd4a8;
        case 0x1fd4acu: goto label_1fd4ac;
        case 0x1fd4b0u: goto label_1fd4b0;
        case 0x1fd4b4u: goto label_1fd4b4;
        case 0x1fd4b8u: goto label_1fd4b8;
        case 0x1fd4bcu: goto label_1fd4bc;
        case 0x1fd4c0u: goto label_1fd4c0;
        case 0x1fd4c4u: goto label_1fd4c4;
        case 0x1fd4c8u: goto label_1fd4c8;
        case 0x1fd4ccu: goto label_1fd4cc;
        case 0x1fd4d0u: goto label_1fd4d0;
        case 0x1fd4d4u: goto label_1fd4d4;
        case 0x1fd4d8u: goto label_1fd4d8;
        case 0x1fd4dcu: goto label_1fd4dc;
        case 0x1fd4e0u: goto label_1fd4e0;
        case 0x1fd4e4u: goto label_1fd4e4;
        case 0x1fd4e8u: goto label_1fd4e8;
        case 0x1fd4ecu: goto label_1fd4ec;
        case 0x1fd4f0u: goto label_1fd4f0;
        default: break;
    }

    ctx->pc = 0x1fd3f0u;

label_1fd3f0:
    // 0x1fd3f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1fd3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1fd3f4:
    // 0x1fd3f4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1fd3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1fd3f8:
    // 0x1fd3f8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1fd3f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1fd3fc:
    // 0x1fd3fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1fd3fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fd400:
    // 0x1fd400: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1fd400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1fd404:
    // 0x1fd404: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
label_1fd408:
    if (ctx->pc == 0x1FD408u) {
        ctx->pc = 0x1FD408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD404u;
        // 0x1fd408: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD40Cu;
        goto label_1fd40c;
    }
    ctx->pc = 0x1FD404u;
    {
        const bool branch_taken_0x1fd404 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FD408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD404u;
        // 0x1fd408: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd404) {
            ctx->pc = 0x1FD428u;
            goto label_1fd428;
        }
    }
    ctx->pc = 0x1FD40Cu;
label_1fd40c:
    // 0x1fd40c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1fd40cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
label_1fd410:
    // 0x1fd410: 0x3c050020  lui         $a1, 0x20
    ctx->pc = 0x1fd410u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
label_1fd414:
    // 0x1fd414: 0x8c44d9ac  lw          $a0, -0x2654($v0)
    ctx->pc = 0x1fd414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957484)));
label_1fd418:
    // 0x1fd418: 0xc07f9c0  jal         func_1FE700
label_1fd41c:
    if (ctx->pc == 0x1FD41Cu) {
        ctx->pc = 0x1FD41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD418u;
        // 0x1fd41c: 0x24a5d3f0  addiu       $a1, $a1, -0x2C10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956016));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD420u;
        goto label_1fd420;
    }
    ctx->pc = 0x1FD418u;
    SET_GPR_U32(ctx, 31, 0x1FD420u);
    ctx->pc = 0x1FD41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD418u;
    // 0x1fd41c: 0x24a5d3f0  addiu       $a1, $a1, -0x2C10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE700u, 0x1FD418u, 0x1FD420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD420u;
label_1fd420:
    // 0x1fd420: 0x1000002f  b           . + 4 + (0x2F << 2)
label_1fd424:
    if (ctx->pc == 0x1FD424u) {
        ctx->pc = 0x1FD424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD420u;
        // 0x1fd424: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD428u;
        goto label_1fd428;
    }
    ctx->pc = 0x1FD420u;
    {
        const bool branch_taken_0x1fd420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD420u;
        // 0x1fd424: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd420) {
            ctx->pc = 0x1FD4E0u;
            goto label_1fd4e0;
        }
    }
    ctx->pc = 0x1FD428u;
label_1fd428:
    // 0x1fd428: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x1fd428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_1fd42c:
    // 0x1fd42c: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
label_1fd430:
    if (ctx->pc == 0x1FD430u) {
        ctx->pc = 0x1FD430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD42Cu;
        // 0x1fd430: 0x8c620038  lw          $v0, 0x38($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD434u;
        goto label_1fd434;
    }
    ctx->pc = 0x1FD42Cu;
    {
        const bool branch_taken_0x1fd42c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fd42c) {
            ctx->pc = 0x1FD430u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD42Cu;
            // 0x1fd430: 0x8c620038  lw          $v0, 0x38($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD448u;
            goto label_1fd448;
        }
    }
    ctx->pc = 0x1FD434u;
label_1fd434:
    // 0x1fd434: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1fd434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
label_1fd438:
    // 0x1fd438: 0x8c43d9ac  lw          $v1, -0x2654($v0)
    ctx->pc = 0x1fd438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957484)));
label_1fd43c:
    // 0x1fd43c: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x1fd43cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
label_1fd440:
    // 0x1fd440: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x1fd440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_1fd444:
    // 0x1fd444: 0x0  nop
    ctx->pc = 0x1fd444u;
    // NOP
label_1fd448:
    // 0x1fd448: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_1fd44c:
    if (ctx->pc == 0x1FD44Cu) {
        ctx->pc = 0x1FD44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD448u;
        // 0x1fd44c: 0x8623000c  lh          $v1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD450u;
        goto label_1fd450;
    }
    ctx->pc = 0x1FD448u;
    {
        const bool branch_taken_0x1fd448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fd448) {
            ctx->pc = 0x1FD44Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD448u;
            // 0x1fd44c: 0x8623000c  lh          $v1, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD45Cu;
            goto label_1fd45c;
        }
    }
    ctx->pc = 0x1FD450u;
label_1fd450:
    // 0x1fd450: 0xc07f5b0  jal         func_1FD6C0
label_1fd454:
    if (ctx->pc == 0x1FD454u) {
        ctx->pc = 0x1FD454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD450u;
        // 0x1fd454: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD458u;
        goto label_1fd458;
    }
    ctx->pc = 0x1FD450u;
    SET_GPR_U32(ctx, 31, 0x1FD458u);
    ctx->pc = 0x1FD454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD450u;
    // 0x1fd454: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD6C0u, 0x1FD450u, 0x1FD458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD458u;
label_1fd458:
    // 0x1fd458: 0x8623000c  lh          $v1, 0xC($s1)
    ctx->pc = 0x1fd458u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_1fd45c:
    // 0x1fd45c: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x1fd45cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_1fd460:
    // 0x1fd460: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_1fd464:
    if (ctx->pc == 0x1FD464u) {
        ctx->pc = 0x1FD464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD460u;
        // 0x1fd464: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD468u;
        goto label_1fd468;
    }
    ctx->pc = 0x1FD460u;
    {
        const bool branch_taken_0x1fd460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD460u;
        // 0x1fd464: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd460) {
            ctx->pc = 0x1FD4DCu;
            goto label_1fd4dc;
        }
    }
    ctx->pc = 0x1FD468u;
label_1fd468:
    // 0x1fd468: 0x8e320010  lw          $s2, 0x10($s1)
    ctx->pc = 0x1fd468u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1fd46c:
    // 0x1fd46c: 0x56400008  bnel        $s2, $zero, . + 4 + (0x8 << 2)
label_1fd470:
    if (ctx->pc == 0x1FD470u) {
        ctx->pc = 0x1FD470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD46Cu;
        // 0x1fd470: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD474u;
        goto label_1fd474;
    }
    ctx->pc = 0x1FD46Cu;
    {
        const bool branch_taken_0x1fd46c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fd46c) {
            ctx->pc = 0x1FD470u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD46Cu;
            // 0x1fd470: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD490u;
            goto label_1fd490;
        }
    }
    ctx->pc = 0x1FD474u;
label_1fd474:
    // 0x1fd474: 0x1000001a  b           . + 4 + (0x1A << 2)
label_1fd478:
    if (ctx->pc == 0x1FD478u) {
        ctx->pc = 0x1FD478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD474u;
        // 0x1fd478: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD47Cu;
        goto label_1fd47c;
    }
    ctx->pc = 0x1FD474u;
    {
        const bool branch_taken_0x1fd474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD474u;
        // 0x1fd478: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd474) {
            ctx->pc = 0x1FD4E0u;
            goto label_1fd4e0;
        }
    }
    ctx->pc = 0x1FD47Cu;
label_1fd47c:
    // 0x1fd47c: 0x9623000c  lhu         $v1, 0xC($s1)
    ctx->pc = 0x1fd47cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_1fd480:
    // 0x1fd480: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1fd480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1fd484:
    // 0x1fd484: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x1fd484u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_1fd488:
    // 0x1fd488: 0x10000014  b           . + 4 + (0x14 << 2)
label_1fd48c:
    if (ctx->pc == 0x1FD48Cu) {
        ctx->pc = 0x1FD48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD488u;
        // 0x1fd48c: 0xa623000c  sh          $v1, 0xC($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD490u;
        goto label_1fd490;
    }
    ctx->pc = 0x1FD488u;
    {
        const bool branch_taken_0x1fd488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD488u;
        // 0x1fd48c: 0xa623000c  sh          $v1, 0xC($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd488) {
            ctx->pc = 0x1FD4DCu;
            goto label_1fd4dc;
        }
    }
    ctx->pc = 0x1FD490u;
label_1fd490:
    // 0x1fd490: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x1fd490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_1fd494:
    // 0x1fd494: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x1fd494u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
label_1fd498:
    // 0x1fd498: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1fd498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fd49c:
    // 0x1fd49c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_1fd4a0:
    if (ctx->pc == 0x1FD4A0u) {
        ctx->pc = 0x1FD4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD49Cu;
        // 0x1fd4a0: 0x528023  subu        $s0, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD4A4u;
        goto label_1fd4a4;
    }
    ctx->pc = 0x1FD49Cu;
    {
        const bool branch_taken_0x1fd49c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FD4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD49Cu;
        // 0x1fd4a0: 0x528023  subu        $s0, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd49c) {
            ctx->pc = 0x1FD4A8u;
            goto label_1fd4a8;
        }
    }
    ctx->pc = 0x1FD4A4u;
label_1fd4a4:
    // 0x1fd4a4: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x1fd4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1fd4a8:
    // 0x1fd4a8: 0x1a00000b  blez        $s0, . + 4 + (0xB << 2)
label_1fd4ac:
    if (ctx->pc == 0x1FD4ACu) {
        ctx->pc = 0x1FD4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD4A8u;
        // 0x1fd4ac: 0xae240008  sw          $a0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD4B0u;
        goto label_1fd4b0;
    }
    ctx->pc = 0x1FD4A8u;
    {
        const bool branch_taken_0x1fd4a8 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x1FD4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD4A8u;
        // 0x1fd4ac: 0xae240008  sw          $a0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd4a8) {
            ctx->pc = 0x1FD4D8u;
            goto label_1fd4d8;
        }
    }
    ctx->pc = 0x1FD4B0u;
label_1fd4b0:
    // 0x1fd4b0: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1fd4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1fd4b4:
    // 0x1fd4b4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1fd4b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1fd4b8:
    // 0x1fd4b8: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x1fd4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_1fd4bc:
    // 0x1fd4bc: 0x40f809  jalr        $v0
label_1fd4c0:
    if (ctx->pc == 0x1FD4C0u) {
        ctx->pc = 0x1FD4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD4BCu;
        // 0x1fd4c0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD4C4u;
        goto label_1fd4c4;
    }
    ctx->pc = 0x1FD4BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FD4C4u);
        ctx->pc = 0x1FD4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD4BCu;
        // 0x1fd4c0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD4BCu, 0x1FD4C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FD4C4u;
label_1fd4c4:
    // 0x1fd4c4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1fd4c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fd4c8:
    // 0x1fd4c8: 0x1860ffec  blez        $v1, . + 4 + (-0x14 << 2)
label_1fd4cc:
    if (ctx->pc == 0x1FD4CCu) {
        ctx->pc = 0x1FD4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD4C8u;
        // 0x1fd4cc: 0x2038023  subu        $s0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD4D0u;
        goto label_1fd4d0;
    }
    ctx->pc = 0x1FD4C8u;
    {
        const bool branch_taken_0x1fd4c8 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1FD4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD4C8u;
        // 0x1fd4cc: 0x2038023  subu        $s0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd4c8) {
            ctx->pc = 0x1FD47Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fd47c;
        }
    }
    ctx->pc = 0x1FD4D0u;
label_1fd4d0:
    // 0x1fd4d0: 0x1e00fff7  bgtz        $s0, . + 4 + (-0x9 << 2)
label_1fd4d4:
    if (ctx->pc == 0x1FD4D4u) {
        ctx->pc = 0x1FD4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD4D0u;
        // 0x1fd4d4: 0x2439021  addu        $s2, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD4D8u;
        goto label_1fd4d8;
    }
    ctx->pc = 0x1FD4D0u;
    {
        const bool branch_taken_0x1fd4d0 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x1FD4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD4D0u;
        // 0x1fd4d4: 0x2439021  addu        $s2, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd4d0) {
            ctx->pc = 0x1FD4B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fd4b0;
        }
    }
    ctx->pc = 0x1FD4D8u;
label_1fd4d8:
    // 0x1fd4d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1fd4d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fd4dc:
    // 0x1fd4dc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1fd4dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1fd4e0:
    // 0x1fd4e0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1fd4e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1fd4e4:
    // 0x1fd4e4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1fd4e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1fd4e8:
    // 0x1fd4e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fd4e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fd4ec:
    // 0x1fd4ec: 0x3e00008  jr          $ra
label_1fd4f0:
    if (ctx->pc == 0x1FD4F0u) {
        ctx->pc = 0x1FD4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD4ECu;
        // 0x1fd4f0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD4F4u;
        goto label_fallthrough_0x1fd4ec;
    }
    ctx->pc = 0x1FD4ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD4ECu;
        // 0x1fd4f0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD4ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1fd4ec:
    ctx->pc = 0x1FD4F4u;
}
