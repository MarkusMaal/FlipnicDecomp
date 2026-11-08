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

// Function: FUN_00202010
// Address: 0x202010 - 0x2021cc
void FUN_00202010_0x202010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00202010_0x202010");
#endif

    switch (ctx->pc) {
        case 0x202020u: goto label_202020;
        case 0x202140u: goto label_202140;
        case 0x202178u: goto label_202178;
        case 0x2021a8u: goto label_2021a8;
        default: break;
    }

    ctx->pc = 0x202010u;

    // 0x202010: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x202010u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202014: 0xa43825  or          $a3, $a1, $a0
    ctx->pc = 0x202014u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x202018: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x202018u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x20201c: 0x30e20007  andi        $v0, $a3, 0x7
    ctx->pc = 0x20201cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)7);
label_202020:
    // 0x202020: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x202020u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x202024: 0x14400054  bnez        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x202024u;
    {
        const bool branch_taken_0x202024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x202028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202024u;
        // 0x202028: 0x30e2000f  andi        $v0, $a3, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x202024) {
            ctx->pc = 0x202178u;
            goto label_202178;
        }
    }
    ctx->pc = 0x20202Cu;
    // 0x20202c: 0x142480a  movz        $t1, $t2, $v0
    ctx->pc = 0x20202cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 10));
    // 0x202030: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x202030u;
    {
        const bool branch_taken_0x202030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x202034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202030u;
        // 0x202034: 0xc9102b  sltu        $v0, $a2, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x202030) {
            ctx->pc = 0x2020E4u;
            goto label_2020e4;
        }
    }
    ctx->pc = 0x202038u;
    // 0x202038: 0x1440004f  bnez        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x202038u;
    {
        const bool branch_taken_0x202038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x202038) {
            ctx->pc = 0x202178u;
            goto label_202178;
        }
    }
    ctx->pc = 0x202040u;
    // 0x202040: 0x3c070101  lui         $a3, 0x101
    ctx->pc = 0x202040u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)257 << 16));
    // 0x202044: 0x34e70101  ori         $a3, $a3, 0x101
    ctx->pc = 0x202044u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)257);
    // 0x202048: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x202048u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x20204c: 0x34e70101  ori         $a3, $a3, 0x101
    ctx->pc = 0x20204cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)257);
    // 0x202050: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x202050u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x202054: 0x34e70101  ori         $a3, $a3, 0x101
    ctx->pc = 0x202054u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)257);
    // 0x202058: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x202058u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x20205c: 0x70e74b89  pcpyld      $t1, $a3, $a3
    ctx->pc = 0x20205cu;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 7)));
    // 0x202060: 0x70031ce9  pnor        $v1, $zero, $v1
    ctx->pc = 0x202060u;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x202064: 0x3c078080  lui         $a3, 0x8080
    ctx->pc = 0x202064u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32896 << 16));
    // 0x202068: 0x34e78080  ori         $a3, $a3, 0x8080
    ctx->pc = 0x202068u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32896);
    // 0x20206c: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x20206cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x202070: 0x34e78080  ori         $a3, $a3, 0x8080
    ctx->pc = 0x202070u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32896);
    // 0x202074: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x202074u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x202078: 0x34e78080  ori         $a3, $a3, 0x8080
    ctx->pc = 0x202078u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32896);
    // 0x20207c: 0x70691248  psubb       $v0, $v1, $t1
    ctx->pc = 0x20207cu;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 3), GPR_VEC(ctx, 9)));
    // 0x202080: 0x70e75389  pcpyld      $t2, $a3, $a3
    ctx->pc = 0x202080u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 7)));
    // 0x202084: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x202084u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x202088: 0x704a1489  pand        $v0, $v0, $t2
    ctx->pc = 0x202088u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x20208c: 0x70441ba9  pcpyud      $v1, $v0, $a0
    ctx->pc = 0x20208cu;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x202090: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x202090u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x202094: 0x14600037  bnez        $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x202094u;
    {
        const bool branch_taken_0x202094 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x202098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202094u;
        // 0x202098: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202094) {
            ctx->pc = 0x202174u;
            goto label_202174;
        }
    }
    ctx->pc = 0x20209Cu;
    // 0x20209c: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x20209cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2020a0: 0x24c6fff0  addiu       $a2, $a2, -0x10
    ctx->pc = 0x2020a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x2020a4: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x2020a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x2020a8: 0x2cc20010  sltiu       $v0, $a2, 0x10
    ctx->pc = 0x2020a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x2020ac: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x2020acu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
    // 0x2020b0: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x2020B0u;
    {
        const bool branch_taken_0x2020b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2020B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2020B0u;
        // 0x2020b4: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2020b0) {
            ctx->pc = 0x202174u;
            goto label_202174;
        }
    }
    ctx->pc = 0x2020B8u;
    // 0x2020b8: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x2020b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2020bc: 0x70021ce9  pnor        $v1, $zero, $v0
    ctx->pc = 0x2020bcu;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x2020c0: 0x70491248  psubb       $v0, $v0, $t1
    ctx->pc = 0x2020c0u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
    // 0x2020c4: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x2020c4u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x2020c8: 0x704a1489  pand        $v0, $v0, $t2
    ctx->pc = 0x2020c8u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x2020cc: 0x70441ba9  pcpyud      $v1, $v0, $a0
    ctx->pc = 0x2020ccu;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x2020d0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2020d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2020d4: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x2020D4u;
    {
        const bool branch_taken_0x2020d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2020d4) {
            ctx->pc = 0x2020D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2020D4u;
            // 0x2020d8: 0x78a30000  lq          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x202140u;
            goto label_202140;
        }
    }
    ctx->pc = 0x2020DCu;
    // 0x2020dc: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2020DCu;
    {
        const bool branch_taken_0x2020dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2020E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2020DCu;
        // 0x2020e0: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2020dc) {
            ctx->pc = 0x202178u;
            goto label_202178;
        }
    }
    ctx->pc = 0x2020E4u;
label_2020e4:
    // 0x2020e4: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2020E4u;
    {
        const bool branch_taken_0x2020e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2020e4) {
            ctx->pc = 0x202178u;
            goto label_202178;
        }
    }
    ctx->pc = 0x2020ECu;
    // 0x2020ec: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x2020ecu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2020f0: 0x3c090101  lui         $t1, 0x101
    ctx->pc = 0x2020f0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)257 << 16));
    // 0x2020f4: 0x35290101  ori         $t1, $t1, 0x101
    ctx->pc = 0x2020f4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)257);
    // 0x2020f8: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x2020f8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x2020fc: 0x35290101  ori         $t1, $t1, 0x101
    ctx->pc = 0x2020fcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)257);
    // 0x202100: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x202100u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x202104: 0x35290101  ori         $t1, $t1, 0x101
    ctx->pc = 0x202104u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)257);
    // 0x202108: 0x3c0a8080  lui         $t2, 0x8080
    ctx->pc = 0x202108u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)32896 << 16));
    // 0x20210c: 0x354a8080  ori         $t2, $t2, 0x8080
    ctx->pc = 0x20210cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32896);
    // 0x202110: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x202110u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x202114: 0x354a8080  ori         $t2, $t2, 0x8080
    ctx->pc = 0x202114u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32896);
    // 0x202118: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x202118u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x20211c: 0x354a8080  ori         $t2, $t2, 0x8080
    ctx->pc = 0x20211cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32896);
    // 0x202120: 0x69102f  dsubu       $v0, $v1, $t1
    ctx->pc = 0x202120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) - GPR_U64(ctx, 9));
    // 0x202124: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x202124u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x202128: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x202128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x20212c: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x20212cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x202130: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x202130u;
    {
        const bool branch_taken_0x202130 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x202134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202130u;
        // 0x202134: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202130) {
            ctx->pc = 0x202174u;
            goto label_202174;
        }
    }
    ctx->pc = 0x202138u;
    // 0x202138: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x202138u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x20213c: 0x0  nop
    ctx->pc = 0x20213cu;
    // NOP
label_202140:
    // 0x202140: 0x24c6fff8  addiu       $a2, $a2, -0x8
    ctx->pc = 0x202140u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x202144: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x202144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x202148: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x202148u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x20214c: 0xfce30000  sd          $v1, 0x0($a3)
    ctx->pc = 0x20214cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
    // 0x202150: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x202150u;
    {
        const bool branch_taken_0x202150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x202154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202150u;
        // 0x202154: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202150) {
            ctx->pc = 0x202174u;
            goto label_202174;
        }
    }
    ctx->pc = 0x202158u;
    // 0x202158: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x202158u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x20215c: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x20215cu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x202160: 0x49102f  dsubu       $v0, $v0, $t1
    ctx->pc = 0x202160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 9));
    // 0x202164: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x202164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x202168: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x202168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x20216c: 0x5040fff4  beql        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x20216Cu;
    {
        const bool branch_taken_0x20216c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20216c) {
            ctx->pc = 0x202170u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20216Cu;
            // 0x202170: 0xdca30000  ld          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x202140u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_202140;
        }
    }
    ctx->pc = 0x202174u;
label_202174:
    // 0x202174: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x202174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_202178:
    // 0x202178: 0x10c00012  beqz        $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x202178u;
    {
        const bool branch_taken_0x202178 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x20217Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202178u;
        // 0x20217c: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202178) {
            ctx->pc = 0x2021C4u;
            goto label_2021c4;
        }
    }
    ctx->pc = 0x202180u;
    // 0x202180: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x202180u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x202184: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x202184u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x202188: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x202188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x20218c: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x20218cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x202190: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x202190u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x202194: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x202194u;
    {
        const bool branch_taken_0x202194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x202198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202194u;
        // 0x202198: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202194) {
            ctx->pc = 0x202178u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_202178;
        }
    }
    ctx->pc = 0x20219Cu;
    // 0x20219c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x20219cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2021a0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2021A0u;
    {
        const bool branch_taken_0x2021a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2021A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2021A0u;
        // 0x2021a4: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2021a0) {
            ctx->pc = 0x2021C4u;
            goto label_2021c4;
        }
    }
    ctx->pc = 0x2021A8u;
label_2021a8:
    // 0x2021a8: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x2021a8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2021ac: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2021acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2021b0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2021b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2021b4: 0x0  nop
    ctx->pc = 0x2021b4u;
    // NOP
    // 0x2021b8: 0x0  nop
    ctx->pc = 0x2021b8u;
    // NOP
    // 0x2021bc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2021BCu;
    {
        const bool branch_taken_0x2021bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2021C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2021BCu;
        // 0x2021c0: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2021bc) {
            ctx->pc = 0x2021A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2021a8;
        }
    }
    ctx->pc = 0x2021C4u;
label_2021c4:
    // 0x2021c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2021C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2021C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2021C4u;
        // 0x2021c8: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2021C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2021CCu;
}
