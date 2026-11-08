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

// Function: FUN_001fc210
// Address: 0x1fc210 - 0x1fd3dc
void FUN_001fc210_0x1fc210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001fc210_0x1fc210");
#endif

    switch (ctx->pc) {
        case 0x1fc280u: goto label_1fc280;
        case 0x1fc338u: goto label_1fc338;
        case 0x1fc380u: goto label_1fc380;
        case 0x1fc430u: goto label_1fc430;
        case 0x1fc448u: goto label_1fc448;
        case 0x1fc488u: goto label_1fc488;
        case 0x1fc498u: goto label_1fc498;
        case 0x1fc4a8u: goto label_1fc4a8;
        case 0x1fc4b4u: goto label_1fc4b4;
        case 0x1fc4c4u: goto label_1fc4c4;
        case 0x1fc4d0u: goto label_1fc4d0;
        case 0x1fc4dcu: goto label_1fc4dc;
        case 0x1fc4ecu: goto label_1fc4ec;
        case 0x1fc4fcu: goto label_1fc4fc;
        case 0x1fc508u: goto label_1fc508;
        case 0x1fc540u: goto label_1fc540;
        case 0x1fc680u: goto label_1fc680;
        case 0x1fc6a8u: goto label_1fc6a8;
        case 0x1fc6bcu: goto label_1fc6bc;
        case 0x1fc724u: goto label_1fc724;
        case 0x1fc738u: goto label_1fc738;
        case 0x1fc750u: goto label_1fc750;
        case 0x1fc76cu: goto label_1fc76c;
        case 0x1fc7a0u: goto label_1fc7a0;
        case 0x1fc7b0u: goto label_1fc7b0;
        case 0x1fc7c8u: goto label_1fc7c8;
        case 0x1fc7f4u: goto label_1fc7f4;
        case 0x1fc82cu: goto label_1fc82c;
        case 0x1fc838u: goto label_1fc838;
        case 0x1fc844u: goto label_1fc844;
        case 0x1fc854u: goto label_1fc854;
        case 0x1fc89cu: goto label_1fc89c;
        case 0x1fc8acu: goto label_1fc8ac;
        case 0x1fc8c0u: goto label_1fc8c0;
        case 0x1fc8ccu: goto label_1fc8cc;
        case 0x1fc90cu: goto label_1fc90c;
        case 0x1fc918u: goto label_1fc918;
        case 0x1fc920u: goto label_1fc920;
        case 0x1fc930u: goto label_1fc930;
        case 0x1fc944u: goto label_1fc944;
        case 0x1fc950u: goto label_1fc950;
        case 0x1fc95cu: goto label_1fc95c;
        case 0x1fc968u: goto label_1fc968;
        case 0x1fc984u: goto label_1fc984;
        case 0x1fc99cu: goto label_1fc99c;
        case 0x1fc9a8u: goto label_1fc9a8;
        case 0x1fc9ecu: goto label_1fc9ec;
        case 0x1fc9f8u: goto label_1fc9f8;
        case 0x1fca0cu: goto label_1fca0c;
        case 0x1fca18u: goto label_1fca18;
        case 0x1fca24u: goto label_1fca24;
        case 0x1fca30u: goto label_1fca30;
        case 0x1fca58u: goto label_1fca58;
        case 0x1fca64u: goto label_1fca64;
        case 0x1fca7cu: goto label_1fca7c;
        case 0x1fca88u: goto label_1fca88;
        case 0x1fca98u: goto label_1fca98;
        case 0x1fcb24u: goto label_1fcb24;
        case 0x1fcb30u: goto label_1fcb30;
        case 0x1fcb50u: goto label_1fcb50;
        case 0x1fcb60u: goto label_1fcb60;
        case 0x1fcb70u: goto label_1fcb70;
        case 0x1fcb84u: goto label_1fcb84;
        case 0x1fcb8cu: goto label_1fcb8c;
        case 0x1fcb98u: goto label_1fcb98;
        case 0x1fcba4u: goto label_1fcba4;
        case 0x1fcbb0u: goto label_1fcbb0;
        case 0x1fcbd0u: goto label_1fcbd0;
        case 0x1fcbe0u: goto label_1fcbe0;
        case 0x1fcbf4u: goto label_1fcbf4;
        case 0x1fcc1cu: goto label_1fcc1c;
        case 0x1fccf0u: goto label_1fccf0;
        case 0x1fcd70u: goto label_1fcd70;
        case 0x1fcd84u: goto label_1fcd84;
        case 0x1fcd94u: goto label_1fcd94;
        case 0x1fcdb0u: goto label_1fcdb0;
        case 0x1fcdc4u: goto label_1fcdc4;
        case 0x1fcdd4u: goto label_1fcdd4;
        case 0x1fcdf0u: goto label_1fcdf0;
        case 0x1fce6cu: goto label_1fce6c;
        case 0x1fcefcu: goto label_1fcefc;
        case 0x1fcf18u: goto label_1fcf18;
        case 0x1fcf30u: goto label_1fcf30;
        case 0x1fcf4cu: goto label_1fcf4c;
        case 0x1fcf70u: goto label_1fcf70;
        case 0x1fcfb0u: goto label_1fcfb0;
        case 0x1fcfc0u: goto label_1fcfc0;
        case 0x1fd008u: goto label_1fd008;
        case 0x1fd028u: goto label_1fd028;
        case 0x1fd04cu: goto label_1fd04c;
        case 0x1fd05cu: goto label_1fd05c;
        case 0x1fd070u: goto label_1fd070;
        case 0x1fd084u: goto label_1fd084;
        case 0x1fd0a8u: goto label_1fd0a8;
        case 0x1fd0c8u: goto label_1fd0c8;
        case 0x1fd0e0u: goto label_1fd0e0;
        case 0x1fd0f4u: goto label_1fd0f4;
        case 0x1fd104u: goto label_1fd104;
        case 0x1fd118u: goto label_1fd118;
        case 0x1fd134u: goto label_1fd134;
        case 0x1fd144u: goto label_1fd144;
        case 0x1fd1bcu: goto label_1fd1bc;
        case 0x1fd1ccu: goto label_1fd1cc;
        case 0x1fd250u: goto label_1fd250;
        case 0x1fd264u: goto label_1fd264;
        case 0x1fd278u: goto label_1fd278;
        case 0x1fd2a0u: goto label_1fd2a0;
        case 0x1fd2b0u: goto label_1fd2b0;
        case 0x1fd2e0u: goto label_1fd2e0;
        case 0x1fd320u: goto label_1fd320;
        case 0x1fd34cu: goto label_1fd34c;
        case 0x1fd370u: goto label_1fd370;
        case 0x1fd37cu: goto label_1fd37c;
        case 0x1fd390u: goto label_1fd390;
        default: break;
    }

    ctx->pc = 0x1fc210u;

    // 0x1fc210: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x1fc210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x1fc214: 0xffbe00e0  sd          $fp, 0xE0($sp)
    ctx->pc = 0x1fc214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 30));
    // 0x1fc218: 0xffb600c0  sd          $s6, 0xC0($sp)
    ctx->pc = 0x1fc218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 22));
    // 0x1fc21c: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x1fc21cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc220: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x1fc220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x1fc224: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1fc224u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc228: 0xffbf00f0  sd          $ra, 0xF0($sp)
    ctx->pc = 0x1fc228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
    // 0x1fc22c: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x1fc22cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc230: 0xffb700d0  sd          $s7, 0xD0($sp)
    ctx->pc = 0x1fc230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 23));
    // 0x1fc234: 0xffb500b0  sd          $s5, 0xB0($sp)
    ctx->pc = 0x1fc234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 21));
    // 0x1fc238: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x1fc238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x1fc23c: 0xffb30090  sd          $s3, 0x90($sp)
    ctx->pc = 0x1fc23cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 19));
    // 0x1fc240: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x1fc240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x1fc244: 0xffb10070  sd          $s1, 0x70($sp)
    ctx->pc = 0x1fc244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 17));
    // 0x1fc248: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x1fc248u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x1fc24c: 0x8fcb0040  lw          $t3, 0x40($fp)
    ctx->pc = 0x1fc24cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 64)));
    // 0x1fc250: 0xafa7000c  sw          $a3, 0xC($sp)
    ctx->pc = 0x1fc250u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
    // 0x1fc254: 0xafa80010  sw          $t0, 0x10($sp)
    ctx->pc = 0x1fc254u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 8));
    // 0x1fc258: 0x1160000a  beqz        $t3, . + 4 + (0xA << 2)
    ctx->pc = 0x1FC258u;
    {
        const bool branch_taken_0x1fc258 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC258u;
        // 0x1fc25c: 0xafaa0014  sw          $t2, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc258) {
            ctx->pc = 0x1FC284u;
            goto label_1fc284;
        }
    }
    ctx->pc = 0x1FC260u;
    // 0x1fc260: 0x8fc60044  lw          $a2, 0x44($fp)
    ctx->pc = 0x1fc260u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 68)));
    // 0x1fc264: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fc264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fc268: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x1fc268u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc26c: 0xad660004  sw          $a2, 0x4($t3)
    ctx->pc = 0x1fc26cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 6));
    // 0x1fc270: 0x8fc20044  lw          $v0, 0x44($fp)
    ctx->pc = 0x1fc270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 68)));
    // 0x1fc274: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x1fc274u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x1fc278: 0xc07feca  jal         func_1FFB28
    ctx->pc = 0x1FC278u;
    SET_GPR_U32(ctx, 31, 0x1FC280u);
    ctx->pc = 0x1FC27Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC278u;
    // 0x1fc27c: 0xad630008  sw          $v1, 0x8($t3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFB28u, 0x1FC278u, 0x1FC280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC280u;
label_1fc280:
    // 0x1fc280: 0xafc00040  sw          $zero, 0x40($fp)
    ctx->pc = 0x1fc280u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 64), GPR_U32(ctx, 0));
label_1fc284:
    // 0x1fc284: 0x16103e  dsrl32      $v0, $s6, 0
    ctx->pc = 0x1fc284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) >> (32 + 0));
    // 0x1fc288: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1fc288u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1fc28c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1fc28cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1fc290: 0x483000c  bgezl       $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x1FC290u;
    {
        const bool branch_taken_0x1fc290 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x1fc290) {
            ctx->pc = 0x1FC294u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC290u;
            // 0x1fc294: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC2C4u;
            goto label_1fc2c4;
        }
    }
    ctx->pc = 0x1FC298u;
    // 0x1fc298: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x1fc298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x1fc29c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1fc29cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1fc2a0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1fc2a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1fc2a4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1fc2a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1fc2a8: 0x2c3b024  and         $s6, $s6, $v1
    ctx->pc = 0x1fc2a8u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) & GPR_U64(ctx, 3));
    // 0x1fc2ac: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1fc2acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1fc2b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fc2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fc2b4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1fc2b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1fc2b8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1fc2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1fc2bc: 0x2c2b025  or          $s6, $s6, $v0
    ctx->pc = 0x1fc2bcu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | GPR_U64(ctx, 2));
    // 0x1fc2c0: 0x16103e  dsrl32      $v0, $s6, 0
    ctx->pc = 0x1fc2c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) >> (32 + 0));
label_1fc2c4:
    // 0x1fc2c4: 0x2803c  dsll32      $s0, $v0, 0
    ctx->pc = 0x1fc2c4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1fc2c8: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x1fc2c8u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x1fc2cc: 0x3c037ff0  lui         $v1, 0x7FF0
    ctx->pc = 0x1fc2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
    // 0x1fc2d0: 0x2031024  and         $v0, $s0, $v1
    ctx->pc = 0x1fc2d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x1fc2d4: 0x14430016  bne         $v0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1FC2D4u;
    {
        const bool branch_taken_0x1fc2d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1FC2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC2D4u;
        // 0x1fc2d8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc2d4) {
            ctx->pc = 0x1FC330u;
            goto label_1fc330;
        }
    }
    ctx->pc = 0x1FC2DCu;
    // 0x1fc2dc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1fc2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fc2e0: 0x2403270f  addiu       $v1, $zero, 0x270F
    ctx->pc = 0x1fc2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
    // 0x1fc2e4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1fc2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fc2e8: 0x2133a  dsrl        $v0, $v0, 12
    ctx->pc = 0x1fc2e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
    // 0x1fc2ec: 0x2c21024  and         $v0, $s6, $v0
    ctx->pc = 0x1fc2ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & GPR_U64(ctx, 2));
    // 0x1fc2f0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FC2F0u;
    {
        const bool branch_taken_0x1fc2f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FC2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC2F0u;
        // 0x1fc2f4: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc2f0) {
            ctx->pc = 0x1FC304u;
            goto label_1fc304;
        }
    }
    ctx->pc = 0x1FC2F8u;
    // 0x1fc2f8: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1fc2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1fc2fc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FC2FCu;
    {
        const bool branch_taken_0x1fc2fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC2FCu;
        // 0x1fc300: 0x24554ee0  addiu       $s5, $v0, 0x4EE0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 20192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc2fc) {
            ctx->pc = 0x1FC30Cu;
            goto label_1fc30c;
        }
    }
    ctx->pc = 0x1FC304u;
label_1fc304:
    // 0x1fc304: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1fc304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1fc308: 0x24554ef0  addiu       $s5, $v0, 0x4EF0
    ctx->pc = 0x1fc308u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 20208));
label_1fc30c:
    // 0x1fc30c: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1fc30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1fc310: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1FC310u;
    {
        const bool branch_taken_0x1fc310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC310u;
        // 0x1fc314: 0x26a40008  addiu       $a0, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc310) {
            ctx->pc = 0x1FC368u;
            goto label_1fc368;
        }
    }
    ctx->pc = 0x1FC318u;
    // 0x1fc318: 0x82a20003  lb          $v0, 0x3($s5)
    ctx->pc = 0x1fc318u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 3)));
    // 0x1fc31c: 0x26a30003  addiu       $v1, $s5, 0x3
    ctx->pc = 0x1fc31cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 3));
    // 0x1fc320: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x1fc320u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x1fc324: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1fc324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1fc328: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1FC328u;
    {
        const bool branch_taken_0x1fc328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC328u;
        // 0x1fc32c: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc328) {
            ctx->pc = 0x1FC368u;
            goto label_1fc368;
        }
    }
    ctx->pc = 0x1FC330u;
label_1fc330:
    // 0x1fc330: 0xc082178  jal         func_2085E0
    ctx->pc = 0x1FC330u;
    SET_GPR_U32(ctx, 31, 0x1FC338u);
    ctx->pc = 0x1FC334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC330u;
    // 0x1fc334: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2085E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2085E0u, 0x1FC330u, 0x1FC338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC338u;
label_1fc338:
    // 0x1fc338: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1FC338u;
    {
        const bool branch_taken_0x1fc338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FC33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC338u;
        // 0x1fc33c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc338) {
            ctx->pc = 0x1FC370u;
            goto label_1fc370;
        }
    }
    ctx->pc = 0x1FC340u;
    // 0x1fc340: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1fc340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fc344: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fc344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fc348: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1fc348u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1fc34c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1fc34cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1fc350: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1fc350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1fc354: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FC354u;
    {
        const bool branch_taken_0x1fc354 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC354u;
        // 0x1fc358: 0x24754ef8  addiu       $s5, $v1, 0x4EF8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 20216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc354) {
            ctx->pc = 0x1FC368u;
            goto label_1fc368;
        }
    }
    ctx->pc = 0x1FC35Cu;
    // 0x1fc35c: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x1fc35cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1fc360: 0x26a20001  addiu       $v0, $s5, 0x1
    ctx->pc = 0x1fc360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1fc364: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1fc364u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1fc368:
    // 0x1fc368: 0x10000410  b           . + 4 + (0x410 << 2)
    ctx->pc = 0x1FC368u;
    {
        const bool branch_taken_0x1fc368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC368u;
        // 0x1fc36c: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc368) {
            ctx->pc = 0x1FD3ACu;
            goto label_1fd3ac;
        }
    }
    ctx->pc = 0x1FC370u;
label_1fc370:
    // 0x1fc370: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1fc370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc374: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1fc374u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc378: 0xc0801fa  jal         func_2007E8
    ctx->pc = 0x1FC378u;
    SET_GPR_U32(ctx, 31, 0x1FC380u);
    ctx->pc = 0x1FC37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC378u;
    // 0x1fc37c: 0x37a70004  ori         $a3, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2007E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2007E8u, 0x1FC378u, 0x1FC380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC380u;
label_1fc380:
    // 0x1fc380: 0x101d02  srl         $v1, $s0, 20
    ctx->pc = 0x1fc380u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 20));
    // 0x1fc384: 0x307407ff  andi        $s4, $v1, 0x7FF
    ctx->pc = 0x1fc384u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x1fc388: 0x12800015  beqz        $s4, . + 4 + (0x15 << 2)
    ctx->pc = 0x1FC388u;
    {
        const bool branch_taken_0x1fc388 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC388u;
        // 0x1fc38c: 0xafa20048  sw          $v0, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc388) {
            ctx->pc = 0x1FC3E0u;
            goto label_1fc3e0;
        }
    }
    ctx->pc = 0x1FC390u;
    // 0x1fc390: 0x2c0b82d  daddu       $s7, $s6, $zero
    ctx->pc = 0x1fc390u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc394: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x1fc394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x1fc398: 0x17183f  dsra32      $v1, $s7, 0
    ctx->pc = 0x1fc398u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 23) >> (32 + 0));
    // 0x1fc39c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1fc39cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1fc3a0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1fc3a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1fc3a4: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x1fc3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x1fc3a8: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x1fc3a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x1fc3ac: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1fc3acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1fc3b0: 0x2e5b824  and         $s7, $s7, $a1
    ctx->pc = 0x1fc3b0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) & GPR_U64(ctx, 5));
    // 0x1fc3b4: 0x2e3b825  or          $s7, $s7, $v1
    ctx->pc = 0x1fc3b4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | GPR_U64(ctx, 3));
    // 0x1fc3b8: 0x3c043ff0  lui         $a0, 0x3FF0
    ctx->pc = 0x1fc3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16368 << 16));
    // 0x1fc3bc: 0x17103f  dsra32      $v0, $s7, 0
    ctx->pc = 0x1fc3bcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 23) >> (32 + 0));
    // 0x1fc3c0: 0x2694fc01  addiu       $s4, $s4, -0x3FF
    ctx->pc = 0x1fc3c0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294966273));
    // 0x1fc3c4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1fc3c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1fc3c8: 0x2e5b824  and         $s7, $s7, $a1
    ctx->pc = 0x1fc3c8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) & GPR_U64(ctx, 5));
    // 0x1fc3cc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1fc3ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1fc3d0: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x1fc3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x1fc3d4: 0x2e2b825  or          $s7, $s7, $v0
    ctx->pc = 0x1fc3d4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | GPR_U64(ctx, 2));
    // 0x1fc3d8: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1FC3D8u;
    {
        const bool branch_taken_0x1fc3d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC3D8u;
        // 0x1fc3dc: 0x8fb10004  lw          $s1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc3d8) {
            ctx->pc = 0x1FC478u;
            goto label_1fc478;
        }
    }
    ctx->pc = 0x1FC3E0u;
label_1fc3e0:
    // 0x1fc3e0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1fc3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fc3e4: 0x8fb10004  lw          $s1, 0x4($sp)
    ctx->pc = 0x1fc3e4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1fc3e8: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x1fc3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1fc3ec: 0x24940432  addiu       $s4, $a0, 0x432
    ctx->pc = 0x1fc3ecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 1074));
    // 0x1fc3f0: 0x2a820021  slti        $v0, $s4, 0x21
    ctx->pc = 0x1fc3f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x1fc3f4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FC3F4u;
    {
        const bool branch_taken_0x1fc3f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FC3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC3F4u;
        // 0x1fc3f8: 0x141023  negu        $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc3f4) {
            ctx->pc = 0x1FC41Cu;
            goto label_1fc41c;
        }
    }
    ctx->pc = 0x1FC3FCu;
    // 0x1fc3fc: 0x24840412  addiu       $a0, $a0, 0x412
    ctx->pc = 0x1fc3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1042));
    // 0x1fc400: 0x141823  negu        $v1, $s4
    ctx->pc = 0x1fc400u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 20)));
    // 0x1fc404: 0x16103c  dsll32      $v0, $s6, 0
    ctx->pc = 0x1fc404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 0));
    // 0x1fc408: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1fc408u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1fc40c: 0x701804  sllv        $v1, $s0, $v1
    ctx->pc = 0x1fc40cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 3) & 0x1F));
    // 0x1fc410: 0x821006  srlv        $v0, $v0, $a0
    ctx->pc = 0x1fc410u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x1fc414: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1FC414u;
    {
        const bool branch_taken_0x1fc414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC414u;
        // 0x1fc418: 0x628025  or          $s0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc414) {
            ctx->pc = 0x1FC428u;
            goto label_1fc428;
        }
    }
    ctx->pc = 0x1FC41Cu;
label_1fc41c:
    // 0x1fc41c: 0x16183c  dsll32      $v1, $s6, 0
    ctx->pc = 0x1fc41cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) << (32 + 0));
    // 0x1fc420: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1fc420u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1fc424: 0x438004  sllv        $s0, $v1, $v0
    ctx->pc = 0x1fc424u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
label_1fc428:
    // 0x1fc428: 0xc08218c  jal         func_208630
    ctx->pc = 0x1FC428u;
    SET_GPR_U32(ctx, 31, 0x1FC430u);
    ctx->pc = 0x1FC42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC428u;
    // 0x1fc42c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208630u, 0x1FC428u, 0x1FC430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC430u;
label_1fc430:
    // 0x1fc430: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FC430u;
    {
        const bool branch_taken_0x1fc430 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1FC434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC430u;
        // 0x1fc434: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc430) {
            ctx->pc = 0x1FC44Cu;
            goto label_1fc44c;
        }
    }
    ctx->pc = 0x1FC438u;
    // 0x1fc438: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x1fc438u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x1fc43c: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x1fc43cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x1fc440: 0xc081ffe  jal         func_207FF8
    ctx->pc = 0x1FC440u;
    SET_GPR_U32(ctx, 31, 0x1FC448u);
    ctx->pc = 0x1FC444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC440u;
    // 0x1fc444: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207FF8u, 0x1FC440u, 0x1FC448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC448u;
label_1fc448:
    // 0x1fc448: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1fc448u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fc44c:
    // 0x1fc44c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x1fc44cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x1fc450: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1fc450u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1fc454: 0x17183f  dsra32      $v1, $s7, 0
    ctx->pc = 0x1fc454u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 23) >> (32 + 0));
    // 0x1fc458: 0x3c02fe10  lui         $v0, 0xFE10
    ctx->pc = 0x1fc458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65040 << 16));
    // 0x1fc45c: 0x2e4b824  and         $s7, $s7, $a0
    ctx->pc = 0x1fc45cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) & GPR_U64(ctx, 4));
    // 0x1fc460: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1fc460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fc464: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1fc464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fc468: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1fc468u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1fc46c: 0xafa40044  sw          $a0, 0x44($sp)
    ctx->pc = 0x1fc46cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 4));
    // 0x1fc470: 0x2694fbcd  addiu       $s4, $s4, -0x433
    ctx->pc = 0x1fc470u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294966221));
    // 0x1fc474: 0x2e3b825  or          $s7, $s7, $v1
    ctx->pc = 0x1fc474u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | GPR_U64(ctx, 3));
label_1fc478:
    // 0x1fc478: 0x3405ffe0  ori         $a1, $zero, 0xFFE0
    ctx->pc = 0x1fc478u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65504);
    // 0x1fc47c: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x1fc47cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x1fc480: 0xc082014  jal         func_208050
    ctx->pc = 0x1FC480u;
    SET_GPR_U32(ctx, 31, 0x1FC488u);
    ctx->pc = 0x1FC484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC480u;
    // 0x1fc484: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208050u, 0x1FC480u, 0x1FC488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC488u;
label_1fc488:
    // 0x1fc488: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1fc488u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1fc48c: 0xdc254f00  ld          $a1, 0x4F00($at)
    ctx->pc = 0x1fc48cu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x224F00u));
    // 0x1fc490: 0xc08202e  jal         func_2080B8
    ctx->pc = 0x1FC490u;
    SET_GPR_U32(ctx, 31, 0x1FC498u);
    ctx->pc = 0x1FC494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC490u;
    // 0x1fc494: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2080B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2080B8u, 0x1FC490u, 0x1FC498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC498u;
label_1fc498:
    // 0x1fc498: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1fc498u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1fc49c: 0xdc254f08  ld          $a1, 0x4F08($at)
    ctx->pc = 0x1fc49cu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x224F08u));
    // 0x1fc4a0: 0xc081ffe  jal         func_207FF8
    ctx->pc = 0x1FC4A0u;
    SET_GPR_U32(ctx, 31, 0x1FC4A8u);
    ctx->pc = 0x1FC4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC4A0u;
    // 0x1fc4a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207FF8u, 0x1FC4A0u, 0x1FC4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC4A8u;
label_1fc4a8:
    // 0x1fc4a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1fc4a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc4ac: 0xc08218c  jal         func_208630
    ctx->pc = 0x1FC4ACu;
    SET_GPR_U32(ctx, 31, 0x1FC4B4u);
    ctx->pc = 0x1FC4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC4ACu;
    // 0x1fc4b0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208630u, 0x1FC4ACu, 0x1FC4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC4B4u;
label_1fc4b4:
    // 0x1fc4b4: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1fc4b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1fc4b8: 0xdc254f10  ld          $a1, 0x4F10($at)
    ctx->pc = 0x1fc4b8u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x224F10u));
    // 0x1fc4bc: 0xc08202e  jal         func_2080B8
    ctx->pc = 0x1FC4BCu;
    SET_GPR_U32(ctx, 31, 0x1FC4C4u);
    ctx->pc = 0x1FC4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC4BCu;
    // 0x1fc4c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2080B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2080B8u, 0x1FC4BCu, 0x1FC4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC4C4u;
label_1fc4c4:
    // 0x1fc4c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fc4c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc4c8: 0xc081ffe  jal         func_207FF8
    ctx->pc = 0x1FC4C8u;
    SET_GPR_U32(ctx, 31, 0x1FC4D0u);
    ctx->pc = 0x1FC4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC4C8u;
    // 0x1fc4cc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207FF8u, 0x1FC4C8u, 0x1FC4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC4D0u;
label_1fc4d0:
    // 0x1fc4d0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1fc4d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc4d4: 0xc0821ba  jal         func_2086E8
    ctx->pc = 0x1FC4D4u;
    SET_GPR_U32(ctx, 31, 0x1FC4DCu);
    ctx->pc = 0x1FC4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC4D4u;
    // 0x1fc4d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2086E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2086E8u, 0x1FC4D4u, 0x1FC4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC4DCu;
label_1fc4dc:
    // 0x1fc4dc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1fc4dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc4e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fc4e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc4e4: 0xc082178  jal         func_2085E0
    ctx->pc = 0x1FC4E4u;
    SET_GPR_U32(ctx, 31, 0x1FC4ECu);
    ctx->pc = 0x1FC4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC4E4u;
    // 0x1fc4e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2085E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2085E0u, 0x1FC4E4u, 0x1FC4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC4ECu;
label_1fc4ec:
    // 0x1fc4ec: 0x4410009  bgez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FC4ECu;
    {
        const bool branch_taken_0x1fc4ec = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1FC4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC4ECu;
        // 0x1fc4f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc4ec) {
            ctx->pc = 0x1FC514u;
            goto label_1fc514;
        }
    }
    ctx->pc = 0x1FC4F4u;
    // 0x1fc4f4: 0xc08218c  jal         func_208630
    ctx->pc = 0x1FC4F4u;
    SET_GPR_U32(ctx, 31, 0x1FC4FCu);
    ctx->pc = 0x1FC4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC4F4u;
    // 0x1fc4f8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208630u, 0x1FC4F4u, 0x1FC4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC4FCu;
label_1fc4fc:
    // 0x1fc4fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fc4fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc500: 0xc082178  jal         func_2085E0
    ctx->pc = 0x1FC500u;
    SET_GPR_U32(ctx, 31, 0x1FC508u);
    ctx->pc = 0x1FC504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC500u;
    // 0x1fc504: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2085E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2085E0u, 0x1FC500u, 0x1FC508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC508u;
label_1fc508:
    // 0x1fc508: 0x2663ffff  addiu       $v1, $s3, -0x1
    ctx->pc = 0x1fc508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x1fc50c: 0x62980b  movn        $s3, $v1, $v0
    ctx->pc = 0x1fc50cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
    // 0x1fc510: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fc510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fc514:
    // 0x1fc514: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x1fc514u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x1fc518: 0x2e620017  sltiu       $v0, $s3, 0x17
    ctx->pc = 0x1fc518u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)23) ? 1 : 0);
    // 0x1fc51c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1FC51Cu;
    {
        const bool branch_taken_0x1fc51c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC51Cu;
        // 0x1fc520: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc51c) {
            ctx->pc = 0x1FC550u;
            goto label_1fc550;
        }
    }
    ctx->pc = 0x1FC524u;
    // 0x1fc524: 0x1318c0  sll         $v1, $s3, 3
    ctx->pc = 0x1fc524u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x1fc528: 0x24424f98  addiu       $v0, $v0, 0x4F98
    ctx->pc = 0x1fc528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20376));
    // 0x1fc52c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1fc52cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc530: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1fc530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fc534: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x1fc534u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x1fc538: 0xc082178  jal         func_2085E0
    ctx->pc = 0x1FC538u;
    SET_GPR_U32(ctx, 31, 0x1FC540u);
    ctx->pc = 0x1FC53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC538u;
    // 0x1fc53c: 0xdc650000  ld          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2085E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2085E0u, 0x1FC538u, 0x1FC540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC540u;
label_1fc540:
    // 0x1fc540: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1fc540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fc544: 0x2664ffff  addiu       $a0, $s3, -0x1
    ctx->pc = 0x1fc544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x1fc548: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x1fc548u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1fc54c: 0x83980a  movz        $s3, $a0, $v1
    ctx->pc = 0x1fc54cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 4));
label_1fc550:
    // 0x1fc550: 0x2341023  subu        $v0, $s1, $s4
    ctx->pc = 0x1fc550u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x1fc554: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x1fc554u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1fc558: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FC558u;
    {
        const bool branch_taken_0x1fc558 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x1fc558) {
            ctx->pc = 0x1FC55Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC558u;
            // 0x1fc55c: 0x108023  negu        $s0, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC56Cu;
            goto label_1fc56c;
        }
    }
    ctx->pc = 0x1FC560u;
    // 0x1fc560: 0xafb00038  sw          $s0, 0x38($sp)
    ctx->pc = 0x1fc560u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 16));
    // 0x1fc564: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FC564u;
    {
        const bool branch_taken_0x1fc564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC564u;
        // 0x1fc568: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc564) {
            ctx->pc = 0x1FC574u;
            goto label_1fc574;
        }
    }
    ctx->pc = 0x1FC56Cu;
label_1fc56c:
    // 0x1fc56c: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x1fc56cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x1fc570: 0xafb00018  sw          $s0, 0x18($sp)
    ctx->pc = 0x1fc570u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
label_1fc574:
    // 0x1fc574: 0x6600006  bltz        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FC574u;
    {
        const bool branch_taken_0x1fc574 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x1FC578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC574u;
        // 0x1fc578: 0x8fa30038  lw          $v1, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc574) {
            ctx->pc = 0x1FC590u;
            goto label_1fc590;
        }
    }
    ctx->pc = 0x1FC57Cu;
    // 0x1fc57c: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x1fc57cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x1fc580: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x1fc580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1fc584: 0xafb3003c  sw          $s3, 0x3C($sp)
    ctx->pc = 0x1fc584u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 19));
    // 0x1fc588: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1FC588u;
    {
        const bool branch_taken_0x1fc588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC588u;
        // 0x1fc58c: 0xafa30038  sw          $v1, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc588) {
            ctx->pc = 0x1FC5A8u;
            goto label_1fc5a8;
        }
    }
    ctx->pc = 0x1FC590u;
label_1fc590:
    // 0x1fc590: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1fc590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fc594: 0x131023  negu        $v0, $s3
    ctx->pc = 0x1fc594u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
    // 0x1fc598: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x1fc598u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x1fc59c: 0x932023  subu        $a0, $a0, $s3
    ctx->pc = 0x1fc59cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x1fc5a0: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x1fc5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x1fc5a4: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x1fc5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_1fc5a8:
    // 0x1fc5a8: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x1fc5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fc5ac: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1fc5acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fc5b0: 0x2c83000a  sltiu       $v1, $a0, 0xA
    ctx->pc = 0x1fc5b0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1fc5b4: 0x3200a  movz        $a0, $zero, $v1
    ctx->pc = 0x1fc5b4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x1fc5b8: 0x28820006  slti        $v0, $a0, 0x6
    ctx->pc = 0x1fc5b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1fc5bc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FC5BCu;
    {
        const bool branch_taken_0x1fc5bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FC5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC5BCu;
        // 0x1fc5c0: 0xafa40008  sw          $a0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc5bc) {
            ctx->pc = 0x1FC5D0u;
            goto label_1fc5d0;
        }
    }
    ctx->pc = 0x1FC5C4u;
    // 0x1fc5c4: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x1fc5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x1fc5c8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1fc5c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc5cc: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x1fc5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
label_1fc5d0:
    // 0x1fc5d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fc5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fc5d4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1fc5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fc5d8: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x1fc5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x1fc5dc: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x1fc5dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1fc5e0: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1FC5E0u;
    {
        const bool branch_taken_0x1fc5e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC5E0u;
        // 0x1fc5e4: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc5e0) {
            ctx->pc = 0x1FC664u;
            goto label_1fc664;
        }
    }
    ctx->pc = 0x1FC5E8u;
    // 0x1fc5e8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1fc5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1fc5ec: 0x24424f20  addiu       $v0, $v0, 0x4F20
    ctx->pc = 0x1fc5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20256));
    // 0x1fc5f0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1fc5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fc5f4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1fc5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fc5f8: 0x800008  jr          $a0
    ctx->pc = 0x1FC5F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FC600u: goto label_1fc600;
            case 0x1FC61Cu: goto label_1fc61c;
            case 0x1FC620u: goto label_1fc620;
            case 0x1FC640u: goto label_1fc640;
            case 0x1FC644u: goto label_1fc644;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC5F8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1FC600u;
label_1fc600:
    // 0x1fc600: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1fc600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fc604: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1fc604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fc608: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x1fc608u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x1fc60c: 0x24140012  addiu       $s4, $zero, 0x12
    ctx->pc = 0x1fc60cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1fc610: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1fc610u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x1fc614: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1FC614u;
    {
        const bool branch_taken_0x1fc614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC614u;
        // 0x1fc618: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc614) {
            ctx->pc = 0x1FC664u;
            goto label_1fc664;
        }
    }
    ctx->pc = 0x1FC61Cu;
label_1fc61c:
    // 0x1fc61c: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x1fc61cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_1fc620:
    // 0x1fc620: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x1fc620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1fc624: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1fc624u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fc628: 0x3102a  slt         $v0, $zero, $v1
    ctx->pc = 0x1fc628u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1fc62c: 0x62a00b  movn        $s4, $v1, $v0
    ctx->pc = 0x1fc62cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 3));
    // 0x1fc630: 0xafb4000c  sw          $s4, 0xC($sp)
    ctx->pc = 0x1fc630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 20));
    // 0x1fc634: 0xafb40028  sw          $s4, 0x28($sp)
    ctx->pc = 0x1fc634u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 20));
    // 0x1fc638: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1FC638u;
    {
        const bool branch_taken_0x1fc638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC638u;
        // 0x1fc63c: 0xafb40020  sw          $s4, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc638) {
            ctx->pc = 0x1FC664u;
            goto label_1fc664;
        }
    }
    ctx->pc = 0x1FC640u;
label_1fc640:
    // 0x1fc640: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x1fc640u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_1fc644:
    // 0x1fc644: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x1fc644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1fc648: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fc648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fc64c: 0x931021  addu        $v0, $a0, $s3
    ctx->pc = 0x1fc64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x1fc650: 0x24540001  addiu       $s4, $v0, 0x1
    ctx->pc = 0x1fc650u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1fc654: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x1fc654u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x1fc658: 0xafb40020  sw          $s4, 0x20($sp)
    ctx->pc = 0x1fc658u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 20));
    // 0x1fc65c: 0x14102a  slt         $v0, $zero, $s4
    ctx->pc = 0x1fc65cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x1fc660: 0x62a00a  movz        $s4, $v1, $v0
    ctx->pc = 0x1fc660u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 3));
label_1fc664:
    // 0x1fc664: 0x24100004  addiu       $s0, $zero, 0x4
    ctx->pc = 0x1fc664u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1fc668: 0x2e820018  sltiu       $v0, $s4, 0x18
    ctx->pc = 0x1fc668u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
    // 0x1fc66c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1FC66Cu;
    {
        const bool branch_taken_0x1fc66c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FC670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC66Cu;
        // 0x1fc670: 0xafc00044  sw          $zero, 0x44($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc66c) {
            ctx->pc = 0x1FC6A8u;
            goto label_1fc6a8;
        }
    }
    ctx->pc = 0x1FC674u;
    // 0x1fc674: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1fc674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fc678: 0x2c51000f  sltiu       $s1, $v0, 0xF
    ctx->pc = 0x1fc678u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x1fc67c: 0x0  nop
    ctx->pc = 0x1fc67cu;
    // NOP
label_1fc680:
    // 0x1fc680: 0x8fc30044  lw          $v1, 0x44($fp)
    ctx->pc = 0x1fc680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 68)));
    // 0x1fc684: 0x108040  sll         $s0, $s0, 1
    ctx->pc = 0x1fc684u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1fc688: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x1fc688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x1fc68c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1fc68cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1fc690: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x1fc690u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1fc694: 0xafc30044  sw          $v1, 0x44($fp)
    ctx->pc = 0x1fc694u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 68), GPR_U32(ctx, 3));
    // 0x1fc698: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1FC698u;
    {
        const bool branch_taken_0x1fc698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc698) {
            ctx->pc = 0x1FC680u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fc680;
        }
    }
    ctx->pc = 0x1FC6A0u;
    // 0x1fc6a0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1FC6A0u;
    {
        const bool branch_taken_0x1fc6a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC6A0u;
        // 0x1fc6a4: 0x8fc50044  lw          $a1, 0x44($fp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc6a0) {
            ctx->pc = 0x1FC6B4u;
            goto label_1fc6b4;
        }
    }
    ctx->pc = 0x1FC6A8u;
label_1fc6a8:
    // 0x1fc6a8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1fc6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fc6ac: 0x2c71000f  sltiu       $s1, $v1, 0xF
    ctx->pc = 0x1fc6acu;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x1fc6b0: 0x8fc50044  lw          $a1, 0x44($fp)
    ctx->pc = 0x1fc6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 68)));
label_1fc6b4:
    // 0x1fc6b4: 0xc07fea0  jal         func_1FFA80
    ctx->pc = 0x1FC6B4u;
    SET_GPR_U32(ctx, 31, 0x1FC6BCu);
    ctx->pc = 0x1FC6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC6B4u;
    // 0x1fc6b8: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFA80u, 0x1FC6B4u, 0x1FC6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC6BCu;
label_1fc6bc:
    // 0x1fc6bc: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x1fc6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x1fc6c0: 0xafc20040  sw          $v0, 0x40($fp)
    ctx->pc = 0x1fc6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 64), GPR_U32(ctx, 2));
    // 0x1fc6c4: 0x12200102  beqz        $s1, . + 4 + (0x102 << 2)
    ctx->pc = 0x1FC6C4u;
    {
        const bool branch_taken_0x1fc6c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC6C4u;
        // 0x1fc6c8: 0x8fb50058  lw          $s5, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc6c4) {
            ctx->pc = 0x1FCAD0u;
            goto label_1fcad0;
        }
    }
    ctx->pc = 0x1FC6CCu;
    // 0x1fc6cc: 0x12400100  beqz        $s2, . + 4 + (0x100 << 2)
    ctx->pc = 0x1FC6CCu;
    {
        const bool branch_taken_0x1fc6cc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC6CCu;
        // 0x1fc6d0: 0x8fa40020  lw          $a0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc6cc) {
            ctx->pc = 0x1FCAD0u;
            goto label_1fcad0;
        }
    }
    ctx->pc = 0x1FC6D4u;
    // 0x1fc6d4: 0x2c0b82d  daddu       $s7, $s6, $zero
    ctx->pc = 0x1fc6d4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc6d8: 0xafb3002c  sw          $s3, 0x2C($sp)
    ctx->pc = 0x1fc6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 19));
    // 0x1fc6dc: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x1fc6dcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fc6e0: 0x1a600024  blez        $s3, . + 4 + (0x24 << 2)
    ctx->pc = 0x1FC6E0u;
    {
        const bool branch_taken_0x1fc6e0 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x1FC6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC6E0u;
        // 0x1fc6e4: 0xafa40024  sw          $a0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc6e0) {
            ctx->pc = 0x1FC774u;
            goto label_1fc774;
        }
    }
    ctx->pc = 0x1FC6E8u;
    // 0x1fc6e8: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1fc6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1fc6ec: 0x3263000f  andi        $v1, $s3, 0xF
    ctx->pc = 0x1fc6ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)15);
    // 0x1fc6f0: 0x24424f98  addiu       $v0, $v0, 0x4F98
    ctx->pc = 0x1fc6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20376));
    // 0x1fc6f4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1fc6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1fc6f8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1fc6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fc6fc: 0x138103  sra         $s0, $s3, 4
    ctx->pc = 0x1fc6fcu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 19), 4));
    // 0x1fc700: 0x32020010  andi        $v0, $s0, 0x10
    ctx->pc = 0x1fc700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16);
    // 0x1fc704: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FC704u;
    {
        const bool branch_taken_0x1fc704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC704u;
        // 0x1fc708: 0xdc720000  ld          $s2, 0x0($v1) (Delay Slot)
        SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc704) {
            ctx->pc = 0x1FC728u;
            goto label_1fc728;
        }
    }
    ctx->pc = 0x1FC70Cu;
    // 0x1fc70c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1fc70cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1fc710: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1fc710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc714: 0xdc455080  ld          $a1, 0x5080($v0)
    ctx->pc = 0x1fc714u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x225080u));
    // 0x1fc718: 0x3210000f  andi        $s0, $s0, 0xF
    ctx->pc = 0x1fc718u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
    // 0x1fc71c: 0xc0820d8  jal         func_208360
    ctx->pc = 0x1FC71Cu;
    SET_GPR_U32(ctx, 31, 0x1FC724u);
    ctx->pc = 0x1FC720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC71Cu;
    // 0x1fc720: 0x24140003  addiu       $s4, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208360u, 0x1FC71Cu, 0x1FC724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC724u;
label_1fc724:
    // 0x1fc724: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1fc724u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fc728:
    // 0x1fc728: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x1FC728u;
    {
        const bool branch_taken_0x1fc728 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC728u;
        // 0x1fc72c: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc728) {
            ctx->pc = 0x1FC760u;
            goto label_1fc760;
        }
    }
    ctx->pc = 0x1FC730u;
    // 0x1fc730: 0x24515060  addiu       $s1, $v0, 0x5060
    ctx->pc = 0x1fc730u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 20576));
    // 0x1fc734: 0x0  nop
    ctx->pc = 0x1fc734u;
    // NOP
label_1fc738:
    // 0x1fc738: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x1fc738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x1fc73c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FC73Cu;
    {
        const bool branch_taken_0x1fc73c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC73Cu;
        // 0x1fc740: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc73c) {
            ctx->pc = 0x1FC754u;
            goto label_1fc754;
        }
    }
    ctx->pc = 0x1FC744u;
    // 0x1fc744: 0xde250000  ld          $a1, 0x0($s1)
    ctx->pc = 0x1fc744u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1fc748: 0xc08202e  jal         func_2080B8
    ctx->pc = 0x1FC748u;
    SET_GPR_U32(ctx, 31, 0x1FC750u);
    ctx->pc = 0x1FC74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC748u;
    // 0x1fc74c: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2080B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2080B8u, 0x1FC748u, 0x1FC750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC750u;
label_1fc750:
    // 0x1fc750: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1fc750u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fc754:
    // 0x1fc754: 0x108043  sra         $s0, $s0, 1
    ctx->pc = 0x1fc754u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
    // 0x1fc758: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1FC758u;
    {
        const bool branch_taken_0x1fc758 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FC75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC758u;
        // 0x1fc75c: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc758) {
            ctx->pc = 0x1FC738u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fc738;
        }
    }
    ctx->pc = 0x1FC760u;
label_1fc760:
    // 0x1fc760: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1fc760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc764: 0xc0820d8  jal         func_208360
    ctx->pc = 0x1FC764u;
    SET_GPR_U32(ctx, 31, 0x1FC76Cu);
    ctx->pc = 0x1FC768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC764u;
    // 0x1fc768: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208360u, 0x1FC764u, 0x1FC76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC76Cu;
label_1fc76c:
    // 0x1fc76c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1FC76Cu;
    {
        const bool branch_taken_0x1fc76c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC76Cu;
        // 0x1fc770: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc76c) {
            ctx->pc = 0x1FC7D8u;
            goto label_1fc7d8;
        }
    }
    ctx->pc = 0x1FC774u;
label_1fc774:
    // 0x1fc774: 0x138823  negu        $s1, $s3
    ctx->pc = 0x1fc774u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
    // 0x1fc778: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1FC778u;
    {
        const bool branch_taken_0x1fc778 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC778u;
        // 0x1fc77c: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc778) {
            ctx->pc = 0x1FC7D8u;
            goto label_1fc7d8;
        }
    }
    ctx->pc = 0x1FC780u;
    // 0x1fc780: 0x3222000f  andi        $v0, $s1, 0xF
    ctx->pc = 0x1fc780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)15);
    // 0x1fc784: 0x24634f98  addiu       $v1, $v1, 0x4F98
    ctx->pc = 0x1fc784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20376));
    // 0x1fc788: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1fc788u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1fc78c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fc78cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fc790: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1fc790u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc794: 0xdc440000  ld          $a0, 0x0($v0)
    ctx->pc = 0x1fc794u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fc798: 0xc08202e  jal         func_2080B8
    ctx->pc = 0x1FC798u;
    SET_GPR_U32(ctx, 31, 0x1FC7A0u);
    ctx->pc = 0x1FC79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC798u;
    // 0x1fc79c: 0x118103  sra         $s0, $s1, 4 (Delay Slot)
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2080B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2080B8u, 0x1FC798u, 0x1FC7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC7A0u;
label_1fc7a0:
    // 0x1fc7a0: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x1FC7A0u;
    {
        const bool branch_taken_0x1fc7a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC7A0u;
        // 0x1fc7a4: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc7a0) {
            ctx->pc = 0x1FC7D8u;
            goto label_1fc7d8;
        }
    }
    ctx->pc = 0x1FC7A8u;
    // 0x1fc7a8: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1fc7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1fc7ac: 0x24515060  addiu       $s1, $v0, 0x5060
    ctx->pc = 0x1fc7acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 20576));
label_1fc7b0:
    // 0x1fc7b0: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x1fc7b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x1fc7b4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FC7B4u;
    {
        const bool branch_taken_0x1fc7b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC7B4u;
        // 0x1fc7b8: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc7b4) {
            ctx->pc = 0x1FC7CCu;
            goto label_1fc7cc;
        }
    }
    ctx->pc = 0x1FC7BCu;
    // 0x1fc7bc: 0xde240000  ld          $a0, 0x0($s1)
    ctx->pc = 0x1fc7bcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1fc7c0: 0xc08202e  jal         func_2080B8
    ctx->pc = 0x1FC7C0u;
    SET_GPR_U32(ctx, 31, 0x1FC7C8u);
    ctx->pc = 0x1FC7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC7C0u;
    // 0x1fc7c4: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2080B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2080B8u, 0x1FC7C0u, 0x1FC7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC7C8u;
label_1fc7c8:
    // 0x1fc7c8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1fc7c8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fc7cc:
    // 0x1fc7cc: 0x108043  sra         $s0, $s0, 1
    ctx->pc = 0x1fc7ccu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
    // 0x1fc7d0: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1FC7D0u;
    {
        const bool branch_taken_0x1fc7d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FC7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC7D0u;
        // 0x1fc7d4: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc7d0) {
            ctx->pc = 0x1FC7B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fc7b0;
        }
    }
    ctx->pc = 0x1FC7D8u;
label_1fc7d8:
    // 0x1fc7d8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1fc7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fc7dc: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1FC7DCu;
    {
        const bool branch_taken_0x1fc7dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc7dc) {
            ctx->pc = 0x1FC830u;
            goto label_1fc830;
        }
    }
    ctx->pc = 0x1FC7E4u;
    // 0x1fc7e4: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x1fc7e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x1fc7e8: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x1fc7e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x1fc7ec: 0xc082178  jal         func_2085E0
    ctx->pc = 0x1FC7ECu;
    SET_GPR_U32(ctx, 31, 0x1FC7F4u);
    ctx->pc = 0x1FC7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC7ECu;
    // 0x1fc7f0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2085E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2085E0u, 0x1FC7ECu, 0x1FC7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC7F4u;
label_1fc7f4:
    // 0x1fc7f4: 0x441000e  bgez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1FC7F4u;
    {
        const bool branch_taken_0x1fc7f4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1FC7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC7F4u;
        // 0x1fc7f8: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc7f4) {
            ctx->pc = 0x1FC830u;
            goto label_1fc830;
        }
    }
    ctx->pc = 0x1FC7FCu;
    // 0x1fc7fc: 0x1860000c  blez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1FC7FCu;
    {
        const bool branch_taken_0x1fc7fc = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1fc7fc) {
            ctx->pc = 0x1FC830u;
            goto label_1fc830;
        }
    }
    ctx->pc = 0x1FC804u;
    // 0x1fc804: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1fc804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1fc808: 0x188000ac  blez        $a0, . + 4 + (0xAC << 2)
    ctx->pc = 0x1FC808u;
    {
        const bool branch_taken_0x1fc808 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1FC80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC808u;
        // 0x1fc80c: 0x8fa20028  lw          $v0, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc808) {
            ctx->pc = 0x1FCABCu;
            goto label_1fcabc;
        }
    }
    ctx->pc = 0x1FC810u;
    // 0x1fc810: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1fc810u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc814: 0x34048048  ori         $a0, $zero, 0x8048
    ctx->pc = 0x1fc814u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x1fc818: 0x423fc  dsll32      $a0, $a0, 15
    ctx->pc = 0x1fc818u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
    // 0x1fc81c: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x1fc81cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x1fc820: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1fc820u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x1fc824: 0xc08202e  jal         func_2080B8
    ctx->pc = 0x1FC824u;
    SET_GPR_U32(ctx, 31, 0x1FC82Cu);
    ctx->pc = 0x1FC828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC824u;
    // 0x1fc828: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2080B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2080B8u, 0x1FC824u, 0x1FC82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC82Cu;
label_1fc82c:
    // 0x1fc82c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1fc82cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fc830:
    // 0x1fc830: 0xc08218c  jal         func_208630
    ctx->pc = 0x1FC830u;
    SET_GPR_U32(ctx, 31, 0x1FC838u);
    ctx->pc = 0x1FC834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC830u;
    // 0x1fc834: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208630u, 0x1FC830u, 0x1FC838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC838u;
label_1fc838:
    // 0x1fc838: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fc838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc83c: 0xc08202e  jal         func_2080B8
    ctx->pc = 0x1FC83Cu;
    SET_GPR_U32(ctx, 31, 0x1FC844u);
    ctx->pc = 0x1FC840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC83Cu;
    // 0x1fc840: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2080B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2080B8u, 0x1FC83Cu, 0x1FC844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC844u;
label_1fc844:
    // 0x1fc844: 0x34058038  ori         $a1, $zero, 0x8038
    ctx->pc = 0x1fc844u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32824);
    // 0x1fc848: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x1fc848u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x1fc84c: 0xc081ffe  jal         func_207FF8
    ctx->pc = 0x1FC84Cu;
    SET_GPR_U32(ctx, 31, 0x1FC854u);
    ctx->pc = 0x1FC850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC84Cu;
    // 0x1fc850: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207FF8u, 0x1FC84Cu, 0x1FC854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC854u;
label_1fc854:
    // 0x1fc854: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1fc854u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc858: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x1fc858u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x1fc85c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1fc85cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1fc860: 0x12183f  dsra32      $v1, $s2, 0
    ctx->pc = 0x1fc860u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 18) >> (32 + 0));
    // 0x1fc864: 0x3c02fcc0  lui         $v0, 0xFCC0
    ctx->pc = 0x1fc864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64704 << 16));
    // 0x1fc868: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1fc868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fc86c: 0x2449024  and         $s2, $s2, $a0
    ctx->pc = 0x1fc86cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
    // 0x1fc870: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1fc870u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1fc874: 0x2439025  or          $s2, $s2, $v1
    ctx->pc = 0x1fc874u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 3));
    // 0x1fc878: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1fc878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fc87c: 0x54600017  bnel        $v1, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x1FC87Cu;
    {
        const bool branch_taken_0x1fc87c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fc87c) {
            ctx->pc = 0x1FC880u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC87Cu;
            // 0x1fc880: 0x8fa40034  lw          $a0, 0x34($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC8DCu;
            goto label_1fc8dc;
        }
    }
    ctx->pc = 0x1FC884u;
    // 0x1fc884: 0x34058028  ori         $a1, $zero, 0x8028
    ctx->pc = 0x1fc884u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32808);
    // 0x1fc888: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x1fc888u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x1fc88c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1fc88cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc890: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x1fc890u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x1fc894: 0xc082014  jal         func_208050
    ctx->pc = 0x1FC894u;
    SET_GPR_U32(ctx, 31, 0x1FC89Cu);
    ctx->pc = 0x1FC898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC894u;
    // 0x1fc898: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208050u, 0x1FC894u, 0x1FC89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC89Cu;
label_1fc89c:
    // 0x1fc89c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1fc89cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc8a0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1fc8a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc8a4: 0xc082178  jal         func_2085E0
    ctx->pc = 0x1FC8A4u;
    SET_GPR_U32(ctx, 31, 0x1FC8ACu);
    ctx->pc = 0x1FC8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC8A4u;
    // 0x1fc8a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2085E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2085E0u, 0x1FC8A4u, 0x1FC8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC8ACu;
label_1fc8ac:
    // 0x1fc8ac: 0x1c4001ca  bgtz        $v0, . + 4 + (0x1CA << 2)
    ctx->pc = 0x1FC8ACu;
    {
        const bool branch_taken_0x1fc8ac = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1FC8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC8ACu;
        // 0x1fc8b0: 0x8fa30058  lw          $v1, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc8ac) {
            ctx->pc = 0x1FCFD8u;
            goto label_1fcfd8;
        }
    }
    ctx->pc = 0x1FC8B4u;
    // 0x1fc8b4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1fc8b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc8b8: 0xc082014  jal         func_208050
    ctx->pc = 0x1FC8B8u;
    SET_GPR_U32(ctx, 31, 0x1FC8C0u);
    ctx->pc = 0x1FC8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC8B8u;
    // 0x1fc8bc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208050u, 0x1FC8B8u, 0x1FC8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC8C0u;
label_1fc8c0:
    // 0x1fc8c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fc8c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc8c4: 0xc082178  jal         func_2085E0
    ctx->pc = 0x1FC8C4u;
    SET_GPR_U32(ctx, 31, 0x1FC8CCu);
    ctx->pc = 0x1FC8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC8C4u;
    // 0x1fc8c8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2085E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2085E0u, 0x1FC8C4u, 0x1FC8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC8CCu;
label_1fc8cc:
    // 0x1fc8cc: 0x44001be  bltz        $v0, . + 4 + (0x1BE << 2)
    ctx->pc = 0x1FC8CCu;
    {
        const bool branch_taken_0x1fc8cc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1FC8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC8CCu;
        // 0x1fc8d0: 0x8fa40024  lw          $a0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc8cc) {
            ctx->pc = 0x1FCFC8u;
            goto label_1fcfc8;
        }
    }
    ctx->pc = 0x1FC8D4u;
    // 0x1fc8d4: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x1FC8D4u;
    {
        const bool branch_taken_0x1fc8d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC8D4u;
        // 0x1fc8d8: 0x2e0b02d  daddu       $s6, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc8d4) {
            ctx->pc = 0x1FCAC4u;
            goto label_1fcac4;
        }
    }
    ctx->pc = 0x1FC8DCu;
label_1fc8dc:
    // 0x1fc8dc: 0x1080003a  beqz        $a0, . + 4 + (0x3A << 2)
    ctx->pc = 0x1FC8DCu;
    {
        const bool branch_taken_0x1fc8dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC8DCu;
        // 0x1fc8e0: 0x8fa40020  lw          $a0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc8dc) {
            ctx->pc = 0x1FC9C8u;
            goto label_1fc9c8;
        }
    }
    ctx->pc = 0x1FC8E4u;
    // 0x1fc8e4: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1fc8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1fc8e8: 0x24634f98  addiu       $v1, $v1, 0x4F98
    ctx->pc = 0x1fc8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20376));
    // 0x1fc8ec: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1fc8ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc8f0: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x1fc8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1fc8f4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1fc8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1fc8f8: 0x3404ff80  ori         $a0, $zero, 0xFF80
    ctx->pc = 0x1fc8f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x1fc8fc: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x1fc8fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x1fc900: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fc900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fc904: 0xc0820d8  jal         func_208360
    ctx->pc = 0x1FC904u;
    SET_GPR_U32(ctx, 31, 0x1FC90Cu);
    ctx->pc = 0x1FC908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC904u;
    // 0x1fc908: 0xdc450000  ld          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208360u, 0x1FC904u, 0x1FC90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC90Cu;
label_1fc90c:
    // 0x1fc90c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1fc90cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc910: 0xc082014  jal         func_208050
    ctx->pc = 0x1FC910u;
    SET_GPR_U32(ctx, 31, 0x1FC918u);
    ctx->pc = 0x1FC914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC910u;
    // 0x1fc914: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208050u, 0x1FC910u, 0x1FC918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC918u;
label_1fc918:
    // 0x1fc918: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1FC918u;
    {
        const bool branch_taken_0x1fc918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC918u;
        // 0x1fc91c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc918) {
            ctx->pc = 0x1FC948u;
            goto label_1fc948;
        }
    }
    ctx->pc = 0x1FC920u;
label_1fc920:
    // 0x1fc920: 0x34048048  ori         $a0, $zero, 0x8048
    ctx->pc = 0x1fc920u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x1fc924: 0x423fc  dsll32      $a0, $a0, 15
    ctx->pc = 0x1fc924u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
    // 0x1fc928: 0xc08202e  jal         func_2080B8
    ctx->pc = 0x1FC928u;
    SET_GPR_U32(ctx, 31, 0x1FC930u);
    ctx->pc = 0x1FC92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC928u;
    // 0x1fc92c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2080B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2080B8u, 0x1FC928u, 0x1FC930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC930u;
label_1fc930:
    // 0x1fc930: 0x34048048  ori         $a0, $zero, 0x8048
    ctx->pc = 0x1fc930u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x1fc934: 0x423fc  dsll32      $a0, $a0, 15
    ctx->pc = 0x1fc934u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
    // 0x1fc938: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1fc938u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc93c: 0xc08202e  jal         func_2080B8
    ctx->pc = 0x1FC93Cu;
    SET_GPR_U32(ctx, 31, 0x1FC944u);
    ctx->pc = 0x1FC940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC93Cu;
    // 0x1fc940: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2080B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2080B8u, 0x1FC93Cu, 0x1FC944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC944u;
label_1fc944:
    // 0x1fc944: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1fc944u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fc948:
    // 0x1fc948: 0xc0821ba  jal         func_2086E8
    ctx->pc = 0x1FC948u;
    SET_GPR_U32(ctx, 31, 0x1FC950u);
    ctx->pc = 0x1FC94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC948u;
    // 0x1fc94c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2086E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2086E8u, 0x1FC948u, 0x1FC950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC950u;
label_1fc950:
    // 0x1fc950: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1fc950u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc954: 0xc08218c  jal         func_208630
    ctx->pc = 0x1FC954u;
    SET_GPR_U32(ctx, 31, 0x1FC95Cu);
    ctx->pc = 0x1FC958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC954u;
    // 0x1fc958: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208630u, 0x1FC954u, 0x1FC95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC95Cu;
label_1fc95c:
    // 0x1fc95c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1fc95cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc960: 0xc082014  jal         func_208050
    ctx->pc = 0x1FC960u;
    SET_GPR_U32(ctx, 31, 0x1FC968u);
    ctx->pc = 0x1FC964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC960u;
    // 0x1fc964: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208050u, 0x1FC960u, 0x1FC968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC968u;
label_1fc968:
    // 0x1fc968: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1fc968u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc96c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1fc96cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc970: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x1fc970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1fc974: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fc974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc978: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x1fc978u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1fc97c: 0xc082178  jal         func_2085E0
    ctx->pc = 0x1FC97Cu;
    SET_GPR_U32(ctx, 31, 0x1FC984u);
    ctx->pc = 0x1FC980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC97Cu;
    // 0x1fc980: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2085E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2085E0u, 0x1FC97Cu, 0x1FC984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC984u;
label_1fc984:
    // 0x1fc984: 0x442027f  bltzl       $v0, . + 4 + (0x27F << 2)
    ctx->pc = 0x1FC984u;
    {
        const bool branch_taken_0x1fc984 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1fc984) {
            ctx->pc = 0x1FC988u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC984u;
            // 0x1fc988: 0x26770001  addiu       $s7, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD384u;
            goto label_1fd384;
        }
    }
    ctx->pc = 0x1FC98Cu;
    // 0x1fc98c: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x1fc98cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x1fc990: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x1fc990u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x1fc994: 0xc082014  jal         func_208050
    ctx->pc = 0x1FC994u;
    SET_GPR_U32(ctx, 31, 0x1FC99Cu);
    ctx->pc = 0x1FC998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC994u;
    // 0x1fc998: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208050u, 0x1FC994u, 0x1FC99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC99Cu;
label_1fc99c:
    // 0x1fc99c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fc99cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc9a0: 0xc082178  jal         func_2085E0
    ctx->pc = 0x1FC9A0u;
    SET_GPR_U32(ctx, 31, 0x1FC9A8u);
    ctx->pc = 0x1FC9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC9A0u;
    // 0x1fc9a4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2085E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2085E0u, 0x1FC9A0u, 0x1FC9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC9A8u;
label_1fc9a8:
    // 0x1fc9a8: 0x4400098  bltz        $v0, . + 4 + (0x98 << 2)
    ctx->pc = 0x1FC9A8u;
    {
        const bool branch_taken_0x1fc9a8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1FC9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC9A8u;
        // 0x1fc9ac: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc9a8) {
            ctx->pc = 0x1FCC0Cu;
            goto label_1fcc0c;
        }
    }
    ctx->pc = 0x1FC9B0u;
    // 0x1fc9b0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1fc9b0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1fc9b4: 0x283102a  slt         $v0, $s4, $v1
    ctx->pc = 0x1fc9b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1fc9b8: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x1FC9B8u;
    {
        const bool branch_taken_0x1fc9b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fc9b8) {
            ctx->pc = 0x1FC920u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fc920;
        }
    }
    ctx->pc = 0x1FC9C0u;
    // 0x1fc9c0: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x1FC9C0u;
    {
        const bool branch_taken_0x1fc9c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC9C0u;
        // 0x1fc9c4: 0x8fa40024  lw          $a0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc9c0) {
            ctx->pc = 0x1FCAC0u;
            goto label_1fcac0;
        }
    }
    ctx->pc = 0x1FC9C8u;
label_1fc9c8:
    // 0x1fc9c8: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1fc9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1fc9cc: 0x24634f98  addiu       $v1, $v1, 0x4F98
    ctx->pc = 0x1fc9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20376));
    // 0x1fc9d0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1fc9d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc9d4: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x1fc9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1fc9d8: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1fc9d8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fc9dc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1fc9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1fc9e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fc9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fc9e4: 0xc08202e  jal         func_2080B8
    ctx->pc = 0x1FC9E4u;
    SET_GPR_U32(ctx, 31, 0x1FC9ECu);
    ctx->pc = 0x1FC9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC9E4u;
    // 0x1fc9e8: 0xdc440000  ld          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2080B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2080B8u, 0x1FC9E4u, 0x1FC9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC9ECu;
label_1fc9ec:
    // 0x1fc9ec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1FC9ECu;
    {
        const bool branch_taken_0x1fc9ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC9ECu;
        // 0x1fc9f0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc9ec) {
            ctx->pc = 0x1FCA10u;
            goto label_1fca10;
        }
    }
    ctx->pc = 0x1FC9F4u;
    // 0x1fc9f4: 0x0  nop
    ctx->pc = 0x1fc9f4u;
    // NOP
label_1fc9f8:
    // 0x1fc9f8: 0x34048048  ori         $a0, $zero, 0x8048
    ctx->pc = 0x1fc9f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x1fc9fc: 0x423fc  dsll32      $a0, $a0, 15
    ctx->pc = 0x1fc9fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
    // 0x1fca00: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1fca00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fca04: 0xc08202e  jal         func_2080B8
    ctx->pc = 0x1FCA04u;
    SET_GPR_U32(ctx, 31, 0x1FCA0Cu);
    ctx->pc = 0x1FCA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCA04u;
    // 0x1fca08: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2080B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2080B8u, 0x1FCA04u, 0x1FCA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCA0Cu;
label_1fca0c:
    // 0x1fca0c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1fca0cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fca10:
    // 0x1fca10: 0xc0821ba  jal         func_2086E8
    ctx->pc = 0x1FCA10u;
    SET_GPR_U32(ctx, 31, 0x1FCA18u);
    ctx->pc = 0x1FCA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCA10u;
    // 0x1fca14: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2086E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2086E8u, 0x1FCA10u, 0x1FCA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCA18u;
label_1fca18:
    // 0x1fca18: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1fca18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fca1c: 0xc08218c  jal         func_208630
    ctx->pc = 0x1FCA1Cu;
    SET_GPR_U32(ctx, 31, 0x1FCA24u);
    ctx->pc = 0x1FCA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCA1Cu;
    // 0x1fca20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208630u, 0x1FCA1Cu, 0x1FCA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCA24u;
label_1fca24:
    // 0x1fca24: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1fca24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fca28: 0xc082014  jal         func_208050
    ctx->pc = 0x1FCA28u;
    SET_GPR_U32(ctx, 31, 0x1FCA30u);
    ctx->pc = 0x1FCA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCA28u;
    // 0x1fca2c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208050u, 0x1FCA28u, 0x1FCA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCA30u;
label_1fca30:
    // 0x1fca30: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1fca30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fca34: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x1fca34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1fca38: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x1fca38u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1fca3c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1fca3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fca40: 0x1682ffed  bne         $s4, $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1FCA40u;
    {
        const bool branch_taken_0x1fca40 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FCA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCA40u;
        // 0x1fca44: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fca40) {
            ctx->pc = 0x1FC9F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fc9f8;
        }
    }
    ctx->pc = 0x1FCA48u;
    // 0x1fca48: 0x3404ff80  ori         $a0, $zero, 0xFF80
    ctx->pc = 0x1fca48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x1fca4c: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x1fca4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x1fca50: 0xc081ffe  jal         func_207FF8
    ctx->pc = 0x1FCA50u;
    SET_GPR_U32(ctx, 31, 0x1FCA58u);
    ctx->pc = 0x1FCA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCA50u;
    // 0x1fca54: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207FF8u, 0x1FCA50u, 0x1FCA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCA58u;
label_1fca58:
    // 0x1fca58: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1fca58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fca5c: 0xc082178  jal         func_2085E0
    ctx->pc = 0x1FCA5Cu;
    SET_GPR_U32(ctx, 31, 0x1FCA64u);
    ctx->pc = 0x1FCA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCA5Cu;
    // 0x1fca60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2085E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2085E0u, 0x1FCA5Cu, 0x1FCA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCA64u;
label_1fca64:
    // 0x1fca64: 0x5c40006a  bgtzl       $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x1FCA64u;
    {
        const bool branch_taken_0x1fca64 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1fca64) {
            ctx->pc = 0x1FCA68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FCA64u;
            // 0x1fca68: 0x26770001  addiu       $s7, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FCC10u;
            goto label_1fcc10;
        }
    }
    ctx->pc = 0x1FCA6Cu;
    // 0x1fca6c: 0x3404ff80  ori         $a0, $zero, 0xFF80
    ctx->pc = 0x1fca6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x1fca70: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x1fca70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x1fca74: 0xc082014  jal         func_208050
    ctx->pc = 0x1FCA74u;
    SET_GPR_U32(ctx, 31, 0x1FCA7Cu);
    ctx->pc = 0x1FCA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCA74u;
    // 0x1fca78: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208050u, 0x1FCA74u, 0x1FCA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCA7Cu;
label_1fca7c:
    // 0x1fca7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fca7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fca80: 0xc082178  jal         func_2085E0
    ctx->pc = 0x1FCA80u;
    SET_GPR_U32(ctx, 31, 0x1FCA88u);
    ctx->pc = 0x1FCA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCA80u;
    // 0x1fca84: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2085E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2085E0u, 0x1FCA80u, 0x1FCA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCA88u;
label_1fca88:
    // 0x1fca88: 0x441000d  bgez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1FCA88u;
    {
        const bool branch_taken_0x1fca88 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1FCA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCA88u;
        // 0x1fca8c: 0x8fa40024  lw          $a0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fca88) {
            ctx->pc = 0x1FCAC0u;
            goto label_1fcac0;
        }
    }
    ctx->pc = 0x1FCA90u;
    // 0x1fca90: 0x26770001  addiu       $s7, $s3, 0x1
    ctx->pc = 0x1fca90u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1fca94: 0x0  nop
    ctx->pc = 0x1fca94u;
    // NOP
label_1fca98:
    // 0x1fca98: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x1fca98u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x1fca9c: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x1fca9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1fcaa0: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x1fcaa0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1fcaa4: 0x0  nop
    ctx->pc = 0x1fcaa4u;
    // NOP
    // 0x1fcaa8: 0x0  nop
    ctx->pc = 0x1fcaa8u;
    // NOP
    // 0x1fcaac: 0x1043fffa  beq         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1FCAACu;
    {
        const bool branch_taken_0x1fcaac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1fcaac) {
            ctx->pc = 0x1FCA98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fca98;
        }
    }
    ctx->pc = 0x1FCAB4u;
    // 0x1fcab4: 0x10000233  b           . + 4 + (0x233 << 2)
    ctx->pc = 0x1FCAB4u;
    {
        const bool branch_taken_0x1fcab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCAB4u;
        // 0x1fcab8: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcab4) {
            ctx->pc = 0x1FD384u;
            goto label_1fd384;
        }
    }
    ctx->pc = 0x1FCABCu;
label_1fcabc:
    // 0x1fcabc: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x1fcabcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_1fcac0:
    // 0x1fcac0: 0x2e0b02d  daddu       $s6, $s7, $zero
    ctx->pc = 0x1fcac0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1fcac4:
    // 0x1fcac4: 0x8fb3002c  lw          $s3, 0x2C($sp)
    ctx->pc = 0x1fcac4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1fcac8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1fcac8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1fcacc: 0x8fb50058  lw          $s5, 0x58($sp)
    ctx->pc = 0x1fcaccu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1fcad0:
    // 0x1fcad0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1fcad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fcad4: 0x460005e  bltz        $v1, . + 4 + (0x5E << 2)
    ctx->pc = 0x1FCAD4u;
    {
        const bool branch_taken_0x1fcad4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1FCAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCAD4u;
        // 0x1fcad8: 0x2a62000f  slti        $v0, $s3, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)15) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcad4) {
            ctx->pc = 0x1FCC50u;
            goto label_1fcc50;
        }
    }
    ctx->pc = 0x1FCADCu;
    // 0x1fcadc: 0x1040005c  beqz        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x1FCADCu;
    {
        const bool branch_taken_0x1fcadc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCADCu;
        // 0x1fcae0: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcadc) {
            ctx->pc = 0x1FCC50u;
            goto label_1fcc50;
        }
    }
    ctx->pc = 0x1FCAE4u;
    // 0x1fcae4: 0x1318c0  sll         $v1, $s3, 3
    ctx->pc = 0x1fcae4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x1fcae8: 0x24424f98  addiu       $v0, $v0, 0x4F98
    ctx->pc = 0x1fcae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20376));
    // 0x1fcaec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1fcaecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fcaf0: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x1fcaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1fcaf4: 0x4410012  bgez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1FCAF4u;
    {
        const bool branch_taken_0x1fcaf4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1FCAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCAF4u;
        // 0x1fcaf8: 0xdc720000  ld          $s2, 0x0($v1) (Delay Slot)
        SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcaf4) {
            ctx->pc = 0x1FCB40u;
            goto label_1fcb40;
        }
    }
    ctx->pc = 0x1FCAFCu;
    // 0x1fcafc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1fcafcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fcb00: 0x1c600011  bgtz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1FCB00u;
    {
        const bool branch_taken_0x1fcb00 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x1FCB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCB00u;
        // 0x1fcb04: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcb00) {
            ctx->pc = 0x1FCB48u;
            goto label_1fcb48;
        }
    }
    ctx->pc = 0x1FCB08u;
    // 0x1fcb08: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x1fcb08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x1fcb0c: 0x460012e  bltz        $v1, . + 4 + (0x12E << 2)
    ctx->pc = 0x1FCB0Cu;
    {
        const bool branch_taken_0x1fcb0c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1FCB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCB0Cu;
        // 0x1fcb10: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcb0c) {
            ctx->pc = 0x1FCFC8u;
            goto label_1fcfc8;
        }
    }
    ctx->pc = 0x1FCB14u;
    // 0x1fcb14: 0x34058028  ori         $a1, $zero, 0x8028
    ctx->pc = 0x1fcb14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32808);
    // 0x1fcb18: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x1fcb18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x1fcb1c: 0xc08202e  jal         func_2080B8
    ctx->pc = 0x1FCB1Cu;
    SET_GPR_U32(ctx, 31, 0x1FCB24u);
    ctx->pc = 0x1FCB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCB1Cu;
    // 0x1fcb20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2080B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2080B8u, 0x1FCB1Cu, 0x1FCB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCB24u;
label_1fcb24:
    // 0x1fcb24: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1fcb24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcb28: 0xc082178  jal         func_2085E0
    ctx->pc = 0x1FCB28u;
    SET_GPR_U32(ctx, 31, 0x1FCB30u);
    ctx->pc = 0x1FCB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCB28u;
    // 0x1fcb2c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2085E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2085E0u, 0x1FCB28u, 0x1FCB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCB30u;
label_1fcb30:
    // 0x1fcb30: 0x18400125  blez        $v0, . + 4 + (0x125 << 2)
    ctx->pc = 0x1FCB30u;
    {
        const bool branch_taken_0x1fcb30 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1FCB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCB30u;
        // 0x1fcb34: 0x8fa30058  lw          $v1, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcb30) {
            ctx->pc = 0x1FCFC8u;
            goto label_1fcfc8;
        }
    }
    ctx->pc = 0x1FCB38u;
    // 0x1fcb38: 0x10000128  b           . + 4 + (0x128 << 2)
    ctx->pc = 0x1FCB38u;
    {
        const bool branch_taken_0x1fcb38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCB38u;
        // 0x1fcb3c: 0x24020031  addiu       $v0, $zero, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcb38) {
            ctx->pc = 0x1FCFDCu;
            goto label_1fcfdc;
        }
    }
    ctx->pc = 0x1FCB40u;
label_1fcb40:
    // 0x1fcb40: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1fcb40u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fcb44: 0x0  nop
    ctx->pc = 0x1fcb44u;
    // NOP
label_1fcb48:
    // 0x1fcb48: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1FCB48u;
    {
        const bool branch_taken_0x1fcb48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCB48u;
        // 0x1fcb4c: 0x26770001  addiu       $s7, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcb48) {
            ctx->pc = 0x1FCB78u;
            goto label_1fcb78;
        }
    }
    ctx->pc = 0x1FCB50u;
label_1fcb50:
    // 0x1fcb50: 0x34048048  ori         $a0, $zero, 0x8048
    ctx->pc = 0x1fcb50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x1fcb54: 0x423fc  dsll32      $a0, $a0, 15
    ctx->pc = 0x1fcb54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
    // 0x1fcb58: 0xc08202e  jal         func_2080B8
    ctx->pc = 0x1FCB58u;
    SET_GPR_U32(ctx, 31, 0x1FCB60u);
    ctx->pc = 0x2080B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2080B8u, 0x1FCB58u, 0x1FCB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCB60u;
label_1fcb60:
    // 0x1fcb60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fcb60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcb64: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fcb64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcb68: 0xc082178  jal         func_2085E0
    ctx->pc = 0x1FCB68u;
    SET_GPR_U32(ctx, 31, 0x1FCB70u);
    ctx->pc = 0x1FCB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCB68u;
    // 0x1fcb6c: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2085E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2085E0u, 0x1FCB68u, 0x1FCB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCB70u;
label_1fcb70:
    // 0x1fcb70: 0x10400204  beqz        $v0, . + 4 + (0x204 << 2)
    ctx->pc = 0x1FCB70u;
    {
        const bool branch_taken_0x1fcb70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCB70u;
        // 0x1fcb74: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcb70) {
            ctx->pc = 0x1FD384u;
            goto label_1fd384;
        }
    }
    ctx->pc = 0x1FCB78u;
label_1fcb78:
    // 0x1fcb78: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1fcb78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcb7c: 0xc0820d8  jal         func_208360
    ctx->pc = 0x1FCB7Cu;
    SET_GPR_U32(ctx, 31, 0x1FCB84u);
    ctx->pc = 0x1FCB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCB7Cu;
    // 0x1fcb80: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208360u, 0x1FCB7Cu, 0x1FCB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCB84u;
label_1fcb84:
    // 0x1fcb84: 0xc0821ba  jal         func_2086E8
    ctx->pc = 0x1FCB84u;
    SET_GPR_U32(ctx, 31, 0x1FCB8Cu);
    ctx->pc = 0x1FCB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCB84u;
    // 0x1fcb88: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2086E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2086E8u, 0x1FCB84u, 0x1FCB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCB8Cu;
label_1fcb8c:
    // 0x1fcb8c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1fcb8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcb90: 0xc08218c  jal         func_208630
    ctx->pc = 0x1FCB90u;
    SET_GPR_U32(ctx, 31, 0x1FCB98u);
    ctx->pc = 0x1FCB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCB90u;
    // 0x1fcb94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208630u, 0x1FCB90u, 0x1FCB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCB98u;
label_1fcb98:
    // 0x1fcb98: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fcb98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcb9c: 0xc08202e  jal         func_2080B8
    ctx->pc = 0x1FCB9Cu;
    SET_GPR_U32(ctx, 31, 0x1FCBA4u);
    ctx->pc = 0x1FCBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCB9Cu;
    // 0x1fcba0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2080B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2080B8u, 0x1FCB9Cu, 0x1FCBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCBA4u;
label_1fcba4:
    // 0x1fcba4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1fcba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcba8: 0xc082014  jal         func_208050
    ctx->pc = 0x1FCBA8u;
    SET_GPR_U32(ctx, 31, 0x1FCBB0u);
    ctx->pc = 0x1FCBACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCBA8u;
    // 0x1fcbac: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208050u, 0x1FCBA8u, 0x1FCBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCBB0u;
label_1fcbb0:
    // 0x1fcbb0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1fcbb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcbb4: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x1fcbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1fcbb8: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x1fcbb8u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1fcbbc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1fcbbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fcbc0: 0x1684ffe3  bne         $s4, $a0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x1FCBC0u;
    {
        const bool branch_taken_0x1fcbc0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 4));
        ctx->pc = 0x1FCBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCBC0u;
        // 0x1fcbc4: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcbc0) {
            ctx->pc = 0x1FCB50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fcb50;
        }
    }
    ctx->pc = 0x1FCBC8u;
    // 0x1fcbc8: 0xc081ffe  jal         func_207FF8
    ctx->pc = 0x1FCBC8u;
    SET_GPR_U32(ctx, 31, 0x1FCBD0u);
    ctx->pc = 0x1FCBCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCBC8u;
    // 0x1fcbcc: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207FF8u, 0x1FCBC8u, 0x1FCBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCBD0u;
label_1fcbd0:
    // 0x1fcbd0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1fcbd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcbd4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1fcbd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcbd8: 0xc082178  jal         func_2085E0
    ctx->pc = 0x1FCBD8u;
    SET_GPR_U32(ctx, 31, 0x1FCBE0u);
    ctx->pc = 0x1FCBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCBD8u;
    // 0x1fcbdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2085E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2085E0u, 0x1FCBD8u, 0x1FCBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCBE0u;
label_1fcbe0:
    // 0x1fcbe0: 0x1c40000c  bgtz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1FCBE0u;
    {
        const bool branch_taken_0x1fcbe0 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1FCBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCBE0u;
        // 0x1fcbe4: 0x24050039  addiu       $a1, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcbe0) {
            ctx->pc = 0x1FCC14u;
            goto label_1fcc14;
        }
    }
    ctx->pc = 0x1FCBE8u;
    // 0x1fcbe8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fcbe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcbec: 0xc082178  jal         func_2085E0
    ctx->pc = 0x1FCBECu;
    SET_GPR_U32(ctx, 31, 0x1FCBF4u);
    ctx->pc = 0x1FCBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCBECu;
    // 0x1fcbf0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2085E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2085E0u, 0x1FCBECu, 0x1FCBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCBF4u;
label_1fcbf4:
    // 0x1fcbf4: 0x144001e3  bnez        $v0, . + 4 + (0x1E3 << 2)
    ctx->pc = 0x1FCBF4u;
    {
        const bool branch_taken_0x1fcbf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FCBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCBF4u;
        // 0x1fcbf8: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcbf4) {
            ctx->pc = 0x1FD384u;
            goto label_1fd384;
        }
    }
    ctx->pc = 0x1FCBFCu;
    // 0x1fcbfc: 0x104001e1  beqz        $v0, . + 4 + (0x1E1 << 2)
    ctx->pc = 0x1FCBFCu;
    {
        const bool branch_taken_0x1fcbfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCBFCu;
        // 0x1fcc00: 0x24050039  addiu       $a1, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcbfc) {
            ctx->pc = 0x1FD384u;
            goto label_1fd384;
        }
    }
    ctx->pc = 0x1FCC04u;
    // 0x1fcc04: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1FCC04u;
    {
        const bool branch_taken_0x1fcc04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCC04u;
        // 0x1fcc08: 0x24030030  addiu       $v1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcc04) {
            ctx->pc = 0x1FCC18u;
            goto label_1fcc18;
        }
    }
    ctx->pc = 0x1FCC0Cu;
label_1fcc0c:
    // 0x1fcc0c: 0x26770001  addiu       $s7, $s3, 0x1
    ctx->pc = 0x1fcc0cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1fcc10:
    // 0x1fcc10: 0x24050039  addiu       $a1, $zero, 0x39
    ctx->pc = 0x1fcc10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
label_1fcc14:
    // 0x1fcc14: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x1fcc14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1fcc18:
    // 0x1fcc18: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x1fcc18u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_1fcc1c:
    // 0x1fcc1c: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x1fcc1cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1fcc20: 0x14450007  bne         $v0, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FCC20u;
    {
        const bool branch_taken_0x1fcc20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x1FCC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCC20u;
        // 0x1fcc24: 0x92a40000  lbu         $a0, 0x0($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcc20) {
            ctx->pc = 0x1FCC40u;
            goto label_1fcc40;
        }
    }
    ctx->pc = 0x1FCC28u;
    // 0x1fcc28: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1fcc28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fcc2c: 0x56a2fffb  bnel        $s5, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1FCC2Cu;
    {
        const bool branch_taken_0x1fcc2c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x1fcc2c) {
            ctx->pc = 0x1FCC30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FCC2Cu;
            // 0x1fcc30: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FCC1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fcc1c;
        }
    }
    ctx->pc = 0x1FCC34u;
    // 0x1fcc34: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1fcc34u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fcc38: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1fcc38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcc3c: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x1fcc3cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_1fcc40:
    // 0x1fcc40: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x1fcc40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1fcc44: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x1fcc44u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1fcc48: 0x100001ce  b           . + 4 + (0x1CE << 2)
    ctx->pc = 0x1FCC48u;
    {
        const bool branch_taken_0x1fcc48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCC48u;
        // 0x1fcc4c: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcc48) {
            ctx->pc = 0x1FD384u;
            goto label_1fd384;
        }
    }
    ctx->pc = 0x1FCC50u;
label_1fcc50:
    // 0x1fcc50: 0x8fa40034  lw          $a0, 0x34($sp)
    ctx->pc = 0x1fcc50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x1fcc54: 0x8fb10018  lw          $s1, 0x18($sp)
    ctx->pc = 0x1fcc54u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fcc58: 0x8fb2001c  lw          $s2, 0x1C($sp)
    ctx->pc = 0x1fcc58u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1fcc5c: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x1fcc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    // 0x1fcc60: 0x1080002b  beqz        $a0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1FCC60u;
    {
        const bool branch_taken_0x1fcc60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCC60u;
        // 0x1fcc64: 0xafa00050  sw          $zero, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcc60) {
            ctx->pc = 0x1FCD10u;
            goto label_1fcd10;
        }
    }
    ctx->pc = 0x1FCC68u;
    // 0x1fcc68: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1fcc68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fcc6c: 0x28570002  slti        $s7, $v0, 0x2
    ctx->pc = 0x1fcc6cu;
    SET_GPR_U64(ctx, 23, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1fcc70: 0x12e00007  beqz        $s7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FCC70u;
    {
        const bool branch_taken_0x1fcc70 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCC70u;
        // 0x1fcc74: 0x8fa40044  lw          $a0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcc70) {
            ctx->pc = 0x1FCC90u;
            goto label_1fcc90;
        }
    }
    ctx->pc = 0x1FCC78u;
    // 0x1fcc78: 0x1480001a  bnez        $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1FCC78u;
    {
        const bool branch_taken_0x1fcc78 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FCC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCC78u;
        // 0x1fcc7c: 0x24740433  addiu       $s4, $v1, 0x433 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 1075));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcc78) {
            ctx->pc = 0x1FCCE4u;
            goto label_1fcce4;
        }
    }
    ctx->pc = 0x1FCC80u;
    // 0x1fcc80: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1fcc80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1fcc84: 0x24020036  addiu       $v0, $zero, 0x36
    ctx->pc = 0x1fcc84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x1fcc88: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1FCC88u;
    {
        const bool branch_taken_0x1fcc88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCC88u;
        // 0x1fcc8c: 0x43a023  subu        $s4, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcc88) {
            ctx->pc = 0x1FCCE4u;
            goto label_1fcce4;
        }
    }
    ctx->pc = 0x1FCC90u;
label_1fcc90:
    // 0x1fcc90: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1fcc90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fcc94: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x1fcc94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1fcc98: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x1fcc98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1fcc9c: 0x70102a  slt         $v0, $v1, $s0
    ctx->pc = 0x1fcc9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1fcca0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FCCA0u;
    {
        const bool branch_taken_0x1fcca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FCCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCCA0u;
        // 0x1fcca4: 0x8fa4001c  lw          $a0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcca0) {
            ctx->pc = 0x1FCCB0u;
            goto label_1fccb0;
        }
    }
    ctx->pc = 0x1FCCA8u;
    // 0x1fcca8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1FCCA8u;
    {
        const bool branch_taken_0x1fcca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCCA8u;
        // 0x1fccac: 0x709023  subu        $s2, $v1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcca8) {
            ctx->pc = 0x1FCCCCu;
            goto label_1fcccc;
        }
    }
    ctx->pc = 0x1FCCB0u;
label_1fccb0:
    // 0x1fccb0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1fccb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fccb4: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1fccb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1fccb8: 0x2048023  subu        $s0, $s0, $a0
    ctx->pc = 0x1fccb8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x1fccbc: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x1fccbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1fccc0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1fccc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1fccc4: 0xafa4001c  sw          $a0, 0x1C($sp)
    ctx->pc = 0x1fccc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 4));
    // 0x1fccc8: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x1fccc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
label_1fcccc:
    // 0x1fcccc: 0x8fb40020  lw          $s4, 0x20($sp)
    ctx->pc = 0x1fccccu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fccd0: 0x6810005  bgez        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FCCD0u;
    {
        const bool branch_taken_0x1fccd0 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x1FCCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCCD0u;
        // 0x1fccd4: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fccd0) {
            ctx->pc = 0x1FCCE8u;
            goto label_1fcce8;
        }
    }
    ctx->pc = 0x1FCCD8u;
    // 0x1fccd8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1fccd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fccdc: 0x748823  subu        $s1, $v1, $s4
    ctx->pc = 0x1fccdcu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x1fcce0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1fcce0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fcce4:
    // 0x1fcce4: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1fcce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1fcce8:
    // 0x1fcce8: 0xc07ffc0  jal         func_1FFF00
    ctx->pc = 0x1FCCE8u;
    SET_GPR_U32(ctx, 31, 0x1FCCF0u);
    ctx->pc = 0x1FCCECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCCE8u;
    // 0x1fccec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFF00u, 0x1FCCE8u, 0x1FCCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCCF0u;
label_1fccf0:
    // 0x1fccf0: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x1fccf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x1fccf4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1fccf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1fccf8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1fccf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fccfc: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x1fccfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x1fcd00: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1fcd00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1fcd04: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x1fcd04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x1fcd08: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FCD08u;
    {
        const bool branch_taken_0x1fcd08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCD08u;
        // 0x1fcd0c: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcd08) {
            ctx->pc = 0x1FCD18u;
            goto label_1fcd18;
        }
    }
    ctx->pc = 0x1FCD10u;
label_1fcd10:
    // 0x1fcd10: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1fcd10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fcd14: 0x28770002  slti        $s7, $v1, 0x2
    ctx->pc = 0x1fcd14u;
    SET_GPR_U64(ctx, 23, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_1fcd18:
    // 0x1fcd18: 0x1a20000b  blez        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x1FCD18u;
    {
        const bool branch_taken_0x1fcd18 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x1FCD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCD18u;
        // 0x1fcd1c: 0x8fa40038  lw          $a0, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcd18) {
            ctx->pc = 0x1FCD48u;
            goto label_1fcd48;
        }
    }
    ctx->pc = 0x1FCD20u;
    // 0x1fcd20: 0x18800009  blez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FCD20u;
    {
        const bool branch_taken_0x1fcd20 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1FCD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCD20u;
        // 0x1fcd24: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcd20) {
            ctx->pc = 0x1FCD48u;
            goto label_1fcd48;
        }
    }
    ctx->pc = 0x1FCD28u;
    // 0x1fcd28: 0x234102a  slt         $v0, $s1, $s4
    ctx->pc = 0x1fcd28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x1fcd2c: 0x222a00b  movn        $s4, $s1, $v0
    ctx->pc = 0x1fcd2cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 17));
    // 0x1fcd30: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1fcd30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fcd34: 0x942023  subu        $a0, $a0, $s4
    ctx->pc = 0x1fcd34u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x1fcd38: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x1fcd38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x1fcd3c: 0x2348823  subu        $s1, $s1, $s4
    ctx->pc = 0x1fcd3cu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x1fcd40: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x1fcd40u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1fcd44: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x1fcd44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_1fcd48:
    // 0x1fcd48: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x1fcd48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1fcd4c: 0x1860001e  blez        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x1FCD4Cu;
    {
        const bool branch_taken_0x1fcd4c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1FCD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCD4Cu;
        // 0x1fcd50: 0x8fa40034  lw          $a0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcd4c) {
            ctx->pc = 0x1FCDC8u;
            goto label_1fcdc8;
        }
    }
    ctx->pc = 0x1FCD54u;
    // 0x1fcd54: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1FCD54u;
    {
        const bool branch_taken_0x1fcd54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCD54u;
        // 0x1fcd58: 0x8fa50048  lw          $a1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcd54) {
            ctx->pc = 0x1FCDB8u;
            goto label_1fcdb8;
        }
    }
    ctx->pc = 0x1FCD5Cu;
    // 0x1fcd5c: 0x1a40000d  blez        $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x1FCD5Cu;
    {
        const bool branch_taken_0x1fcd5c = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x1FCD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCD5Cu;
        // 0x1fcd60: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcd5c) {
            ctx->pc = 0x1FCD94u;
            goto label_1fcd94;
        }
    }
    ctx->pc = 0x1FCD64u;
    // 0x1fcd64: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1fcd64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcd68: 0xc08005a  jal         func_200168
    ctx->pc = 0x1FCD68u;
    SET_GPR_U32(ctx, 31, 0x1FCD70u);
    ctx->pc = 0x1FCD6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCD68u;
    // 0x1fcd6c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200168u, 0x1FCD68u, 0x1FCD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCD70u;
label_1fcd70:
    // 0x1fcd70: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x1fcd70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x1fcd74: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1fcd74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcd78: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1fcd78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fcd7c: 0xc07ffce  jal         func_1FFF38
    ctx->pc = 0x1FCD7Cu;
    SET_GPR_U32(ctx, 31, 0x1FCD84u);
    ctx->pc = 0x1FCD80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCD7Cu;
    // 0x1fcd80: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFF38u, 0x1FCD7Cu, 0x1FCD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCD84u;
label_1fcd84:
    // 0x1fcd84: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1fcd84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fcd88: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1fcd88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcd8c: 0xc07feca  jal         func_1FFB28
    ctx->pc = 0x1FCD8Cu;
    SET_GPR_U32(ctx, 31, 0x1FCD94u);
    ctx->pc = 0x1FCD90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCD8Cu;
    // 0x1fcd90: 0xafa20048  sw          $v0, 0x48($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFB28u, 0x1FCD8Cu, 0x1FCD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCD94u;
label_1fcd94:
    // 0x1fcd94: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1fcd94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1fcd98: 0x528023  subu        $s0, $v0, $s2
    ctx->pc = 0x1fcd98u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1fcd9c: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x1FCD9Cu;
    {
        const bool branch_taken_0x1fcd9c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCD9Cu;
        // 0x1fcda0: 0x8fa50048  lw          $a1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcd9c) {
            ctx->pc = 0x1FCDC8u;
            goto label_1fcdc8;
        }
    }
    ctx->pc = 0x1FCDA4u;
    // 0x1fcda4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1fcda4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcda8: 0xc08005a  jal         func_200168
    ctx->pc = 0x1FCDA8u;
    SET_GPR_U32(ctx, 31, 0x1FCDB0u);
    ctx->pc = 0x1FCDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCDA8u;
    // 0x1fcdac: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200168u, 0x1FCDA8u, 0x1FCDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCDB0u;
label_1fcdb0:
    // 0x1fcdb0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1FCDB0u;
    {
        const bool branch_taken_0x1fcdb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCDB0u;
        // 0x1fcdb4: 0xafa20048  sw          $v0, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcdb0) {
            ctx->pc = 0x1FCDC8u;
            goto label_1fcdc8;
        }
    }
    ctx->pc = 0x1FCDB8u;
label_1fcdb8:
    // 0x1fcdb8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1fcdb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcdbc: 0xc08005a  jal         func_200168
    ctx->pc = 0x1FCDBCu;
    SET_GPR_U32(ctx, 31, 0x1FCDC4u);
    ctx->pc = 0x1FCDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCDBCu;
    // 0x1fcdc0: 0x8fa6001c  lw          $a2, 0x1C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200168u, 0x1FCDBCu, 0x1FCDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCDC4u;
label_1fcdc4:
    // 0x1fcdc4: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x1fcdc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
label_1fcdc8:
    // 0x1fcdc8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1fcdc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcdcc: 0xc07ffc0  jal         func_1FFF00
    ctx->pc = 0x1FCDCCu;
    SET_GPR_U32(ctx, 31, 0x1FCDD4u);
    ctx->pc = 0x1FCDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCDCCu;
    // 0x1fcdd0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFF00u, 0x1FCDCCu, 0x1FCDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCDD4u;
label_1fcdd4:
    // 0x1fcdd4: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1fcdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1fcdd8: 0x18600006  blez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FCDD8u;
    {
        const bool branch_taken_0x1fcdd8 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1FCDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCDD8u;
        // 0x1fcddc: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcdd8) {
            ctx->pc = 0x1FCDF4u;
            goto label_1fcdf4;
        }
    }
    ctx->pc = 0x1FCDE0u;
    // 0x1fcde0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1fcde0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcde4: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1fcde4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcde8: 0xc08005a  jal         func_200168
    ctx->pc = 0x1FCDE8u;
    SET_GPR_U32(ctx, 31, 0x1FCDF0u);
    ctx->pc = 0x1FCDECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCDE8u;
    // 0x1fcdec: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200168u, 0x1FCDE8u, 0x1FCDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCDF0u;
label_1fcdf0:
    // 0x1fcdf0: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x1fcdf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
label_1fcdf4:
    // 0x1fcdf4: 0x12e00015  beqz        $s7, . + 4 + (0x15 << 2)
    ctx->pc = 0x1FCDF4u;
    {
        const bool branch_taken_0x1fcdf4 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCDF4u;
        // 0x1fcdf8: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcdf4) {
            ctx->pc = 0x1FCE4Cu;
            goto label_1fce4c;
        }
    }
    ctx->pc = 0x1FCDFCu;
    // 0x1fcdfc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1fcdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fce00: 0x2133a  dsrl        $v0, $v0, 12
    ctx->pc = 0x1fce00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
    // 0x1fce04: 0x2c21024  and         $v0, $s6, $v0
    ctx->pc = 0x1fce04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & GPR_U64(ctx, 2));
    // 0x1fce08: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x1FCE08u;
    {
        const bool branch_taken_0x1fce08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fce08) {
            ctx->pc = 0x1FCE0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FCE08u;
            // 0x1fce0c: 0xafa00040  sw          $zero, 0x40($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FCE48u;
            goto label_1fce48;
        }
    }
    ctx->pc = 0x1FCE10u;
    // 0x1fce10: 0x16103f  dsra32      $v0, $s6, 0
    ctx->pc = 0x1fce10u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 22) >> (32 + 0));
    // 0x1fce14: 0x3c037ff0  lui         $v1, 0x7FF0
    ctx->pc = 0x1fce14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
    // 0x1fce18: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1fce18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1fce1c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FCE1Cu;
    {
        const bool branch_taken_0x1fce1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCE1Cu;
        // 0x1fce20: 0x8fa40018  lw          $a0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fce1c) {
            ctx->pc = 0x1FCE44u;
            goto label_1fce44;
        }
    }
    ctx->pc = 0x1FCE24u;
    // 0x1fce24: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fce24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fce28: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1fce28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1fce2c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1fce2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1fce30: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x1fce30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
    // 0x1fce34: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1fce34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1fce38: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x1fce38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x1fce3c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1FCE3Cu;
    {
        const bool branch_taken_0x1fce3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCE3Cu;
        // 0x1fce40: 0xafa20038  sw          $v0, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fce3c) {
            ctx->pc = 0x1FCE48u;
            goto label_1fce48;
        }
    }
    ctx->pc = 0x1FCE44u;
label_1fce44:
    // 0x1fce44: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x1fce44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_1fce48:
    // 0x1fce48: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1fce48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1fce4c:
    // 0x1fce4c: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x1FCE4Cu;
    {
        const bool branch_taken_0x1fce4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCE4Cu;
        // 0x1fce50: 0x8fa30054  lw          $v1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fce4c) {
            ctx->pc = 0x1FCE78u;
            goto label_1fce78;
        }
    }
    ctx->pc = 0x1FCE54u;
    // 0x1fce54: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1fce54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1fce58: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1fce58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1fce5c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1fce5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fce60: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1fce60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fce64: 0xc07ff6e  jal         func_1FFDB8
    ctx->pc = 0x1FCE64u;
    SET_GPR_U32(ctx, 31, 0x1FCE6Cu);
    ctx->pc = 0x1FCE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCE64u;
    // 0x1fce68: 0x8c440014  lw          $a0, 0x14($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFDB8u, 0x1FCE64u, 0x1FCE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCE6Cu;
label_1fce6c:
    // 0x1fce6c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1fce6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1fce70: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FCE70u;
    {
        const bool branch_taken_0x1fce70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCE70u;
        // 0x1fce74: 0x821023  subu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fce70) {
            ctx->pc = 0x1FCE80u;
            goto label_1fce80;
        }
    }
    ctx->pc = 0x1FCE78u;
label_1fce78:
    // 0x1fce78: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1fce78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1fce7c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1fce7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1fce80:
    // 0x1fce80: 0x3054001f  andi        $s4, $v0, 0x1F
    ctx->pc = 0x1fce80u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x1fce84: 0x12800002  beqz        $s4, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FCE84u;
    {
        const bool branch_taken_0x1fce84 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCE84u;
        // 0x1fce88: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fce84) {
            ctx->pc = 0x1FCE90u;
            goto label_1fce90;
        }
    }
    ctx->pc = 0x1FCE8Cu;
    // 0x1fce8c: 0x54a023  subu        $s4, $v0, $s4
    ctx->pc = 0x1fce8cu;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_1fce90:
    // 0x1fce90: 0x2a820005  slti        $v0, $s4, 0x5
    ctx->pc = 0x1fce90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1fce94: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1FCE94u;
    {
        const bool branch_taken_0x1fce94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FCE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCE94u;
        // 0x1fce98: 0x2a820004  slti        $v0, $s4, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fce94) {
            ctx->pc = 0x1FCEC0u;
            goto label_1fcec0;
        }
    }
    ctx->pc = 0x1FCE9Cu;
    // 0x1fce9c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1fce9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1fcea0: 0x2694fffc  addiu       $s4, $s4, -0x4
    ctx->pc = 0x1fcea0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967292));
    // 0x1fcea4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1fcea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fcea8: 0x2348821  addu        $s1, $s1, $s4
    ctx->pc = 0x1fcea8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x1fceac: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x1fceacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x1fceb0: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1fceb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1fceb4: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x1fceb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x1fceb8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1FCEB8u;
    {
        const bool branch_taken_0x1fceb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCEB8u;
        // 0x1fcebc: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fceb8) {
            ctx->pc = 0x1FCEE4u;
            goto label_1fcee4;
        }
    }
    ctx->pc = 0x1FCEC0u;
label_1fcec0:
    // 0x1fcec0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FCEC0u;
    {
        const bool branch_taken_0x1fcec0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCEC0u;
        // 0x1fcec4: 0x8fa30038  lw          $v1, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcec0) {
            ctx->pc = 0x1FCEE4u;
            goto label_1fcee4;
        }
    }
    ctx->pc = 0x1FCEC8u;
    // 0x1fcec8: 0x2694001c  addiu       $s4, $s4, 0x1C
    ctx->pc = 0x1fcec8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 28));
    // 0x1fcecc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1fceccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fced0: 0x2348821  addu        $s1, $s1, $s4
    ctx->pc = 0x1fced0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x1fced4: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x1fced4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x1fced8: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x1fced8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x1fcedc: 0xafa30038  sw          $v1, 0x38($sp)
    ctx->pc = 0x1fcedcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
    // 0x1fcee0: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x1fcee0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_1fcee4:
    // 0x1fcee4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1fcee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fcee8: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FCEE8u;
    {
        const bool branch_taken_0x1fcee8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1FCEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCEE8u;
        // 0x1fceec: 0x8fa50048  lw          $a1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcee8) {
            ctx->pc = 0x1FCF00u;
            goto label_1fcf00;
        }
    }
    ctx->pc = 0x1FCEF0u;
    // 0x1fcef0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1fcef0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcef4: 0xc08009a  jal         func_200268
    ctx->pc = 0x1FCEF4u;
    SET_GPR_U32(ctx, 31, 0x1FCEFCu);
    ctx->pc = 0x1FCEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCEF4u;
    // 0x1fcef8: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200268u, 0x1FCEF4u, 0x1FCEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCEFCu;
label_1fcefc:
    // 0x1fcefc: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x1fcefcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
label_1fcf00:
    // 0x1fcf00: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1fcf00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1fcf04: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FCF04u;
    {
        const bool branch_taken_0x1fcf04 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1FCF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCF04u;
        // 0x1fcf08: 0x8fa50054  lw          $a1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcf04) {
            ctx->pc = 0x1FCF1Cu;
            goto label_1fcf1c;
        }
    }
    ctx->pc = 0x1FCF0Cu;
    // 0x1fcf0c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1fcf0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcf10: 0xc08009a  jal         func_200268
    ctx->pc = 0x1FCF10u;
    SET_GPR_U32(ctx, 31, 0x1FCF18u);
    ctx->pc = 0x1FCF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCF10u;
    // 0x1fcf14: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200268u, 0x1FCF10u, 0x1FCF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCF18u;
label_1fcf18:
    // 0x1fcf18: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x1fcf18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
label_1fcf1c:
    // 0x1fcf1c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1fcf1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fcf20: 0x10800016  beqz        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1FCF20u;
    {
        const bool branch_taken_0x1fcf20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCF20u;
        // 0x1fcf24: 0x8fa40048  lw          $a0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcf20) {
            ctx->pc = 0x1FCF7Cu;
            goto label_1fcf7c;
        }
    }
    ctx->pc = 0x1FCF28u;
    // 0x1fcf28: 0xc0800f8  jal         func_2003E0
    ctx->pc = 0x1FCF28u;
    SET_GPR_U32(ctx, 31, 0x1FCF30u);
    ctx->pc = 0x1FCF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCF28u;
    // 0x1fcf2c: 0x8fa50054  lw          $a1, 0x54($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2003E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2003E0u, 0x1FCF28u, 0x1FCF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCF30u;
label_1fcf30:
    // 0x1fcf30: 0x4410013  bgez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1FCF30u;
    {
        const bool branch_taken_0x1fcf30 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1FCF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCF30u;
        // 0x1fcf34: 0x8fa40020  lw          $a0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcf30) {
            ctx->pc = 0x1FCF80u;
            goto label_1fcf80;
        }
    }
    ctx->pc = 0x1FCF38u;
    // 0x1fcf38: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1fcf38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fcf3c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1fcf3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcf40: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1fcf40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1fcf44: 0xc07fed6  jal         func_1FFB58
    ctx->pc = 0x1FCF44u;
    SET_GPR_U32(ctx, 31, 0x1FCF4Cu);
    ctx->pc = 0x1FCF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCF44u;
    // 0x1fcf48: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFB58u, 0x1FCF44u, 0x1FCF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCF4Cu;
label_1fcf4c:
    // 0x1fcf4c: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x1fcf4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x1fcf50: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x1fcf50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x1fcf54: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FCF54u;
    {
        const bool branch_taken_0x1fcf54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCF54u;
        // 0x1fcf58: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcf54) {
            ctx->pc = 0x1FCF74u;
            goto label_1fcf74;
        }
    }
    ctx->pc = 0x1FCF5Cu;
    // 0x1fcf5c: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x1fcf5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1fcf60: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1fcf60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcf64: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1fcf64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1fcf68: 0xc07fed6  jal         func_1FFB58
    ctx->pc = 0x1FCF68u;
    SET_GPR_U32(ctx, 31, 0x1FCF70u);
    ctx->pc = 0x1FCF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCF68u;
    // 0x1fcf6c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFB58u, 0x1FCF68u, 0x1FCF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCF70u;
label_1fcf70:
    // 0x1fcf70: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x1fcf70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_1fcf74:
    // 0x1fcf74: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1fcf74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1fcf78: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x1fcf78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
label_1fcf7c:
    // 0x1fcf7c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1fcf7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1fcf80:
    // 0x1fcf80: 0x5c80001a  bgtzl       $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1FCF80u;
    {
        const bool branch_taken_0x1fcf80 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x1fcf80) {
            ctx->pc = 0x1FCF84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FCF80u;
            // 0x1fcf84: 0x8fa40034  lw          $a0, 0x34($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FCFECu;
            goto label_1fcfec;
        }
    }
    ctx->pc = 0x1FCF88u;
    // 0x1fcf88: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1fcf88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fcf8c: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x1fcf8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1fcf90: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x1FCF90u;
    {
        const bool branch_taken_0x1fcf90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fcf90) {
            ctx->pc = 0x1FCF94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FCF90u;
            // 0x1fcf94: 0x8fa40034  lw          $a0, 0x34($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FCFECu;
            goto label_1fcfec;
        }
    }
    ctx->pc = 0x1FCF98u;
    // 0x1fcf98: 0x480000b  bltz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x1FCF98u;
    {
        const bool branch_taken_0x1fcf98 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1FCF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCF98u;
        // 0x1fcf9c: 0x8fa50054  lw          $a1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcf98) {
            ctx->pc = 0x1FCFC8u;
            goto label_1fcfc8;
        }
    }
    ctx->pc = 0x1FCFA0u;
    // 0x1fcfa0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1fcfa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcfa4: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x1fcfa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1fcfa8: 0xc07fed6  jal         func_1FFB58
    ctx->pc = 0x1FCFA8u;
    SET_GPR_U32(ctx, 31, 0x1FCFB0u);
    ctx->pc = 0x1FCFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCFA8u;
    // 0x1fcfac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFB58u, 0x1FCFA8u, 0x1FCFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCFB0u;
label_1fcfb0:
    // 0x1fcfb0: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x1fcfb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    // 0x1fcfb4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1fcfb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fcfb8: 0xc0800f8  jal         func_2003E0
    ctx->pc = 0x1FCFB8u;
    SET_GPR_U32(ctx, 31, 0x1FCFC0u);
    ctx->pc = 0x1FCFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCFB8u;
    // 0x1fcfbc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2003E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2003E0u, 0x1FCFB8u, 0x1FCFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCFC0u;
label_1fcfc0:
    // 0x1fcfc0: 0x1c400005  bgtz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FCFC0u;
    {
        const bool branch_taken_0x1fcfc0 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1FCFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCFC0u;
        // 0x1fcfc4: 0x8fa30058  lw          $v1, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcfc0) {
            ctx->pc = 0x1FCFD8u;
            goto label_1fcfd8;
        }
    }
    ctx->pc = 0x1FCFC8u;
label_1fcfc8:
    // 0x1fcfc8: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x1fcfc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1fcfcc: 0x49827  nor         $s3, $zero, $a0
    ctx->pc = 0x1fcfccu;
    SET_GPR_U64(ctx, 19, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
    // 0x1fcfd0: 0x100000db  b           . + 4 + (0xDB << 2)
    ctx->pc = 0x1FCFD0u;
    {
        const bool branch_taken_0x1fcfd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCFD0u;
        // 0x1fcfd4: 0x26770001  addiu       $s7, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcfd0) {
            ctx->pc = 0x1FD340u;
            goto label_1fd340;
        }
    }
    ctx->pc = 0x1FCFD8u;
label_1fcfd8:
    // 0x1fcfd8: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x1fcfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
label_1fcfdc:
    // 0x1fcfdc: 0x26770002  addiu       $s7, $s3, 0x2
    ctx->pc = 0x1fcfdcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x1fcfe0: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x1fcfe0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1fcfe4: 0x100000d6  b           . + 4 + (0xD6 << 2)
    ctx->pc = 0x1FCFE4u;
    {
        const bool branch_taken_0x1fcfe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCFE4u;
        // 0x1fcfe8: 0x24750001  addiu       $s5, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcfe4) {
            ctx->pc = 0x1FD340u;
            goto label_1fd340;
        }
    }
    ctx->pc = 0x1FCFECu;
label_1fcfec:
    // 0x1fcfec: 0x10800095  beqz        $a0, . + 4 + (0x95 << 2)
    ctx->pc = 0x1FCFECu;
    {
        const bool branch_taken_0x1fcfec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCFECu;
        // 0x1fcff0: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcfec) {
            ctx->pc = 0x1FD244u;
            goto label_1fd244;
        }
    }
    ctx->pc = 0x1FCFF4u;
    // 0x1fcff4: 0x1a200005  blez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FCFF4u;
    {
        const bool branch_taken_0x1fcff4 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x1FCFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCFF4u;
        // 0x1fcff8: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcff4) {
            ctx->pc = 0x1FD00Cu;
            goto label_1fd00c;
        }
    }
    ctx->pc = 0x1FCFFCu;
    // 0x1fcffc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1fcffcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd000: 0xc08009a  jal         func_200268
    ctx->pc = 0x1FD000u;
    SET_GPR_U32(ctx, 31, 0x1FD008u);
    ctx->pc = 0x1FD004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD000u;
    // 0x1fd004: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200268u, 0x1FD000u, 0x1FD008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD008u;
label_1fd008:
    // 0x1fd008: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x1fd008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_1fd00c:
    // 0x1fd00c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1fd00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1fd010: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1fd010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fd014: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1FD014u;
    {
        const bool branch_taken_0x1fd014 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD014u;
        // 0x1fd018: 0xafa2004c  sw          $v0, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd014) {
            ctx->pc = 0x1FD060u;
            goto label_1fd060;
        }
    }
    ctx->pc = 0x1FD01Cu;
    // 0x1fd01c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1fd01cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1fd020: 0xc07fea0  jal         func_1FFA80
    ctx->pc = 0x1FD020u;
    SET_GPR_U32(ctx, 31, 0x1FD028u);
    ctx->pc = 0x1FD024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD020u;
    // 0x1fd024: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFA80u, 0x1FD020u, 0x1FD028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD028u;
label_1fd028:
    // 0x1fd028: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x1fd028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1fd02c: 0x8c860010  lw          $a2, 0x10($a0)
    ctx->pc = 0x1fd02cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1fd030: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x1fd030u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x1fd034: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1fd034u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1fd038: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x1fd038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x1fd03c: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x1fd03cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x1fd040: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x1fd040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1fd044: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x1FD044u;
    SET_GPR_U32(ctx, 31, 0x1FD04Cu);
    ctx->pc = 0x1FD048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD044u;
    // 0x1fd048: 0x2445000c  addiu       $a1, $v0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x1FD044u, 0x1FD04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD04Cu;
label_1fd04c:
    // 0x1fd04c: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x1fd04cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1fd050: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1fd050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd054: 0xc08009a  jal         func_200268
    ctx->pc = 0x1FD054u;
    SET_GPR_U32(ctx, 31, 0x1FD05Cu);
    ctx->pc = 0x1FD058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD054u;
    // 0x1fd058: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200268u, 0x1FD054u, 0x1FD05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD05Cu;
label_1fd05c:
    // 0x1fd05c: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x1fd05cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_1fd060:
    // 0x1fd060: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1fd060u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fd064: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1FD064u;
    {
        const bool branch_taken_0x1fd064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD064u;
        // 0x1fd068: 0x26770001  addiu       $s7, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd064) {
            ctx->pc = 0x1FD0E8u;
            goto label_1fd0e8;
        }
    }
    ctx->pc = 0x1FD06Cu;
    // 0x1fd06c: 0x0  nop
    ctx->pc = 0x1fd06cu;
    // NOP
label_1fd070:
    // 0x1fd070: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1fd070u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fd074: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1fd074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd078: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1fd078u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1fd07c: 0xc07fed6  jal         func_1FFB58
    ctx->pc = 0x1FD07Cu;
    SET_GPR_U32(ctx, 31, 0x1FD084u);
    ctx->pc = 0x1FD080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD07Cu;
    // 0x1fd080: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFB58u, 0x1FD07Cu, 0x1FD084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD084u;
label_1fd084:
    // 0x1fd084: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x1fd084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1fd088: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1fd088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1fd08c: 0x14640009  bne         $v1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FD08Cu;
    {
        const bool branch_taken_0x1fd08c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1FD090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD08Cu;
        // 0x1fd090: 0xafa20048  sw          $v0, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd08c) {
            ctx->pc = 0x1FD0B4u;
            goto label_1fd0b4;
        }
    }
    ctx->pc = 0x1FD094u;
    // 0x1fd094: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1fd094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd098: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1fd098u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1fd09c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1fd09cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd0a0: 0xc07fed6  jal         func_1FFB58
    ctx->pc = 0x1FD0A0u;
    SET_GPR_U32(ctx, 31, 0x1FD0A8u);
    ctx->pc = 0x1FD0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD0A0u;
    // 0x1fd0a4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFB58u, 0x1FD0A0u, 0x1FD0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD0A8u;
label_1fd0a8:
    // 0x1fd0a8: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x1fd0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x1fd0ac: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1FD0ACu;
    {
        const bool branch_taken_0x1fd0ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD0ACu;
        // 0x1fd0b0: 0xafa2004c  sw          $v0, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd0ac) {
            ctx->pc = 0x1FD0E4u;
            goto label_1fd0e4;
        }
    }
    ctx->pc = 0x1FD0B4u;
label_1fd0b4:
    // 0x1fd0b4: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x1fd0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1fd0b8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1fd0b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd0bc: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1fd0bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1fd0c0: 0xc07fed6  jal         func_1FFB58
    ctx->pc = 0x1FD0C0u;
    SET_GPR_U32(ctx, 31, 0x1FD0C8u);
    ctx->pc = 0x1FD0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD0C0u;
    // 0x1fd0c4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFB58u, 0x1FD0C0u, 0x1FD0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD0C8u;
label_1fd0c8:
    // 0x1fd0c8: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x1fd0c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1fd0cc: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1fd0ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd0d0: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x1fd0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x1fd0d4: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1fd0d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1fd0d8: 0xc07fed6  jal         func_1FFB58
    ctx->pc = 0x1FD0D8u;
    SET_GPR_U32(ctx, 31, 0x1FD0E0u);
    ctx->pc = 0x1FD0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD0D8u;
    // 0x1fd0dc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFB58u, 0x1FD0D8u, 0x1FD0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD0E0u;
label_1fd0e0:
    // 0x1fd0e0: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x1fd0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_1fd0e4:
    // 0x1fd0e4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1fd0e4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1fd0e8:
    // 0x1fd0e8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1fd0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fd0ec: 0xc07effe  jal         func_1FBFF8
    ctx->pc = 0x1FD0ECu;
    SET_GPR_U32(ctx, 31, 0x1FD0F4u);
    ctx->pc = 0x1FD0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD0ECu;
    // 0x1fd0f0: 0x8fa50054  lw          $a1, 0x54($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBFF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBFF8u, 0x1FD0ECu, 0x1FD0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD0F4u;
label_1fd0f4:
    // 0x1fd0f4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1fd0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fd0f8: 0x24530030  addiu       $s3, $v0, 0x30
    ctx->pc = 0x1fd0f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1fd0fc: 0xc0800f8  jal         func_2003E0
    ctx->pc = 0x1FD0FCu;
    SET_GPR_U32(ctx, 31, 0x1FD104u);
    ctx->pc = 0x1FD100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD0FCu;
    // 0x1fd100: 0x8fa5004c  lw          $a1, 0x4C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2003E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2003E0u, 0x1FD0FCu, 0x1FD104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD104u;
label_1fd104:
    // 0x1fd104: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x1fd104u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x1fd108: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1fd108u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd10c: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x1fd10cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1fd110: 0xc080112  jal         func_200448
    ctx->pc = 0x1FD110u;
    SET_GPR_U32(ctx, 31, 0x1FD118u);
    ctx->pc = 0x1FD114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD110u;
    // 0x1fd114: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200448u, 0x1FD110u, 0x1FD118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD118u;
label_1fd118:
    // 0x1fd118: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1fd118u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd11c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1fd11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1fd120: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FD120u;
    {
        const bool branch_taken_0x1fd120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FD124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD120u;
        // 0x1fd124: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd120) {
            ctx->pc = 0x1FD138u;
            goto label_1fd138;
        }
    }
    ctx->pc = 0x1FD128u;
    // 0x1fd128: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1fd128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fd12c: 0xc0800f8  jal         func_2003E0
    ctx->pc = 0x1FD12Cu;
    SET_GPR_U32(ctx, 31, 0x1FD134u);
    ctx->pc = 0x1FD130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD12Cu;
    // 0x1fd130: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2003E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2003E0u, 0x1FD12Cu, 0x1FD134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD134u;
label_1fd134:
    // 0x1fd134: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1fd134u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fd138:
    // 0x1fd138: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1fd138u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd13c: 0xc07feca  jal         func_1FFB28
    ctx->pc = 0x1FD13Cu;
    SET_GPR_U32(ctx, 31, 0x1FD144u);
    ctx->pc = 0x1FD140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD13Cu;
    // 0x1fd140: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFB28u, 0x1FD13Cu, 0x1FD144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD144u;
label_1fd144:
    // 0x1fd144: 0x1620000d  bnez        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x1FD144u;
    {
        const bool branch_taken_0x1fd144 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FD148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD144u;
        // 0x1fd148: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd144) {
            ctx->pc = 0x1FD17Cu;
            goto label_1fd17c;
        }
    }
    ctx->pc = 0x1FD14Cu;
    // 0x1fd14c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1FD14Cu;
    {
        const bool branch_taken_0x1fd14c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fd14c) {
            ctx->pc = 0x1FD17Cu;
            goto label_1fd17c;
        }
    }
    ctx->pc = 0x1FD154u;
    // 0x1fd154: 0x16103c  dsll32      $v0, $s6, 0
    ctx->pc = 0x1fd154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 0));
    // 0x1fd158: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1fd158u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1fd15c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1fd15cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1fd160: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FD160u;
    {
        const bool branch_taken_0x1fd160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FD164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD160u;
        // 0x1fd164: 0x24020039  addiu       $v0, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd160) {
            ctx->pc = 0x1FD17Cu;
            goto label_1fd17c;
        }
    }
    ctx->pc = 0x1FD168u;
    // 0x1fd168: 0x1262002a  beq         $s3, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x1FD168u;
    {
        const bool branch_taken_0x1fd168 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FD16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD168u;
        // 0x1fd16c: 0x10102a  slt         $v0, $zero, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd168) {
            ctx->pc = 0x1FD214u;
            goto label_1fd214;
        }
    }
    ctx->pc = 0x1FD170u;
    // 0x1fd170: 0x539821  addu        $s3, $v0, $s3
    ctx->pc = 0x1fd170u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1fd174: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x1FD174u;
    {
        const bool branch_taken_0x1fd174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD174u;
        // 0x1fd178: 0xa2b30000  sb          $s3, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd174) {
            ctx->pc = 0x1FD33Cu;
            goto label_1fd33c;
        }
    }
    ctx->pc = 0x1FD17Cu;
label_1fd17c:
    // 0x1fd17c: 0x600000a  bltz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x1FD17Cu;
    {
        const bool branch_taken_0x1fd17c = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x1fd17c) {
            ctx->pc = 0x1FD1A8u;
            goto label_1fd1a8;
        }
    }
    ctx->pc = 0x1FD184u;
    // 0x1fd184: 0x1600001f  bnez        $s0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1FD184u;
    {
        const bool branch_taken_0x1fd184 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FD188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD184u;
        // 0x1fd188: 0x8fa30008  lw          $v1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd184) {
            ctx->pc = 0x1FD204u;
            goto label_1fd204;
        }
    }
    ctx->pc = 0x1FD18Cu;
    // 0x1fd18c: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1FD18Cu;
    {
        const bool branch_taken_0x1fd18c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fd18c) {
            ctx->pc = 0x1FD204u;
            goto label_1fd204;
        }
    }
    ctx->pc = 0x1FD194u;
    // 0x1fd194: 0x16103c  dsll32      $v0, $s6, 0
    ctx->pc = 0x1fd194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 0));
    // 0x1fd198: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1fd198u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1fd19c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1fd19cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1fd1a0: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1FD1A0u;
    {
        const bool branch_taken_0x1fd1a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fd1a0) {
            ctx->pc = 0x1FD204u;
            goto label_1fd204;
        }
    }
    ctx->pc = 0x1FD1A8u;
label_1fd1a8:
    // 0x1fd1a8: 0x1a200014  blez        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1FD1A8u;
    {
        const bool branch_taken_0x1fd1a8 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x1FD1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD1A8u;
        // 0x1fd1ac: 0x8fa50048  lw          $a1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd1a8) {
            ctx->pc = 0x1FD1FCu;
            goto label_1fd1fc;
        }
    }
    ctx->pc = 0x1FD1B0u;
    // 0x1fd1b0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1fd1b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd1b4: 0xc08009a  jal         func_200268
    ctx->pc = 0x1FD1B4u;
    SET_GPR_U32(ctx, 31, 0x1FD1BCu);
    ctx->pc = 0x1FD1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD1B4u;
    // 0x1fd1b8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200268u, 0x1FD1B4u, 0x1FD1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD1BCu;
label_1fd1bc:
    // 0x1fd1bc: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x1fd1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x1fd1c0: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x1fd1c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x1fd1c4: 0xc0800f8  jal         func_2003E0
    ctx->pc = 0x1FD1C4u;
    SET_GPR_U32(ctx, 31, 0x1FD1CCu);
    ctx->pc = 0x1FD1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD1C4u;
    // 0x1fd1c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2003E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2003E0u, 0x1FD1C4u, 0x1FD1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD1CCu;
label_1fd1cc:
    // 0x1fd1cc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1fd1ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd1d0: 0x5e200007  bgtzl       $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FD1D0u;
    {
        const bool branch_taken_0x1fd1d0 = (GPR_S32(ctx, 17) > 0);
        if (branch_taken_0x1fd1d0) {
            ctx->pc = 0x1FD1D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD1D0u;
            // 0x1fd1d4: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD1F0u;
            goto label_1fd1f0;
        }
    }
    ctx->pc = 0x1FD1D8u;
    // 0x1fd1d8: 0x56200058  bnel        $s1, $zero, . + 4 + (0x58 << 2)
    ctx->pc = 0x1FD1D8u;
    {
        const bool branch_taken_0x1fd1d8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fd1d8) {
            ctx->pc = 0x1FD1DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD1D8u;
            // 0x1fd1dc: 0xa2b30000  sb          $s3, 0x0($s5) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD33Cu;
            goto label_1fd33c;
        }
    }
    ctx->pc = 0x1FD1E0u;
    // 0x1fd1e0: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x1fd1e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x1fd1e4: 0x50400055  beql        $v0, $zero, . + 4 + (0x55 << 2)
    ctx->pc = 0x1FD1E4u;
    {
        const bool branch_taken_0x1fd1e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd1e4) {
            ctx->pc = 0x1FD1E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD1E4u;
            // 0x1fd1e8: 0xa2b30000  sb          $s3, 0x0($s5) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD33Cu;
            goto label_1fd33c;
        }
    }
    ctx->pc = 0x1FD1ECu;
    // 0x1fd1ec: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1fd1ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1fd1f0:
    // 0x1fd1f0: 0x2402003a  addiu       $v0, $zero, 0x3A
    ctx->pc = 0x1fd1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x1fd1f4: 0x12620008  beq         $s3, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FD1F4u;
    {
        const bool branch_taken_0x1fd1f4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FD1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD1F4u;
        // 0x1fd1f8: 0x24020039  addiu       $v0, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd1f4) {
            ctx->pc = 0x1FD218u;
            goto label_1fd218;
        }
    }
    ctx->pc = 0x1FD1FCu;
label_1fd1fc:
    // 0x1fd1fc: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x1FD1FCu;
    {
        const bool branch_taken_0x1fd1fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD1FCu;
        // 0x1fd200: 0xa2b30000  sb          $s3, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd1fc) {
            ctx->pc = 0x1FD33Cu;
            goto label_1fd33c;
        }
    }
    ctx->pc = 0x1FD204u;
label_1fd204:
    // 0x1fd204: 0x1a200009  blez        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FD204u;
    {
        const bool branch_taken_0x1fd204 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x1FD208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD204u;
        // 0x1fd208: 0x24020039  addiu       $v0, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd204) {
            ctx->pc = 0x1FD22Cu;
            goto label_1fd22c;
        }
    }
    ctx->pc = 0x1FD20Cu;
    // 0x1fd20c: 0x16620005  bne         $s3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FD20Cu;
    {
        const bool branch_taken_0x1fd20c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FD210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD20Cu;
        // 0x1fd210: 0x26620001  addiu       $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd20c) {
            ctx->pc = 0x1FD224u;
            goto label_1fd224;
        }
    }
    ctx->pc = 0x1FD214u;
label_1fd214:
    // 0x1fd214: 0x24020039  addiu       $v0, $zero, 0x39
    ctx->pc = 0x1fd214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
label_1fd218:
    // 0x1fd218: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x1fd218u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1fd21c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1FD21Cu;
    {
        const bool branch_taken_0x1fd21c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD21Cu;
        // 0x1fd220: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd21c) {
            ctx->pc = 0x1FD2D0u;
            goto label_1fd2d0;
        }
    }
    ctx->pc = 0x1FD224u;
label_1fd224:
    // 0x1fd224: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x1FD224u;
    {
        const bool branch_taken_0x1fd224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD224u;
        // 0x1fd228: 0xa2a20000  sb          $v0, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd224) {
            ctx->pc = 0x1FD33Cu;
            goto label_1fd33c;
        }
    }
    ctx->pc = 0x1FD22Cu;
label_1fd22c:
    // 0x1fd22c: 0xa2b30000  sb          $s3, 0x0($s5)
    ctx->pc = 0x1fd22cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 19));
    // 0x1fd230: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1fd230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fd234: 0x1684ff8e  bne         $s4, $a0, . + 4 + (-0x72 << 2)
    ctx->pc = 0x1FD234u;
    {
        const bool branch_taken_0x1fd234 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 4));
        ctx->pc = 0x1FD238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD234u;
        // 0x1fd238: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd234) {
            ctx->pc = 0x1FD070u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fd070;
        }
    }
    ctx->pc = 0x1FD23Cu;
    // 0x1fd23c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1FD23Cu;
    {
        const bool branch_taken_0x1fd23c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD23Cu;
        // 0x1fd240: 0x8fa50048  lw          $a1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd23c) {
            ctx->pc = 0x1FD294u;
            goto label_1fd294;
        }
    }
    ctx->pc = 0x1FD244u;
label_1fd244:
    // 0x1fd244: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1FD244u;
    {
        const bool branch_taken_0x1fd244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD244u;
        // 0x1fd248: 0x26770001  addiu       $s7, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd244) {
            ctx->pc = 0x1FD26Cu;
            goto label_1fd26c;
        }
    }
    ctx->pc = 0x1FD24Cu;
    // 0x1fd24c: 0x0  nop
    ctx->pc = 0x1fd24cu;
    // NOP
label_1fd250:
    // 0x1fd250: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1fd250u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fd254: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1fd254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd258: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1fd258u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1fd25c: 0xc07fed6  jal         func_1FFB58
    ctx->pc = 0x1FD25Cu;
    SET_GPR_U32(ctx, 31, 0x1FD264u);
    ctx->pc = 0x1FD260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD25Cu;
    // 0x1fd260: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFB58u, 0x1FD25Cu, 0x1FD264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD264u;
label_1fd264:
    // 0x1fd264: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1fd264u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1fd268: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x1fd268u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
label_1fd26c:
    // 0x1fd26c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1fd26cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fd270: 0xc07effe  jal         func_1FBFF8
    ctx->pc = 0x1FD270u;
    SET_GPR_U32(ctx, 31, 0x1FD278u);
    ctx->pc = 0x1FD274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD270u;
    // 0x1fd274: 0x8fa50054  lw          $a1, 0x54($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBFF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBFF8u, 0x1FD270u, 0x1FD278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD278u;
label_1fd278:
    // 0x1fd278: 0x24530030  addiu       $s3, $v0, 0x30
    ctx->pc = 0x1fd278u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1fd27c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1fd27cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fd280: 0xa2b30000  sb          $s3, 0x0($s5)
    ctx->pc = 0x1fd280u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 19));
    // 0x1fd284: 0x283102a  slt         $v0, $s4, $v1
    ctx->pc = 0x1fd284u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1fd288: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x1FD288u;
    {
        const bool branch_taken_0x1fd288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FD28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD288u;
        // 0x1fd28c: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd288) {
            ctx->pc = 0x1FD250u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fd250;
        }
    }
    ctx->pc = 0x1FD290u;
    // 0x1fd290: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1fd290u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1fd294:
    // 0x1fd294: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1fd294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd298: 0xc08009a  jal         func_200268
    ctx->pc = 0x1FD298u;
    SET_GPR_U32(ctx, 31, 0x1FD2A0u);
    ctx->pc = 0x1FD29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD298u;
    // 0x1fd29c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200268u, 0x1FD298u, 0x1FD2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD2A0u;
label_1fd2a0:
    // 0x1fd2a0: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x1fd2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x1fd2a4: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x1fd2a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x1fd2a8: 0xc0800f8  jal         func_2003E0
    ctx->pc = 0x1FD2A8u;
    SET_GPR_U32(ctx, 31, 0x1FD2B0u);
    ctx->pc = 0x1FD2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD2A8u;
    // 0x1fd2ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2003E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2003E0u, 0x1FD2A8u, 0x1FD2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD2B0u;
label_1fd2b0:
    // 0x1fd2b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1fd2b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd2b4: 0x5e000007  bgtzl       $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FD2B4u;
    {
        const bool branch_taken_0x1fd2b4 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x1fd2b4) {
            ctx->pc = 0x1FD2B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD2B4u;
            // 0x1fd2b8: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD2D4u;
            goto label_1fd2d4;
        }
    }
    ctx->pc = 0x1FD2BCu;
    // 0x1fd2bc: 0x16000018  bnez        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1FD2BCu;
    {
        const bool branch_taken_0x1fd2bc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FD2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD2BCu;
        // 0x1fd2c0: 0x24030030  addiu       $v1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd2bc) {
            ctx->pc = 0x1FD320u;
            goto label_1fd320;
        }
    }
    ctx->pc = 0x1FD2C4u;
    // 0x1fd2c4: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x1fd2c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x1fd2c8: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x1FD2C8u;
    {
        const bool branch_taken_0x1fd2c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd2c8) {
            ctx->pc = 0x1FD2CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD2C8u;
            // 0x1fd2cc: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD324u;
            goto label_1fd324;
        }
    }
    ctx->pc = 0x1FD2D0u;
label_1fd2d0:
    // 0x1fd2d0: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x1fd2d0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_1fd2d4:
    // 0x1fd2d4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1FD2D4u;
    {
        const bool branch_taken_0x1fd2d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD2D4u;
        // 0x1fd2d8: 0x24030039  addiu       $v1, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd2d4) {
            ctx->pc = 0x1FD2ECu;
            goto label_1fd2ec;
        }
    }
    ctx->pc = 0x1FD2DCu;
    // 0x1fd2dc: 0x0  nop
    ctx->pc = 0x1fd2dcu;
    // NOP
label_1fd2e0:
    // 0x1fd2e0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1fd2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fd2e4: 0x12a40007  beq         $s5, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FD2E4u;
    {
        const bool branch_taken_0x1fd2e4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 4));
        ctx->pc = 0x1FD2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD2E4u;
        // 0x1fd2e8: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd2e4) {
            ctx->pc = 0x1FD304u;
            goto label_1fd304;
        }
    }
    ctx->pc = 0x1FD2ECu;
label_1fd2ec:
    // 0x1fd2ec: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x1fd2ecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1fd2f0: 0x1043fffb  beq         $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1FD2F0u;
    {
        const bool branch_taken_0x1fd2f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1FD2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD2F0u;
        // 0x1fd2f4: 0x92a40000  lbu         $a0, 0x0($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd2f0) {
            ctx->pc = 0x1FD2E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fd2e0;
        }
    }
    ctx->pc = 0x1FD2F8u;
    // 0x1fd2f8: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x1fd2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1fd2fc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1FD2FCu;
    {
        const bool branch_taken_0x1fd2fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD2FCu;
        // 0x1fd300: 0xa2a20000  sb          $v0, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd2fc) {
            ctx->pc = 0x1FD33Cu;
            goto label_1fd33c;
        }
    }
    ctx->pc = 0x1FD304u;
label_1fd304:
    // 0x1fd304: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fd304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fd308: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x1fd308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x1fd30c: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x1fd30cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x1fd310: 0x24750001  addiu       $s5, $v1, 0x1
    ctx->pc = 0x1fd310u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1fd314: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1FD314u;
    {
        const bool branch_taken_0x1fd314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD314u;
        // 0x1fd318: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd314) {
            ctx->pc = 0x1FD340u;
            goto label_1fd340;
        }
    }
    ctx->pc = 0x1FD31Cu;
    // 0x1fd31c: 0x0  nop
    ctx->pc = 0x1fd31cu;
    // NOP
label_1fd320:
    // 0x1fd320: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x1fd320u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_1fd324:
    // 0x1fd324: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x1fd324u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1fd328: 0x0  nop
    ctx->pc = 0x1fd328u;
    // NOP
    // 0x1fd32c: 0x0  nop
    ctx->pc = 0x1fd32cu;
    // NOP
    // 0x1fd330: 0x0  nop
    ctx->pc = 0x1fd330u;
    // NOP
    // 0x1fd334: 0x1043fffa  beq         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1FD334u;
    {
        const bool branch_taken_0x1fd334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1fd334) {
            ctx->pc = 0x1FD320u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fd320;
        }
    }
    ctx->pc = 0x1FD33Cu;
label_1fd33c:
    // 0x1fd33c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1fd33cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_1fd340:
    // 0x1fd340: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x1fd340u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x1fd344: 0xc07feca  jal         func_1FFB28
    ctx->pc = 0x1FD344u;
    SET_GPR_U32(ctx, 31, 0x1FD34Cu);
    ctx->pc = 0x1FD348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD344u;
    // 0x1fd348: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFB28u, 0x1FD344u, 0x1FD34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD34Cu;
label_1fd34c:
    // 0x1fd34c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1fd34cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1fd350: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x1FD350u;
    {
        const bool branch_taken_0x1fd350 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD350u;
        // 0x1fd354: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd350) {
            ctx->pc = 0x1FD384u;
            goto label_1fd384;
        }
    }
    ctx->pc = 0x1FD358u;
    // 0x1fd358: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FD358u;
    {
        const bool branch_taken_0x1fd358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD358u;
        // 0x1fd35c: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd358) {
            ctx->pc = 0x1FD374u;
            goto label_1fd374;
        }
    }
    ctx->pc = 0x1FD360u;
    // 0x1fd360: 0x10440003  beq         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FD360u;
    {
        const bool branch_taken_0x1fd360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1FD364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD360u;
        // 0x1fd364: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd360) {
            ctx->pc = 0x1FD370u;
            goto label_1fd370;
        }
    }
    ctx->pc = 0x1FD368u;
    // 0x1fd368: 0xc07feca  jal         func_1FFB28
    ctx->pc = 0x1FD368u;
    SET_GPR_U32(ctx, 31, 0x1FD370u);
    ctx->pc = 0x1FD36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD368u;
    // 0x1fd36c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFB28u, 0x1FD368u, 0x1FD370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD370u;
label_1fd370:
    // 0x1fd370: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x1fd370u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1fd374:
    // 0x1fd374: 0xc07feca  jal         func_1FFB28
    ctx->pc = 0x1FD374u;
    SET_GPR_U32(ctx, 31, 0x1FD37Cu);
    ctx->pc = 0x1FD378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD374u;
    // 0x1fd378: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFB28u, 0x1FD374u, 0x1FD37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD37Cu;
label_1fd37c:
    // 0x1fd37c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1FD37Cu;
    {
        const bool branch_taken_0x1fd37c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD37Cu;
        // 0x1fd380: 0x8fa50048  lw          $a1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd37c) {
            ctx->pc = 0x1FD388u;
            goto label_1fd388;
        }
    }
    ctx->pc = 0x1FD384u;
label_1fd384:
    // 0x1fd384: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1fd384u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1fd388:
    // 0x1fd388: 0xc07feca  jal         func_1FFB28
    ctx->pc = 0x1FD388u;
    SET_GPR_U32(ctx, 31, 0x1FD390u);
    ctx->pc = 0x1FD38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD388u;
    // 0x1fd38c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFB28u, 0x1FD388u, 0x1FD390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD390u;
label_1fd390:
    // 0x1fd390: 0xa2a00000  sb          $zero, 0x0($s5)
    ctx->pc = 0x1fd390u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1fd394: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1fd394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fd398: 0xac770000  sw          $s7, 0x0($v1)
    ctx->pc = 0x1fd398u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 23));
    // 0x1fd39c: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1fd39cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1fd3a0: 0x54800001  bnel        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FD3A0u;
    {
        const bool branch_taken_0x1fd3a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fd3a0) {
            ctx->pc = 0x1FD3A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD3A0u;
            // 0x1fd3a4: 0xac950000  sw          $s5, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD3A8u;
            goto label_1fd3a8;
        }
    }
    ctx->pc = 0x1FD3A8u;
label_1fd3a8:
    // 0x1fd3a8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1fd3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1fd3ac:
    // 0x1fd3ac: 0xdfbf00f0  ld          $ra, 0xF0($sp)
    ctx->pc = 0x1fd3acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1fd3b0: 0xdfbe00e0  ld          $fp, 0xE0($sp)
    ctx->pc = 0x1fd3b0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1fd3b4: 0xdfb700d0  ld          $s7, 0xD0($sp)
    ctx->pc = 0x1fd3b4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1fd3b8: 0xdfb600c0  ld          $s6, 0xC0($sp)
    ctx->pc = 0x1fd3b8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1fd3bc: 0xdfb500b0  ld          $s5, 0xB0($sp)
    ctx->pc = 0x1fd3bcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1fd3c0: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x1fd3c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1fd3c4: 0xdfb30090  ld          $s3, 0x90($sp)
    ctx->pc = 0x1fd3c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1fd3c8: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x1fd3c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1fd3cc: 0xdfb10070  ld          $s1, 0x70($sp)
    ctx->pc = 0x1fd3ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1fd3d0: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x1fd3d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1fd3d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD3D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD3D4u;
        // 0x1fd3d8: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD3D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FD3DCu;
}
