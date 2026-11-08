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

// Function: FUN_001484e0
// Address: 0x1484e0 - 0x1486c4
void FUN_001484e0_0x1484e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001484e0_0x1484e0");
#endif

    switch (ctx->pc) {
        case 0x1484e0u: goto label_1484e0;
        case 0x1484e4u: goto label_1484e4;
        case 0x1484e8u: goto label_1484e8;
        case 0x1484ecu: goto label_1484ec;
        case 0x1484f0u: goto label_1484f0;
        case 0x1484f4u: goto label_1484f4;
        case 0x1484f8u: goto label_1484f8;
        case 0x1484fcu: goto label_1484fc;
        case 0x148500u: goto label_148500;
        case 0x148504u: goto label_148504;
        case 0x148508u: goto label_148508;
        case 0x14850cu: goto label_14850c;
        case 0x148510u: goto label_148510;
        case 0x148514u: goto label_148514;
        case 0x148518u: goto label_148518;
        case 0x14851cu: goto label_14851c;
        case 0x148520u: goto label_148520;
        case 0x148524u: goto label_148524;
        case 0x148528u: goto label_148528;
        case 0x14852cu: goto label_14852c;
        case 0x148530u: goto label_148530;
        case 0x148534u: goto label_148534;
        case 0x148538u: goto label_148538;
        case 0x14853cu: goto label_14853c;
        case 0x148540u: goto label_148540;
        case 0x148544u: goto label_148544;
        case 0x148548u: goto label_148548;
        case 0x14854cu: goto label_14854c;
        case 0x148550u: goto label_148550;
        case 0x148554u: goto label_148554;
        case 0x148558u: goto label_148558;
        case 0x14855cu: goto label_14855c;
        case 0x148560u: goto label_148560;
        case 0x148564u: goto label_148564;
        case 0x148568u: goto label_148568;
        case 0x14856cu: goto label_14856c;
        case 0x148570u: goto label_148570;
        case 0x148574u: goto label_148574;
        case 0x148578u: goto label_148578;
        case 0x14857cu: goto label_14857c;
        case 0x148580u: goto label_148580;
        case 0x148584u: goto label_148584;
        case 0x148588u: goto label_148588;
        case 0x14858cu: goto label_14858c;
        case 0x148590u: goto label_148590;
        case 0x148594u: goto label_148594;
        case 0x148598u: goto label_148598;
        case 0x14859cu: goto label_14859c;
        case 0x1485a0u: goto label_1485a0;
        case 0x1485a4u: goto label_1485a4;
        case 0x1485a8u: goto label_1485a8;
        case 0x1485acu: goto label_1485ac;
        case 0x1485b0u: goto label_1485b0;
        case 0x1485b4u: goto label_1485b4;
        case 0x1485b8u: goto label_1485b8;
        case 0x1485bcu: goto label_1485bc;
        case 0x1485c0u: goto label_1485c0;
        case 0x1485c4u: goto label_1485c4;
        case 0x1485c8u: goto label_1485c8;
        case 0x1485ccu: goto label_1485cc;
        case 0x1485d0u: goto label_1485d0;
        case 0x1485d4u: goto label_1485d4;
        case 0x1485d8u: goto label_1485d8;
        case 0x1485dcu: goto label_1485dc;
        case 0x1485e0u: goto label_1485e0;
        case 0x1485e4u: goto label_1485e4;
        case 0x1485e8u: goto label_1485e8;
        case 0x1485ecu: goto label_1485ec;
        case 0x1485f0u: goto label_1485f0;
        case 0x1485f4u: goto label_1485f4;
        case 0x1485f8u: goto label_1485f8;
        case 0x1485fcu: goto label_1485fc;
        case 0x148600u: goto label_148600;
        case 0x148604u: goto label_148604;
        case 0x148608u: goto label_148608;
        case 0x14860cu: goto label_14860c;
        case 0x148610u: goto label_148610;
        case 0x148614u: goto label_148614;
        case 0x148618u: goto label_148618;
        case 0x14861cu: goto label_14861c;
        case 0x148620u: goto label_148620;
        case 0x148624u: goto label_148624;
        case 0x148628u: goto label_148628;
        case 0x14862cu: goto label_14862c;
        case 0x148630u: goto label_148630;
        case 0x148634u: goto label_148634;
        case 0x148638u: goto label_148638;
        case 0x14863cu: goto label_14863c;
        case 0x148640u: goto label_148640;
        case 0x148644u: goto label_148644;
        case 0x148648u: goto label_148648;
        case 0x14864cu: goto label_14864c;
        case 0x148650u: goto label_148650;
        case 0x148654u: goto label_148654;
        case 0x148658u: goto label_148658;
        case 0x14865cu: goto label_14865c;
        case 0x148660u: goto label_148660;
        case 0x148664u: goto label_148664;
        case 0x148668u: goto label_148668;
        case 0x14866cu: goto label_14866c;
        case 0x148670u: goto label_148670;
        case 0x148674u: goto label_148674;
        case 0x148678u: goto label_148678;
        case 0x14867cu: goto label_14867c;
        case 0x148680u: goto label_148680;
        case 0x148684u: goto label_148684;
        case 0x148688u: goto label_148688;
        case 0x14868cu: goto label_14868c;
        case 0x148690u: goto label_148690;
        case 0x148694u: goto label_148694;
        case 0x148698u: goto label_148698;
        case 0x14869cu: goto label_14869c;
        case 0x1486a0u: goto label_1486a0;
        case 0x1486a4u: goto label_1486a4;
        case 0x1486a8u: goto label_1486a8;
        case 0x1486acu: goto label_1486ac;
        case 0x1486b0u: goto label_1486b0;
        case 0x1486b4u: goto label_1486b4;
        case 0x1486b8u: goto label_1486b8;
        case 0x1486bcu: goto label_1486bc;
        case 0x1486c0u: goto label_1486c0;
        default: break;
    }

    ctx->pc = 0x1484e0u;

label_1484e0:
    // 0x1484e0: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x1484e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
label_1484e4:
    // 0x1484e4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1484e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1484e8:
    // 0x1484e8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1484e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1484ec:
    // 0x1484ec: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1484ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1484f0:
    // 0x1484f0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1484f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1484f4:
    // 0x1484f4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1484f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1484f8:
    // 0x1484f8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1484f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1484fc:
    // 0x1484fc: 0x8e4502b4  lw          $a1, 0x2B4($s2)
    ctx->pc = 0x1484fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 692)));
label_148500:
    // 0x148500: 0x8cb90000  lw          $t9, 0x0($a1)
    ctx->pc = 0x148500u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_148504:
    // 0x148504: 0x8f390074  lw          $t9, 0x74($t9)
    ctx->pc = 0x148504u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 116)));
label_148508:
    // 0x148508: 0x320f809  jalr        $t9
label_14850c:
    if (ctx->pc == 0x14850Cu) {
        ctx->pc = 0x14850Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148508u;
        // 0x14850c: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x148510u;
        goto label_148510;
    }
    ctx->pc = 0x148508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x148510u);
        ctx->pc = 0x14850Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148508u;
        // 0x14850c: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148508u, 0x148510u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x148510u;
label_148510:
    // 0x148510: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x148510u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_148514:
    // 0x148514: 0x27b0005c  addiu       $s0, $sp, 0x5C
    ctx->pc = 0x148514u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_148518:
    // 0x148518: 0x8fa50074  lw          $a1, 0x74($sp)
    ctx->pc = 0x148518u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_14851c:
    // 0x14851c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x14851cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_148520:
    // 0x148520: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x148520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_148524:
    // 0x148524: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x148524u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
label_148528:
    // 0x148528: 0xafa50054  sw          $a1, 0x54($sp)
    ctx->pc = 0x148528u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 5));
label_14852c:
    // 0x14852c: 0xafa30058  sw          $v1, 0x58($sp)
    ctx->pc = 0x14852cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
label_148530:
    // 0x148530: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x148530u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_148534:
    // 0x148534: 0x8e4502b8  lw          $a1, 0x2B8($s2)
    ctx->pc = 0x148534u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 696)));
label_148538:
    // 0x148538: 0x8cb90000  lw          $t9, 0x0($a1)
    ctx->pc = 0x148538u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_14853c:
    // 0x14853c: 0x8f390074  lw          $t9, 0x74($t9)
    ctx->pc = 0x14853cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 116)));
label_148540:
    // 0x148540: 0x320f809  jalr        $t9
label_148544:
    if (ctx->pc == 0x148544u) {
        ctx->pc = 0x148544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148540u;
        // 0x148544: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x148548u;
        goto label_148548;
    }
    ctx->pc = 0x148540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x148548u);
        ctx->pc = 0x148544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148540u;
        // 0x148544: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148540u, 0x148548u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x148548u;
label_148548:
    // 0x148548: 0x8fa70080  lw          $a3, 0x80($sp)
    ctx->pc = 0x148548u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_14854c:
    // 0x14854c: 0x27b1006c  addiu       $s1, $sp, 0x6C
    ctx->pc = 0x14854cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
label_148550:
    // 0x148550: 0x8fa60084  lw          $a2, 0x84($sp)
    ctx->pc = 0x148550u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
label_148554:
    // 0x148554: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x148554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_148558:
    // 0x148558: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x148558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_14855c:
    // 0x14855c: 0x26450014  addiu       $a1, $s2, 0x14
    ctx->pc = 0x14855cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
label_148560:
    // 0x148560: 0x8fa2008c  lw          $v0, 0x8C($sp)
    ctx->pc = 0x148560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
label_148564:
    // 0x148564: 0xafa70060  sw          $a3, 0x60($sp)
    ctx->pc = 0x148564u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 7));
label_148568:
    // 0x148568: 0xafa60064  sw          $a2, 0x64($sp)
    ctx->pc = 0x148568u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 6));
label_14856c:
    // 0x14856c: 0xafa30068  sw          $v1, 0x68($sp)
    ctx->pc = 0x14856cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 3));
label_148570:
    // 0x148570: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x148570u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_148574:
    // 0x148574: 0x8e430028  lw          $v1, 0x28($s2)
    ctx->pc = 0x148574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_148578:
    // 0x148578: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x148578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_14857c:
    // 0x14857c: 0xc052340  jal         func_148D00
label_148580:
    if (ctx->pc == 0x148580u) {
        ctx->pc = 0x148580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14857Cu;
        // 0x148580: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x148584u;
        goto label_148584;
    }
    ctx->pc = 0x14857Cu;
    SET_GPR_U32(ctx, 31, 0x148584u);
    ctx->pc = 0x148580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14857Cu;
    // 0x148580: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148D00u, 0x14857Cu, 0x148584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148584u;
label_148584:
    // 0x148584: 0x8e460028  lw          $a2, 0x28($s2)
    ctx->pc = 0x148584u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_148588:
    // 0x148588: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x148588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_14858c:
    // 0x14858c: 0xc052340  jal         func_148D00
label_148590:
    if (ctx->pc == 0x148590u) {
        ctx->pc = 0x148590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14858Cu;
        // 0x148590: 0x26450014  addiu       $a1, $s2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x148594u;
        goto label_148594;
    }
    ctx->pc = 0x14858Cu;
    SET_GPR_U32(ctx, 31, 0x148594u);
    ctx->pc = 0x148590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14858Cu;
    // 0x148590: 0x26450014  addiu       $a1, $s2, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148D00u, 0x14858Cu, 0x148594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148594u;
label_148594:
    // 0x148594: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x148594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_148598:
    // 0x148598: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x148598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_14859c:
    // 0x14859c: 0xc052244  jal         func_148910
label_1485a0:
    if (ctx->pc == 0x1485A0u) {
        ctx->pc = 0x1485A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14859Cu;
        // 0x1485a0: 0x27a600f0  addiu       $a2, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1485A4u;
        goto label_1485a4;
    }
    ctx->pc = 0x14859Cu;
    SET_GPR_U32(ctx, 31, 0x1485A4u);
    ctx->pc = 0x1485A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14859Cu;
    // 0x1485a0: 0x27a600f0  addiu       $a2, $sp, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148910u, 0x14859Cu, 0x1485A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1485A4u;
label_1485a4:
    // 0x1485a4: 0x27a20130  addiu       $v0, $sp, 0x130
    ctx->pc = 0x1485a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_1485a8:
    // 0x1485a8: 0x8e430028  lw          $v1, 0x28($s2)
    ctx->pc = 0x1485a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_1485ac:
    // 0x1485ac: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x1485acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1485b0:
    // 0x1485b0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1485b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1485b4:
    // 0x1485b4: 0x26450014  addiu       $a1, $s2, 0x14
    ctx->pc = 0x1485b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
label_1485b8:
    // 0x1485b8: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x1485b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_1485bc:
    // 0x1485bc: 0xc4d40000  lwc1        $f20, 0x0($a2)
    ctx->pc = 0x1485bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1485c0:
    // 0x1485c0: 0xc052340  jal         func_148D00
label_1485c4:
    if (ctx->pc == 0x1485C4u) {
        ctx->pc = 0x1485C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1485C0u;
        // 0x1485c4: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1485C8u;
        goto label_1485c8;
    }
    ctx->pc = 0x1485C0u;
    SET_GPR_U32(ctx, 31, 0x1485C8u);
    ctx->pc = 0x1485C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1485C0u;
    // 0x1485c4: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148D00u, 0x1485C0u, 0x1485C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1485C8u;
label_1485c8:
    // 0x1485c8: 0x8e460028  lw          $a2, 0x28($s2)
    ctx->pc = 0x1485c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_1485cc:
    // 0x1485cc: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1485ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1485d0:
    // 0x1485d0: 0xc052340  jal         func_148D00
label_1485d4:
    if (ctx->pc == 0x1485D4u) {
        ctx->pc = 0x1485D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1485D0u;
        // 0x1485d4: 0x26450014  addiu       $a1, $s2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1485D8u;
        goto label_1485d8;
    }
    ctx->pc = 0x1485D0u;
    SET_GPR_U32(ctx, 31, 0x1485D8u);
    ctx->pc = 0x1485D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1485D0u;
    // 0x1485d4: 0x26450014  addiu       $a1, $s2, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148D00u, 0x1485D0u, 0x1485D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1485D8u;
label_1485d8:
    // 0x1485d8: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1485d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_1485dc:
    // 0x1485dc: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x1485dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1485e0:
    // 0x1485e0: 0xc0521b4  jal         func_1486D0
label_1485e4:
    if (ctx->pc == 0x1485E4u) {
        ctx->pc = 0x1485E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1485E0u;
        // 0x1485e4: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1485E8u;
        goto label_1485e8;
    }
    ctx->pc = 0x1485E0u;
    SET_GPR_U32(ctx, 31, 0x1485E8u);
    ctx->pc = 0x1485E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1485E0u;
    // 0x1485e4: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1486D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1486D0u, 0x1485E0u, 0x1485E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1485E8u;
label_1485e8:
    // 0x1485e8: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x1485e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_1485ec:
    // 0x1485ec: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1485ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1485f0:
    // 0x1485f0: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1485f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1485f4:
    // 0x1485f4: 0x4601a032  c.eq.s      $f20, $f1
    ctx->pc = 0x1485f4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1485f8:
    // 0x1485f8: 0x0  nop
    ctx->pc = 0x1485f8u;
    // NOP
label_1485fc:
    // 0x1485fc: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_148600:
    if (ctx->pc == 0x148600u) {
        ctx->pc = 0x148604u;
        goto label_148604;
    }
    ctx->pc = 0x1485FCu;
    {
        const bool branch_taken_0x1485fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1485fc) {
            ctx->pc = 0x14860Cu;
            goto label_14860c;
        }
    }
    ctx->pc = 0x148604u;
label_148604:
    // 0x148604: 0x10000013  b           . + 4 + (0x13 << 2)
label_148608:
    if (ctx->pc == 0x148608u) {
        ctx->pc = 0x148608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148604u;
        // 0x148608: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14860Cu;
        goto label_14860c;
    }
    ctx->pc = 0x148604u;
    {
        const bool branch_taken_0x148604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148604u;
        // 0x148608: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148604) {
            ctx->pc = 0x148654u;
            goto label_148654;
        }
    }
    ctx->pc = 0x14860Cu;
label_14860c:
    // 0x14860c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14860cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_148610:
    // 0x148610: 0x0  nop
    ctx->pc = 0x148610u;
    // NOP
label_148614:
    // 0x148614: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x148614u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_148618:
    // 0x148618: 0x0  nop
    ctx->pc = 0x148618u;
    // NOP
label_14861c:
    // 0x14861c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_148620:
    if (ctx->pc == 0x148620u) {
        ctx->pc = 0x148620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14861Cu;
        // 0x148620: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x148624u;
        goto label_148624;
    }
    ctx->pc = 0x14861Cu;
    {
        const bool branch_taken_0x14861c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x148620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14861Cu;
        // 0x148620: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14861c) {
            ctx->pc = 0x148630u;
            goto label_148630;
        }
    }
    ctx->pc = 0x148624u;
label_148624:
    // 0x148624: 0x1000000b  b           . + 4 + (0xB << 2)
label_148628:
    if (ctx->pc == 0x148628u) {
        ctx->pc = 0x148628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148624u;
        // 0x148628: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14862Cu;
        goto label_14862c;
    }
    ctx->pc = 0x148624u;
    {
        const bool branch_taken_0x148624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148624u;
        // 0x148628: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148624) {
            ctx->pc = 0x148654u;
            goto label_148654;
        }
    }
    ctx->pc = 0x14862Cu;
label_14862c:
    // 0x14862c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14862cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_148630:
    // 0x148630: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x148630u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_148634:
    // 0x148634: 0x0  nop
    ctx->pc = 0x148634u;
    // NOP
label_148638:
    // 0x148638: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x148638u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14863c:
    // 0x14863c: 0x0  nop
    ctx->pc = 0x14863cu;
    // NOP
label_148640:
    // 0x148640: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_148644:
    if (ctx->pc == 0x148644u) {
        ctx->pc = 0x148644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148640u;
        // 0x148644: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x148648u;
        goto label_148648;
    }
    ctx->pc = 0x148640u;
    {
        const bool branch_taken_0x148640 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x148644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148640u;
        // 0x148644: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148640) {
            ctx->pc = 0x148654u;
            goto label_148654;
        }
    }
    ctx->pc = 0x148648u;
label_148648:
    // 0x148648: 0x10000002  b           . + 4 + (0x2 << 2)
label_14864c:
    if (ctx->pc == 0x14864Cu) {
        ctx->pc = 0x14864Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148648u;
        // 0x14864c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x148650u;
        goto label_148650;
    }
    ctx->pc = 0x148648u;
    {
        const bool branch_taken_0x148648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14864Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148648u;
        // 0x14864c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148648) {
            ctx->pc = 0x148654u;
            goto label_148654;
        }
    }
    ctx->pc = 0x148650u;
label_148650:
    // 0x148650: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x148650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_148654:
    // 0x148654: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x148654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_148658:
    // 0x148658: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
label_14865c:
    if (ctx->pc == 0x14865Cu) {
        ctx->pc = 0x148660u;
        goto label_148660;
    }
    ctx->pc = 0x148658u;
    {
        const bool branch_taken_0x148658 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x148658) {
            ctx->pc = 0x14868Cu;
            goto label_14868c;
        }
    }
    ctx->pc = 0x148660u;
label_148660:
    // 0x148660: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x148660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_148664:
    // 0x148664: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_148668:
    if (ctx->pc == 0x148668u) {
        ctx->pc = 0x14866Cu;
        goto label_14866c;
    }
    ctx->pc = 0x148664u;
    {
        const bool branch_taken_0x148664 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x148664) {
            ctx->pc = 0x148684u;
            goto label_148684;
        }
    }
    ctx->pc = 0x14866Cu;
label_14866c:
    // 0x14866c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_148670:
    if (ctx->pc == 0x148670u) {
        ctx->pc = 0x148674u;
        goto label_148674;
    }
    ctx->pc = 0x14866Cu;
    {
        const bool branch_taken_0x14866c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14866c) {
            ctx->pc = 0x14867Cu;
            goto label_14867c;
        }
    }
    ctx->pc = 0x148674u;
label_148674:
    // 0x148674: 0x1000000c  b           . + 4 + (0xC << 2)
label_148678:
    if (ctx->pc == 0x148678u) {
        ctx->pc = 0x148678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148674u;
        // 0x148678: 0x24021388  addiu       $v0, $zero, 0x1388 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14867Cu;
        goto label_14867c;
    }
    ctx->pc = 0x148674u;
    {
        const bool branch_taken_0x148674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148674u;
        // 0x148678: 0x24021388  addiu       $v0, $zero, 0x1388 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148674) {
            ctx->pc = 0x1486A8u;
            goto label_1486a8;
        }
    }
    ctx->pc = 0x14867Cu;
label_14867c:
    // 0x14867c: 0x1000000a  b           . + 4 + (0xA << 2)
label_148680:
    if (ctx->pc == 0x148680u) {
        ctx->pc = 0x148680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14867Cu;
        // 0x148680: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x148684u;
        goto label_148684;
    }
    ctx->pc = 0x14867Cu;
    {
        const bool branch_taken_0x14867c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14867Cu;
        // 0x148680: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14867c) {
            ctx->pc = 0x1486A8u;
            goto label_1486a8;
        }
    }
    ctx->pc = 0x148684u;
label_148684:
    // 0x148684: 0x10000008  b           . + 4 + (0x8 << 2)
label_148688:
    if (ctx->pc == 0x148688u) {
        ctx->pc = 0x148688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148684u;
        // 0x148688: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14868Cu;
        goto label_14868c;
    }
    ctx->pc = 0x148684u;
    {
        const bool branch_taken_0x148684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148684u;
        // 0x148688: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148684) {
            ctx->pc = 0x1486A8u;
            goto label_1486a8;
        }
    }
    ctx->pc = 0x14868Cu;
label_14868c:
    // 0x14868c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x14868cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_148690:
    // 0x148690: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x148690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_148694:
    // 0x148694: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x148694u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_148698:
    // 0x148698: 0x201880a  movz        $s1, $s0, $at
    ctx->pc = 0x148698u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 16));
label_14869c:
    // 0x14869c: 0x10000002  b           . + 4 + (0x2 << 2)
label_1486a0:
    if (ctx->pc == 0x1486A0u) {
        ctx->pc = 0x1486A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14869Cu;
        // 0x1486a0: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1486A4u;
        goto label_1486a4;
    }
    ctx->pc = 0x14869Cu;
    {
        const bool branch_taken_0x14869c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1486A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14869Cu;
        // 0x1486a0: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14869c) {
            ctx->pc = 0x1486A8u;
            goto label_1486a8;
        }
    }
    ctx->pc = 0x1486A4u;
label_1486a4:
    // 0x1486a4: 0x24021388  addiu       $v0, $zero, 0x1388
    ctx->pc = 0x1486a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5000));
label_1486a8:
    // 0x1486a8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1486a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1486ac:
    // 0x1486ac: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1486acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1486b0:
    // 0x1486b0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1486b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1486b4:
    // 0x1486b4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1486b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1486b8:
    // 0x1486b8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1486b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1486bc:
    // 0x1486bc: 0x3e00008  jr          $ra
label_1486c0:
    if (ctx->pc == 0x1486C0u) {
        ctx->pc = 0x1486C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1486BCu;
        // 0x1486c0: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1486C4u;
        goto label_fallthrough_0x1486bc;
    }
    ctx->pc = 0x1486BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1486C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1486BCu;
        // 0x1486c0: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1486BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1486bc:
    ctx->pc = 0x1486C4u;
}
