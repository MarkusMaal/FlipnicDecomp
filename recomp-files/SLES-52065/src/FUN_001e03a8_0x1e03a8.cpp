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

// Function: FUN_001e03a8
// Address: 0x1e03a8 - 0x1e0538
void FUN_001e03a8_0x1e03a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e03a8_0x1e03a8");
#endif

    switch (ctx->pc) {
        case 0x1e03a8u: goto label_1e03a8;
        case 0x1e03acu: goto label_1e03ac;
        case 0x1e03b0u: goto label_1e03b0;
        case 0x1e03b4u: goto label_1e03b4;
        case 0x1e03b8u: goto label_1e03b8;
        case 0x1e03bcu: goto label_1e03bc;
        case 0x1e03c0u: goto label_1e03c0;
        case 0x1e03c4u: goto label_1e03c4;
        case 0x1e03c8u: goto label_1e03c8;
        case 0x1e03ccu: goto label_1e03cc;
        case 0x1e03d0u: goto label_1e03d0;
        case 0x1e03d4u: goto label_1e03d4;
        case 0x1e03d8u: goto label_1e03d8;
        case 0x1e03dcu: goto label_1e03dc;
        case 0x1e03e0u: goto label_1e03e0;
        case 0x1e03e4u: goto label_1e03e4;
        case 0x1e03e8u: goto label_1e03e8;
        case 0x1e03ecu: goto label_1e03ec;
        case 0x1e03f0u: goto label_1e03f0;
        case 0x1e03f4u: goto label_1e03f4;
        case 0x1e03f8u: goto label_1e03f8;
        case 0x1e03fcu: goto label_1e03fc;
        case 0x1e0400u: goto label_1e0400;
        case 0x1e0404u: goto label_1e0404;
        case 0x1e0408u: goto label_1e0408;
        case 0x1e040cu: goto label_1e040c;
        case 0x1e0410u: goto label_1e0410;
        case 0x1e0414u: goto label_1e0414;
        case 0x1e0418u: goto label_1e0418;
        case 0x1e041cu: goto label_1e041c;
        case 0x1e0420u: goto label_1e0420;
        case 0x1e0424u: goto label_1e0424;
        case 0x1e0428u: goto label_1e0428;
        case 0x1e042cu: goto label_1e042c;
        case 0x1e0430u: goto label_1e0430;
        case 0x1e0434u: goto label_1e0434;
        case 0x1e0438u: goto label_1e0438;
        case 0x1e043cu: goto label_1e043c;
        case 0x1e0440u: goto label_1e0440;
        case 0x1e0444u: goto label_1e0444;
        case 0x1e0448u: goto label_1e0448;
        case 0x1e044cu: goto label_1e044c;
        case 0x1e0450u: goto label_1e0450;
        case 0x1e0454u: goto label_1e0454;
        case 0x1e0458u: goto label_1e0458;
        case 0x1e045cu: goto label_1e045c;
        case 0x1e0460u: goto label_1e0460;
        case 0x1e0464u: goto label_1e0464;
        case 0x1e0468u: goto label_1e0468;
        case 0x1e046cu: goto label_1e046c;
        case 0x1e0470u: goto label_1e0470;
        case 0x1e0474u: goto label_1e0474;
        case 0x1e0478u: goto label_1e0478;
        case 0x1e047cu: goto label_1e047c;
        case 0x1e0480u: goto label_1e0480;
        case 0x1e0484u: goto label_1e0484;
        case 0x1e0488u: goto label_1e0488;
        case 0x1e048cu: goto label_1e048c;
        case 0x1e0490u: goto label_1e0490;
        case 0x1e0494u: goto label_1e0494;
        case 0x1e0498u: goto label_1e0498;
        case 0x1e049cu: goto label_1e049c;
        case 0x1e04a0u: goto label_1e04a0;
        case 0x1e04a4u: goto label_1e04a4;
        case 0x1e04a8u: goto label_1e04a8;
        case 0x1e04acu: goto label_1e04ac;
        case 0x1e04b0u: goto label_1e04b0;
        case 0x1e04b4u: goto label_1e04b4;
        case 0x1e04b8u: goto label_1e04b8;
        case 0x1e04bcu: goto label_1e04bc;
        case 0x1e04c0u: goto label_1e04c0;
        case 0x1e04c4u: goto label_1e04c4;
        case 0x1e04c8u: goto label_1e04c8;
        case 0x1e04ccu: goto label_1e04cc;
        case 0x1e04d0u: goto label_1e04d0;
        case 0x1e04d4u: goto label_1e04d4;
        case 0x1e04d8u: goto label_1e04d8;
        case 0x1e04dcu: goto label_1e04dc;
        case 0x1e04e0u: goto label_1e04e0;
        case 0x1e04e4u: goto label_1e04e4;
        case 0x1e04e8u: goto label_1e04e8;
        case 0x1e04ecu: goto label_1e04ec;
        case 0x1e04f0u: goto label_1e04f0;
        case 0x1e04f4u: goto label_1e04f4;
        case 0x1e04f8u: goto label_1e04f8;
        case 0x1e04fcu: goto label_1e04fc;
        case 0x1e0500u: goto label_1e0500;
        case 0x1e0504u: goto label_1e0504;
        case 0x1e0508u: goto label_1e0508;
        case 0x1e050cu: goto label_1e050c;
        case 0x1e0510u: goto label_1e0510;
        case 0x1e0514u: goto label_1e0514;
        case 0x1e0518u: goto label_1e0518;
        case 0x1e051cu: goto label_1e051c;
        case 0x1e0520u: goto label_1e0520;
        case 0x1e0524u: goto label_1e0524;
        case 0x1e0528u: goto label_1e0528;
        case 0x1e052cu: goto label_1e052c;
        case 0x1e0530u: goto label_1e0530;
        case 0x1e0534u: goto label_1e0534;
        default: break;
    }

    ctx->pc = 0x1e03a8u;

label_1e03a8:
    // 0x1e03a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e03a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1e03ac:
    // 0x1e03ac: 0x24020063  addiu       $v0, $zero, 0x63
    ctx->pc = 0x1e03acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
label_1e03b0:
    // 0x1e03b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e03b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1e03b4:
    // 0x1e03b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e03b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e03b8:
    // 0x1e03b8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1e03b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1e03bc:
    // 0x1e03bc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1e03bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e03c0:
    // 0x1e03c0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e03c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1e03c4:
    // 0x1e03c4: 0x26050060  addiu       $a1, $s0, 0x60
    ctx->pc = 0x1e03c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_1e03c8:
    // 0x1e03c8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1e03c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1e03cc:
    // 0x1e03cc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e03ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1e03d0:
    // 0x1e03d0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1e03d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1e03d4:
    // 0x1e03d4: 0x90720000  lbu         $s2, 0x0($v1)
    ctx->pc = 0x1e03d4u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1e03d8:
    // 0x1e03d8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1e03d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1e03dc:
    // 0x1e03dc: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1e03dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_1e03e0:
    // 0x1e03e0: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1e03e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1e03e4:
    // 0x1e03e4: 0x90710000  lbu         $s1, 0x0($v1)
    ctx->pc = 0x1e03e4u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1e03e8:
    // 0x1e03e8: 0x1242000d  beq         $s2, $v0, . + 4 + (0xD << 2)
label_1e03ec:
    if (ctx->pc == 0x1E03ECu) {
        ctx->pc = 0x1E03ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E03E8u;
        // 0x1e03ec: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E03F0u;
        goto label_1e03f0;
    }
    ctx->pc = 0x1E03E8u;
    {
        const bool branch_taken_0x1e03e8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E03ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E03E8u;
        // 0x1e03ec: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e03e8) {
            ctx->pc = 0x1E0420u;
            goto label_1e0420;
        }
    }
    ctx->pc = 0x1E03F0u;
label_1e03f0:
    // 0x1e03f0: 0x2a420064  slti        $v0, $s2, 0x64
    ctx->pc = 0x1e03f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)100) ? 1 : 0);
label_1e03f4:
    // 0x1e03f4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1e03f8:
    if (ctx->pc == 0x1E03F8u) {
        ctx->pc = 0x1E03F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E03F4u;
        // 0x1e03f8: 0x24020066  addiu       $v0, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E03FCu;
        goto label_1e03fc;
    }
    ctx->pc = 0x1E03F4u;
    {
        const bool branch_taken_0x1e03f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E03F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E03F4u;
        // 0x1e03f8: 0x24020066  addiu       $v0, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e03f4) {
            ctx->pc = 0x1E0410u;
            goto label_1e0410;
        }
    }
    ctx->pc = 0x1E03FCu;
label_1e03fc:
    // 0x1e03fc: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x1e03fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_1e0400:
    // 0x1e0400: 0x12420021  beq         $s2, $v0, . + 4 + (0x21 << 2)
label_1e0404:
    if (ctx->pc == 0x1E0404u) {
        ctx->pc = 0x1E0404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0400u;
        // 0x1e0404: 0x3c020039  lui         $v0, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0408u;
        goto label_1e0408;
    }
    ctx->pc = 0x1E0400u;
    {
        const bool branch_taken_0x1e0400 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E0404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0400u;
        // 0x1e0404: 0x3c020039  lui         $v0, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0400) {
            ctx->pc = 0x1E0488u;
            goto label_1e0488;
        }
    }
    ctx->pc = 0x1E0408u;
label_1e0408:
    // 0x1e0408: 0x10000027  b           . + 4 + (0x27 << 2)
label_1e040c:
    if (ctx->pc == 0x1E040Cu) {
        ctx->pc = 0x1E040Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0408u;
        // 0x1e040c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0410u;
        goto label_1e0410;
    }
    ctx->pc = 0x1E0408u;
    {
        const bool branch_taken_0x1e0408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E040Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0408u;
        // 0x1e040c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0408) {
            ctx->pc = 0x1E04A8u;
            goto label_1e04a8;
        }
    }
    ctx->pc = 0x1E0410u;
label_1e0410:
    // 0x1e0410: 0x52420025  beql        $s2, $v0, . + 4 + (0x25 << 2)
label_1e0414:
    if (ctx->pc == 0x1E0414u) {
        ctx->pc = 0x1E0414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0410u;
        // 0x1e0414: 0xae110070  sw          $s1, 0x70($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0418u;
        goto label_1e0418;
    }
    ctx->pc = 0x1E0410u;
    {
        const bool branch_taken_0x1e0410 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e0410) {
            ctx->pc = 0x1E0414u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E0410u;
            // 0x1e0414: 0xae110070  sw          $s1, 0x70($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E04A8u;
            goto label_1e04a8;
        }
    }
    ctx->pc = 0x1E0418u;
label_1e0418:
    // 0x1e0418: 0x10000023  b           . + 4 + (0x23 << 2)
label_1e041c:
    if (ctx->pc == 0x1E041Cu) {
        ctx->pc = 0x1E041Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0418u;
        // 0x1e041c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0420u;
        goto label_1e0420;
    }
    ctx->pc = 0x1E0418u;
    {
        const bool branch_taken_0x1e0418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E041Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0418u;
        // 0x1e041c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0418) {
            ctx->pc = 0x1E04A8u;
            goto label_1e04a8;
        }
    }
    ctx->pc = 0x1E0420u;
label_1e0420:
    // 0x1e0420: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1e0420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1e0424:
    // 0x1e0424: 0x12220006  beq         $s1, $v0, . + 4 + (0x6 << 2)
label_1e0428:
    if (ctx->pc == 0x1E0428u) {
        ctx->pc = 0x1E0428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0424u;
        // 0x1e0428: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E042Cu;
        goto label_1e042c;
    }
    ctx->pc = 0x1E0424u;
    {
        const bool branch_taken_0x1e0424 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E0428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0424u;
        // 0x1e0428: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0424) {
            ctx->pc = 0x1E0440u;
            goto label_1e0440;
        }
    }
    ctx->pc = 0x1E042Cu;
label_1e042c:
    // 0x1e042c: 0x5222000a  beql        $s1, $v0, . + 4 + (0xA << 2)
label_1e0430:
    if (ctx->pc == 0x1E0430u) {
        ctx->pc = 0x1E0430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E042Cu;
        // 0x1e0430: 0x8e030070  lw          $v1, 0x70($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0434u;
        goto label_1e0434;
    }
    ctx->pc = 0x1E042Cu;
    {
        const bool branch_taken_0x1e042c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e042c) {
            ctx->pc = 0x1E0430u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E042Cu;
            // 0x1e0430: 0x8e030070  lw          $v1, 0x70($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E0458u;
            goto label_1e0458;
        }
    }
    ctx->pc = 0x1E0434u;
label_1e0434:
    // 0x1e0434: 0x1000001c  b           . + 4 + (0x1C << 2)
label_1e0438:
    if (ctx->pc == 0x1E0438u) {
        ctx->pc = 0x1E0438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0434u;
        // 0x1e0438: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E043Cu;
        goto label_1e043c;
    }
    ctx->pc = 0x1E0434u;
    {
        const bool branch_taken_0x1e0434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0434u;
        // 0x1e0438: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0434) {
            ctx->pc = 0x1E04A8u;
            goto label_1e04a8;
        }
    }
    ctx->pc = 0x1E043Cu;
label_1e043c:
    // 0x1e043c: 0x0  nop
    ctx->pc = 0x1e043cu;
    // NOP
label_1e0440:
    // 0x1e0440: 0x92020068  lbu         $v0, 0x68($s0)
    ctx->pc = 0x1e0440u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 104)));
label_1e0444:
    // 0x1e0444: 0xa2020069  sb          $v0, 0x69($s0)
    ctx->pc = 0x1e0444u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 105), (uint8_t)GPR_U32(ctx, 2));
label_1e0448:
    // 0x1e0448: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1e0448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1e044c:
    // 0x1e044c: 0x10000016  b           . + 4 + (0x16 << 2)
label_1e0450:
    if (ctx->pc == 0x1E0450u) {
        ctx->pc = 0x1E0450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E044Cu;
        // 0x1e0450: 0xae03006c  sw          $v1, 0x6C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0454u;
        goto label_1e0454;
    }
    ctx->pc = 0x1E044Cu;
    {
        const bool branch_taken_0x1e044c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E044Cu;
        // 0x1e0450: 0xae03006c  sw          $v1, 0x6C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e044c) {
            ctx->pc = 0x1E04A8u;
            goto label_1e04a8;
        }
    }
    ctx->pc = 0x1E0454u;
label_1e0454:
    // 0x1e0454: 0x0  nop
    ctx->pc = 0x1e0454u;
    // NOP
label_1e0458:
    // 0x1e0458: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x1e0458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_1e045c:
    // 0x1e045c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1e0460:
    if (ctx->pc == 0x1E0460u) {
        ctx->pc = 0x1E0460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E045Cu;
        // 0x1e0460: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0464u;
        goto label_1e0464;
    }
    ctx->pc = 0x1E045Cu;
    {
        const bool branch_taken_0x1e045c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E0460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E045Cu;
        // 0x1e0460: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e045c) {
            ctx->pc = 0x1E046Cu;
            goto label_1e046c;
        }
    }
    ctx->pc = 0x1E0464u;
label_1e0464:
    // 0x1e0464: 0xae020070  sw          $v0, 0x70($s0)
    ctx->pc = 0x1e0464u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
label_1e0468:
    // 0x1e0468: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1e0468u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e046c:
    // 0x1e046c: 0x1860000e  blez        $v1, . + 4 + (0xE << 2)
label_1e0470:
    if (ctx->pc == 0x1E0470u) {
        ctx->pc = 0x1E0474u;
        goto label_1e0474;
    }
    ctx->pc = 0x1E046Cu;
    {
        const bool branch_taken_0x1e046c = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1e046c) {
            ctx->pc = 0x1E04A8u;
            goto label_1e04a8;
        }
    }
    ctx->pc = 0x1E0474u;
label_1e0474:
    // 0x1e0474: 0x92020069  lbu         $v0, 0x69($s0)
    ctx->pc = 0x1e0474u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 105)));
label_1e0478:
    // 0x1e0478: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x1e0478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
label_1e047c:
    // 0x1e047c: 0xa2020068  sb          $v0, 0x68($s0)
    ctx->pc = 0x1e047cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 104), (uint8_t)GPR_U32(ctx, 2));
label_1e0480:
    // 0x1e0480: 0x10000009  b           . + 4 + (0x9 << 2)
label_1e0484:
    if (ctx->pc == 0x1E0484u) {
        ctx->pc = 0x1E0484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0480u;
        // 0x1e0484: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0488u;
        goto label_1e0488;
    }
    ctx->pc = 0x1E0480u;
    {
        const bool branch_taken_0x1e0480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0480u;
        // 0x1e0484: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0480) {
            ctx->pc = 0x1E04A8u;
            goto label_1e04a8;
        }
    }
    ctx->pc = 0x1E0488u;
label_1e0488:
    // 0x1e0488: 0x8c43a308  lw          $v1, -0x5CF8($v0)
    ctx->pc = 0x1e0488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943496)));
label_1e048c:
    // 0x1e048c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_1e0490:
    if (ctx->pc == 0x1E0490u) {
        ctx->pc = 0x1E0490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E048Cu;
        // 0x1e0490: 0x3c020039  lui         $v0, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0494u;
        goto label_1e0494;
    }
    ctx->pc = 0x1E048Cu;
    {
        const bool branch_taken_0x1e048c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E048Cu;
        // 0x1e0490: 0x3c020039  lui         $v0, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e048c) {
            ctx->pc = 0x1E04A8u;
            goto label_1e04a8;
        }
    }
    ctx->pc = 0x1E0494u;
label_1e0494:
    // 0x1e0494: 0x92050068  lbu         $a1, 0x68($s0)
    ctx->pc = 0x1e0494u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 104)));
label_1e0498:
    // 0x1e0498: 0x9044a300  lbu         $a0, -0x5D00($v0)
    ctx->pc = 0x1e0498u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294943488)));
label_1e049c:
    // 0x1e049c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1e049cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e04a0:
    // 0x1e04a0: 0x60f809  jalr        $v1
label_1e04a4:
    if (ctx->pc == 0x1E04A4u) {
        ctx->pc = 0x1E04A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E04A0u;
        // 0x1e04a4: 0x30a5000f  andi        $a1, $a1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E04A8u;
        goto label_1e04a8;
    }
    ctx->pc = 0x1E04A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E04A8u);
        ctx->pc = 0x1E04A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E04A0u;
        // 0x1e04a4: 0x30a5000f  andi        $a1, $a1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E04A0u, 0x1E04A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E04A8u;
label_1e04a8:
    // 0x1e04a8: 0x1260001c  beqz        $s3, . + 4 + (0x1C << 2)
label_1e04ac:
    if (ctx->pc == 0x1E04ACu) {
        ctx->pc = 0x1E04ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E04A8u;
        // 0x1e04ac: 0x3c030039  lui         $v1, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E04B0u;
        goto label_1e04b0;
    }
    ctx->pc = 0x1E04A8u;
    {
        const bool branch_taken_0x1e04a8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E04ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E04A8u;
        // 0x1e04ac: 0x3c030039  lui         $v1, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e04a8) {
            ctx->pc = 0x1E051Cu;
            goto label_1e051c;
        }
    }
    ctx->pc = 0x1E04B0u;
label_1e04b0:
    // 0x1e04b0: 0x92040068  lbu         $a0, 0x68($s0)
    ctx->pc = 0x1e04b0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 104)));
label_1e04b4:
    // 0x1e04b4: 0x2463ab14  addiu       $v1, $v1, -0x54EC
    ctx->pc = 0x1e04b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945556));
label_1e04b8:
    // 0x1e04b8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1e04b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1e04bc:
    // 0x1e04bc: 0x1044000c  beq         $v0, $a0, . + 4 + (0xC << 2)
label_1e04c0:
    if (ctx->pc == 0x1E04C0u) {
        ctx->pc = 0x1E04C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E04BCu;
        // 0x1e04c0: 0x3c050039  lui         $a1, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E04C4u;
        goto label_1e04c4;
    }
    ctx->pc = 0x1E04BCu;
    {
        const bool branch_taken_0x1e04bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1E04C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E04BCu;
        // 0x1e04c0: 0x3c050039  lui         $a1, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e04bc) {
            ctx->pc = 0x1E04F0u;
            goto label_1e04f0;
        }
    }
    ctx->pc = 0x1E04C4u;
label_1e04c4:
    // 0x1e04c4: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1e04c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_1e04c8:
    // 0x1e04c8: 0x24a3ab10  addiu       $v1, $a1, -0x54F0
    ctx->pc = 0x1e04c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945552));
label_1e04cc:
    // 0x1e04cc: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x1e04ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
label_1e04d0:
    // 0x1e04d0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1e04d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1e04d4:
    // 0x1e04d4: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x1e04d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
label_1e04d8:
    // 0x1e04d8: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x1e04d8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
label_1e04dc:
    // 0x1e04dc: 0xa024a310  sb          $a0, -0x5CF0($at)
    ctx->pc = 0x1e04dcu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294943504), (uint8_t)GPR_U32(ctx, 4));
label_1e04e0:
    // 0x1e04e0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e04e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1e04e4:
    // 0x1e04e4: 0x10000003  b           . + 4 + (0x3 << 2)
label_1e04e8:
    if (ctx->pc == 0x1E04E8u) {
        ctx->pc = 0x1E04E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E04E4u;
        // 0x1e04e8: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E04ECu;
        goto label_1e04ec;
    }
    ctx->pc = 0x1E04E4u;
    {
        const bool branch_taken_0x1e04e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E04E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E04E4u;
        // 0x1e04e8: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e04e4) {
            ctx->pc = 0x1E04F4u;
            goto label_1e04f4;
        }
    }
    ctx->pc = 0x1E04ECu;
label_1e04ec:
    // 0x1e04ec: 0x0  nop
    ctx->pc = 0x1e04ecu;
    // NOP
label_1e04f0:
    // 0x1e04f0: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x1e04f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
label_1e04f4:
    // 0x1e04f4: 0x24a5ab10  addiu       $a1, $a1, -0x54F0
    ctx->pc = 0x1e04f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945552));
label_1e04f8:
    // 0x1e04f8: 0x24c3a310  addiu       $v1, $a2, -0x5CF0
    ctx->pc = 0x1e04f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943504));
label_1e04fc:
    // 0x1e04fc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1e04fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1e0500:
    // 0x1e0500: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1e0500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e0504:
    // 0x1e0504: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e0504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1e0508:
    // 0x1e0508: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1e0508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e050c:
    // 0x1e050c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e050cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1e0510:
    // 0x1e0510: 0xa0920000  sb          $s2, 0x0($a0)
    ctx->pc = 0x1e0510u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 18));
label_1e0514:
    // 0x1e0514: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1e0514u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_1e0518:
    // 0x1e0518: 0xa0710000  sb          $s1, 0x0($v1)
    ctx->pc = 0x1e0518u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 17));
label_1e051c:
    // 0x1e051c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e051cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e0520:
    // 0x1e0520: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e0520u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1e0524:
    // 0x1e0524: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e0524u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e0528:
    // 0x1e0528: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1e0528u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1e052c:
    // 0x1e052c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e052cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1e0530:
    // 0x1e0530: 0x3e00008  jr          $ra
label_1e0534:
    if (ctx->pc == 0x1E0534u) {
        ctx->pc = 0x1E0534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0530u;
        // 0x1e0534: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0538u;
        goto label_fallthrough_0x1e0530;
    }
    ctx->pc = 0x1E0530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0530u;
        // 0x1e0534: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e0530:
    ctx->pc = 0x1E0538u;
}
