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

// Function: FUN_00112360
// Address: 0x112360 - 0x1124f0
void FUN_00112360_0x112360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00112360_0x112360");
#endif

    switch (ctx->pc) {
        case 0x112360u: goto label_112360;
        case 0x112364u: goto label_112364;
        case 0x112368u: goto label_112368;
        case 0x11236cu: goto label_11236c;
        case 0x112370u: goto label_112370;
        case 0x112374u: goto label_112374;
        case 0x112378u: goto label_112378;
        case 0x11237cu: goto label_11237c;
        case 0x112380u: goto label_112380;
        case 0x112384u: goto label_112384;
        case 0x112388u: goto label_112388;
        case 0x11238cu: goto label_11238c;
        case 0x112390u: goto label_112390;
        case 0x112394u: goto label_112394;
        case 0x112398u: goto label_112398;
        case 0x11239cu: goto label_11239c;
        case 0x1123a0u: goto label_1123a0;
        case 0x1123a4u: goto label_1123a4;
        case 0x1123a8u: goto label_1123a8;
        case 0x1123acu: goto label_1123ac;
        case 0x1123b0u: goto label_1123b0;
        case 0x1123b4u: goto label_1123b4;
        case 0x1123b8u: goto label_1123b8;
        case 0x1123bcu: goto label_1123bc;
        case 0x1123c0u: goto label_1123c0;
        case 0x1123c4u: goto label_1123c4;
        case 0x1123c8u: goto label_1123c8;
        case 0x1123ccu: goto label_1123cc;
        case 0x1123d0u: goto label_1123d0;
        case 0x1123d4u: goto label_1123d4;
        case 0x1123d8u: goto label_1123d8;
        case 0x1123dcu: goto label_1123dc;
        case 0x1123e0u: goto label_1123e0;
        case 0x1123e4u: goto label_1123e4;
        case 0x1123e8u: goto label_1123e8;
        case 0x1123ecu: goto label_1123ec;
        case 0x1123f0u: goto label_1123f0;
        case 0x1123f4u: goto label_1123f4;
        case 0x1123f8u: goto label_1123f8;
        case 0x1123fcu: goto label_1123fc;
        case 0x112400u: goto label_112400;
        case 0x112404u: goto label_112404;
        case 0x112408u: goto label_112408;
        case 0x11240cu: goto label_11240c;
        case 0x112410u: goto label_112410;
        case 0x112414u: goto label_112414;
        case 0x112418u: goto label_112418;
        case 0x11241cu: goto label_11241c;
        case 0x112420u: goto label_112420;
        case 0x112424u: goto label_112424;
        case 0x112428u: goto label_112428;
        case 0x11242cu: goto label_11242c;
        case 0x112430u: goto label_112430;
        case 0x112434u: goto label_112434;
        case 0x112438u: goto label_112438;
        case 0x11243cu: goto label_11243c;
        case 0x112440u: goto label_112440;
        case 0x112444u: goto label_112444;
        case 0x112448u: goto label_112448;
        case 0x11244cu: goto label_11244c;
        case 0x112450u: goto label_112450;
        case 0x112454u: goto label_112454;
        case 0x112458u: goto label_112458;
        case 0x11245cu: goto label_11245c;
        case 0x112460u: goto label_112460;
        case 0x112464u: goto label_112464;
        case 0x112468u: goto label_112468;
        case 0x11246cu: goto label_11246c;
        case 0x112470u: goto label_112470;
        case 0x112474u: goto label_112474;
        case 0x112478u: goto label_112478;
        case 0x11247cu: goto label_11247c;
        case 0x112480u: goto label_112480;
        case 0x112484u: goto label_112484;
        case 0x112488u: goto label_112488;
        case 0x11248cu: goto label_11248c;
        case 0x112490u: goto label_112490;
        case 0x112494u: goto label_112494;
        case 0x112498u: goto label_112498;
        case 0x11249cu: goto label_11249c;
        case 0x1124a0u: goto label_1124a0;
        case 0x1124a4u: goto label_1124a4;
        case 0x1124a8u: goto label_1124a8;
        case 0x1124acu: goto label_1124ac;
        case 0x1124b0u: goto label_1124b0;
        case 0x1124b4u: goto label_1124b4;
        case 0x1124b8u: goto label_1124b8;
        case 0x1124bcu: goto label_1124bc;
        case 0x1124c0u: goto label_1124c0;
        case 0x1124c4u: goto label_1124c4;
        case 0x1124c8u: goto label_1124c8;
        case 0x1124ccu: goto label_1124cc;
        case 0x1124d0u: goto label_1124d0;
        case 0x1124d4u: goto label_1124d4;
        case 0x1124d8u: goto label_1124d8;
        case 0x1124dcu: goto label_1124dc;
        case 0x1124e0u: goto label_1124e0;
        case 0x1124e4u: goto label_1124e4;
        case 0x1124e8u: goto label_1124e8;
        case 0x1124ecu: goto label_1124ec;
        default: break;
    }

    ctx->pc = 0x112360u;

label_112360:
    // 0x112360: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x112360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_112364:
    // 0x112364: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x112364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_112368:
    // 0x112368: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x112368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_11236c:
    // 0x11236c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x11236cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_112370:
    // 0x112370: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x112370u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_112374:
    // 0x112374: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x112374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_112378:
    // 0x112378: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x112378u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11237c:
    // 0x11237c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11237cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_112380:
    // 0x112380: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x112380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_112384:
    // 0x112384: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x112384u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_112388:
    // 0x112388: 0x1000000e  b           . + 4 + (0xE << 2)
label_11238c:
    if (ctx->pc == 0x11238Cu) {
        ctx->pc = 0x11238Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112388u;
        // 0x11238c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112390u;
        goto label_112390;
    }
    ctx->pc = 0x112388u;
    {
        const bool branch_taken_0x112388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11238Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112388u;
        // 0x11238c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112388) {
            ctx->pc = 0x1123C4u;
            goto label_1123c4;
        }
    }
    ctx->pc = 0x112390u;
label_112390:
    // 0x112390: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x112390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_112394:
    // 0x112394: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x112394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_112398:
    // 0x112398: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x112398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_11239c:
    // 0x11239c: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x11239cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_1123a0:
    // 0x1123a0: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x1123a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_1123a4:
    // 0x1123a4: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x1123a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
label_1123a8:
    // 0x1123a8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1123a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1123ac:
    // 0x1123ac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1123acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1123b0:
    // 0x1123b0: 0x8c642cd8  lw          $a0, 0x2CD8($v1)
    ctx->pc = 0x1123b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_1123b4:
    // 0x1123b4: 0xac800224  sw          $zero, 0x224($a0)
    ctx->pc = 0x1123b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 548), GPR_U32(ctx, 0));
label_1123b8:
    // 0x1123b8: 0x8c830224  lw          $v1, 0x224($a0)
    ctx->pc = 0x1123b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 548)));
label_1123bc:
    // 0x1123bc: 0x3463002c  ori         $v1, $v1, 0x2C
    ctx->pc = 0x1123bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)44);
label_1123c0:
    // 0x1123c0: 0xac830224  sw          $v1, 0x224($a0)
    ctx->pc = 0x1123c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 548), GPR_U32(ctx, 3));
label_1123c4:
    // 0x1123c4: 0x0  nop
    ctx->pc = 0x1123c4u;
    // NOP
label_1123c8:
    // 0x1123c8: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x1123c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_1123cc:
    // 0x1123cc: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x1123ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1123d0:
    // 0x1123d0: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
label_1123d4:
    if (ctx->pc == 0x1123D4u) {
        ctx->pc = 0x1123D8u;
        goto label_1123d8;
    }
    ctx->pc = 0x1123D0u;
    {
        const bool branch_taken_0x1123d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1123d0) {
            ctx->pc = 0x112390u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_112390;
        }
    }
    ctx->pc = 0x1123D8u;
label_1123d8:
    // 0x1123d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1123d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1123dc:
    // 0x1123dc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1123dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1123e0:
    // 0x1123e0: 0x1000000d  b           . + 4 + (0xD << 2)
label_1123e4:
    if (ctx->pc == 0x1123E4u) {
        ctx->pc = 0x1123E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1123E0u;
        // 0x1123e4: 0x2404ffdf  addiu       $a0, $zero, -0x21 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1123E8u;
        goto label_1123e8;
    }
    ctx->pc = 0x1123E0u;
    {
        const bool branch_taken_0x1123e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1123E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1123E0u;
        // 0x1123e4: 0x2404ffdf  addiu       $a0, $zero, -0x21 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1123e0) {
            ctx->pc = 0x112418u;
            goto label_112418;
        }
    }
    ctx->pc = 0x1123E8u;
label_1123e8:
    // 0x1123e8: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1123e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1123ec:
    // 0x1123ec: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1123ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1123f0:
    // 0x1123f0: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x1123f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1123f4:
    // 0x1123f4: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x1123f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_1123f8:
    // 0x1123f8: 0x84a50000  lh          $a1, 0x0($a1)
    ctx->pc = 0x1123f8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_1123fc:
    // 0x1123fc: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x1123fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
label_112400:
    // 0x112400: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x112400u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_112404:
    // 0x112404: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x112404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_112408:
    // 0x112408: 0x8c652cd8  lw          $a1, 0x2CD8($v1)
    ctx->pc = 0x112408u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_11240c:
    // 0x11240c: 0x8ca30224  lw          $v1, 0x224($a1)
    ctx->pc = 0x11240cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 548)));
label_112410:
    // 0x112410: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x112410u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_112414:
    // 0x112414: 0xaca30224  sw          $v1, 0x224($a1)
    ctx->pc = 0x112414u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 548), GPR_U32(ctx, 3));
label_112418:
    // 0x112418: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x112418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_11241c:
    // 0x11241c: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x11241cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_112420:
    // 0x112420: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
label_112424:
    if (ctx->pc == 0x112424u) {
        ctx->pc = 0x112428u;
        goto label_112428;
    }
    ctx->pc = 0x112420u;
    {
        const bool branch_taken_0x112420 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x112420) {
            ctx->pc = 0x1123E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1123e8;
        }
    }
    ctx->pc = 0x112428u;
label_112428:
    // 0x112428: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x112428u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_11242c:
    // 0x11242c: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x11242cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_112430:
    // 0x112430: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
label_112434:
    if (ctx->pc == 0x112434u) {
        ctx->pc = 0x112434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112430u;
        // 0x112434: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112438u;
        goto label_112438;
    }
    ctx->pc = 0x112430u;
    {
        const bool branch_taken_0x112430 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x112434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112430u;
        // 0x112434: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112430) {
            ctx->pc = 0x112480u;
            goto label_112480;
        }
    }
    ctx->pc = 0x112438u;
label_112438:
    // 0x112438: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x112438u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11243c:
    // 0x11243c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x11243cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_112440:
    // 0x112440: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x112440u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_112444:
    // 0x112444: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x112444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_112448:
    // 0x112448: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x112448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_11244c:
    // 0x11244c: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x11244cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_112450:
    // 0x112450: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x112450u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_112454:
    // 0x112454: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x112454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_112458:
    // 0x112458: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x112458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_11245c:
    // 0x11245c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x11245cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_112460:
    // 0x112460: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x112460u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_112464:
    // 0x112464: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x112464u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_112468:
    // 0x112468: 0x320f809  jalr        $t9
label_11246c:
    if (ctx->pc == 0x11246Cu) {
        ctx->pc = 0x11246Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112468u;
        // 0x11246c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112470u;
        goto label_112470;
    }
    ctx->pc = 0x112468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x112470u);
        ctx->pc = 0x11246Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112468u;
        // 0x11246c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112468u, 0x112470u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x112470u;
label_112470:
    // 0x112470: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x112470u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_112474:
    // 0x112474: 0x232182a  slt         $v1, $s1, $s2
    ctx->pc = 0x112474u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_112478:
    // 0x112478: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
label_11247c:
    if (ctx->pc == 0x11247Cu) {
        ctx->pc = 0x11247Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112478u;
        // 0x11247c: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112480u;
        goto label_112480;
    }
    ctx->pc = 0x112478u;
    {
        const bool branch_taken_0x112478 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11247Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112478u;
        // 0x11247c: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112478) {
            ctx->pc = 0x11243Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11243c;
        }
    }
    ctx->pc = 0x112480u;
label_112480:
    // 0x112480: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x112480u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_112484:
    // 0x112484: 0x1000000d  b           . + 4 + (0xD << 2)
label_112488:
    if (ctx->pc == 0x112488u) {
        ctx->pc = 0x112488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112484u;
        // 0x112488: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11248Cu;
        goto label_11248c;
    }
    ctx->pc = 0x112484u;
    {
        const bool branch_taken_0x112484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112484u;
        // 0x112488: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112484) {
            ctx->pc = 0x1124BCu;
            goto label_1124bc;
        }
    }
    ctx->pc = 0x11248Cu;
label_11248c:
    // 0x11248c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x11248cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_112490:
    // 0x112490: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x112490u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_112494:
    // 0x112494: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x112494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_112498:
    // 0x112498: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x112498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_11249c:
    // 0x11249c: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x11249cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1124a0:
    // 0x1124a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1124a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1124a4:
    // 0x1124a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1124a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1124a8:
    // 0x1124a8: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x1124a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_1124ac:
    // 0x1124ac: 0xc043da0  jal         func_10F680
label_1124b0:
    if (ctx->pc == 0x1124B0u) {
        ctx->pc = 0x1124B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1124ACu;
        // 0x1124b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1124B4u;
        goto label_1124b4;
    }
    ctx->pc = 0x1124ACu;
    SET_GPR_U32(ctx, 31, 0x1124B4u);
    ctx->pc = 0x1124B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1124ACu;
    // 0x1124b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F680u, 0x1124ACu, 0x1124B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1124B4u;
label_1124b4:
    // 0x1124b4: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x1124b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_1124b8:
    // 0x1124b8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1124b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1124bc:
    // 0x1124bc: 0x0  nop
    ctx->pc = 0x1124bcu;
    // NOP
label_1124c0:
    // 0x1124c0: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x1124c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_1124c4:
    // 0x1124c4: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x1124c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1124c8:
    // 0x1124c8: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
label_1124cc:
    if (ctx->pc == 0x1124CCu) {
        ctx->pc = 0x1124D0u;
        goto label_1124d0;
    }
    ctx->pc = 0x1124C8u;
    {
        const bool branch_taken_0x1124c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1124c8) {
            ctx->pc = 0x11248Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11248c;
        }
    }
    ctx->pc = 0x1124D0u;
label_1124d0:
    // 0x1124d0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1124d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1124d4:
    // 0x1124d4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1124d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1124d8:
    // 0x1124d8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1124d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1124dc:
    // 0x1124dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1124dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1124e0:
    // 0x1124e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1124e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1124e4:
    // 0x1124e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1124e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1124e8:
    // 0x1124e8: 0x3e00008  jr          $ra
label_1124ec:
    if (ctx->pc == 0x1124ECu) {
        ctx->pc = 0x1124ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1124E8u;
        // 0x1124ec: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1124F0u;
        goto label_fallthrough_0x1124e8;
    }
    ctx->pc = 0x1124E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1124ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1124E8u;
        // 0x1124ec: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1124E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1124e8:
    ctx->pc = 0x1124F0u;
}
