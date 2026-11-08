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

// Function: FUN_001397b0
// Address: 0x1397b0 - 0x139994
void FUN_001397b0_0x1397b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001397b0_0x1397b0");
#endif

    ctx->pc = 0x1397b0u;

    // 0x1397b0: 0x10a0005c  beqz        $a1, . + 4 + (0x5C << 2)
    ctx->pc = 0x1397B0u;
    {
        const bool branch_taken_0x1397b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1397B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1397B0u;
        // 0x1397b4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1397b0) {
            ctx->pc = 0x139924u;
            goto label_139924;
        }
    }
    ctx->pc = 0x1397B8u;
    // 0x1397b8: 0x10a6003e  beq         $a1, $a2, . + 4 + (0x3E << 2)
    ctx->pc = 0x1397B8u;
    {
        const bool branch_taken_0x1397b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x1397BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1397B8u;
        // 0x1397bc: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1397b8) {
            ctx->pc = 0x1398B4u;
            goto label_1398b4;
        }
    }
    ctx->pc = 0x1397C0u;
    // 0x1397c0: 0x10a30023  beq         $a1, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x1397C0u;
    {
        const bool branch_taken_0x1397c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1397c0) {
            ctx->pc = 0x139850u;
            goto label_139850;
        }
    }
    ctx->pc = 0x1397C8u;
    // 0x1397c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1397c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1397cc: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1397CCu;
    {
        const bool branch_taken_0x1397cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1397cc) {
            ctx->pc = 0x1397DCu;
            goto label_1397dc;
        }
    }
    ctx->pc = 0x1397D4u;
    // 0x1397d4: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x1397D4u;
    {
        const bool branch_taken_0x1397d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1397d4) {
            ctx->pc = 0x13998Cu;
            goto label_13998c;
        }
    }
    ctx->pc = 0x1397DCu;
label_1397dc:
    // 0x1397dc: 0x908d0010  lbu         $t5, 0x10($a0)
    ctx->pc = 0x1397dcu;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1397e0: 0x240bfffc  addiu       $t3, $zero, -0x4
    ctx->pc = 0x1397e0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1397e4: 0x300c0003  andi        $t4, $zero, 0x3
    ctx->pc = 0x1397e4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x1397e8: 0x30c50003  andi        $a1, $a2, 0x3
    ctx->pc = 0x1397e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3);
    // 0x1397ec: 0x55080  sll         $t2, $a1, 2
    ctx->pc = 0x1397ecu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1397f0: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x1397f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x1397f4: 0x33180  sll         $a2, $v1, 6
    ctx->pc = 0x1397f4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x1397f8: 0x2409fff3  addiu       $t1, $zero, -0xD
    ctx->pc = 0x1397f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x1397fc: 0x2407ffcf  addiu       $a3, $zero, -0x31
    ctx->pc = 0x1397fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
    // 0x139800: 0xc4100  sll         $t0, $t4, 4
    ctx->pc = 0x139800u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
    // 0x139804: 0x2405ff3f  addiu       $a1, $zero, -0xC1
    ctx->pc = 0x139804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967103));
    // 0x139808: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x139808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x13980c: 0x1ab5824  and         $t3, $t5, $t3
    ctx->pc = 0x13980cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 13) & GPR_U64(ctx, 11));
    // 0x139810: 0x16c5825  or          $t3, $t3, $t4
    ctx->pc = 0x139810u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 12));
    // 0x139814: 0xa08b0010  sb          $t3, 0x10($a0)
    ctx->pc = 0x139814u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 11));
    // 0x139818: 0x908b0010  lbu         $t3, 0x10($a0)
    ctx->pc = 0x139818u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x13981c: 0x1694824  and         $t1, $t3, $t1
    ctx->pc = 0x13981cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 11) & GPR_U64(ctx, 9));
    // 0x139820: 0x12a4825  or          $t1, $t1, $t2
    ctx->pc = 0x139820u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
    // 0x139824: 0xa0890010  sb          $t1, 0x10($a0)
    ctx->pc = 0x139824u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 9));
    // 0x139828: 0x90890010  lbu         $t1, 0x10($a0)
    ctx->pc = 0x139828u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x13982c: 0x1273824  and         $a3, $t1, $a3
    ctx->pc = 0x13982cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) & GPR_U64(ctx, 7));
    // 0x139830: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x139830u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x139834: 0xa0870010  sb          $a3, 0x10($a0)
    ctx->pc = 0x139834u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 7));
    // 0x139838: 0x90870010  lbu         $a3, 0x10($a0)
    ctx->pc = 0x139838u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x13983c: 0xe52824  and         $a1, $a3, $a1
    ctx->pc = 0x13983cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x139840: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x139840u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x139844: 0xa0850010  sb          $a1, 0x10($a0)
    ctx->pc = 0x139844u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 5));
    // 0x139848: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x139848u;
    {
        const bool branch_taken_0x139848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13984Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139848u;
        // 0x13984c: 0xa0830014  sb          $v1, 0x14($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 20), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139848) {
            ctx->pc = 0x13998Cu;
            goto label_13998c;
        }
    }
    ctx->pc = 0x139850u;
label_139850:
    // 0x139850: 0x908c0010  lbu         $t4, 0x10($a0)
    ctx->pc = 0x139850u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x139854: 0x240afffc  addiu       $t2, $zero, -0x4
    ctx->pc = 0x139854u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x139858: 0x300b0003  andi        $t3, $zero, 0x3
    ctx->pc = 0x139858u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x13985c: 0x2408fff3  addiu       $t0, $zero, -0xD
    ctx->pc = 0x13985cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x139860: 0x64090004  daddiu      $t1, $zero, 0x4
    ctx->pc = 0x139860u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
    // 0x139864: 0x2406ffcf  addiu       $a2, $zero, -0x31
    ctx->pc = 0x139864u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
    // 0x139868: 0xb3900  sll         $a3, $t3, 4
    ctx->pc = 0x139868u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x13986c: 0x2403ff3f  addiu       $v1, $zero, -0xC1
    ctx->pc = 0x13986cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967103));
    // 0x139870: 0x64050040  daddiu      $a1, $zero, 0x40
    ctx->pc = 0x139870u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)64);
    // 0x139874: 0x18a5024  and         $t2, $t4, $t2
    ctx->pc = 0x139874u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 12) & GPR_U64(ctx, 10));
    // 0x139878: 0x14b5025  or          $t2, $t2, $t3
    ctx->pc = 0x139878u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 11));
    // 0x13987c: 0xa08a0010  sb          $t2, 0x10($a0)
    ctx->pc = 0x13987cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 10));
    // 0x139880: 0x908a0010  lbu         $t2, 0x10($a0)
    ctx->pc = 0x139880u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x139884: 0x1484024  and         $t0, $t2, $t0
    ctx->pc = 0x139884u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) & GPR_U64(ctx, 8));
    // 0x139888: 0x1094025  or          $t0, $t0, $t1
    ctx->pc = 0x139888u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
    // 0x13988c: 0xa0880010  sb          $t0, 0x10($a0)
    ctx->pc = 0x13988cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 8));
    // 0x139890: 0x90880010  lbu         $t0, 0x10($a0)
    ctx->pc = 0x139890u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x139894: 0x1063024  and         $a2, $t0, $a2
    ctx->pc = 0x139894u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & GPR_U64(ctx, 6));
    // 0x139898: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x139898u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x13989c: 0xa0860010  sb          $a2, 0x10($a0)
    ctx->pc = 0x13989cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 6));
    // 0x1398a0: 0x90860010  lbu         $a2, 0x10($a0)
    ctx->pc = 0x1398a0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1398a4: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x1398a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1398a8: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1398a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1398ac: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x1398ACu;
    {
        const bool branch_taken_0x1398ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1398B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1398ACu;
        // 0x1398b0: 0xa0830010  sb          $v1, 0x10($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1398ac) {
            ctx->pc = 0x13998Cu;
            goto label_13998c;
        }
    }
    ctx->pc = 0x1398B4u;
label_1398b4:
    // 0x1398b4: 0x908d0010  lbu         $t5, 0x10($a0)
    ctx->pc = 0x1398b4u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1398b8: 0x30030003  andi        $v1, $zero, 0x3
    ctx->pc = 0x1398b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x1398bc: 0x240bfffc  addiu       $t3, $zero, -0x4
    ctx->pc = 0x1398bcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1398c0: 0x30cc0003  andi        $t4, $a2, 0x3
    ctx->pc = 0x1398c0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3);
    // 0x1398c4: 0x2409fff3  addiu       $t1, $zero, -0xD
    ctx->pc = 0x1398c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x1398c8: 0x35080  sll         $t2, $v1, 2
    ctx->pc = 0x1398c8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1398cc: 0x34100  sll         $t0, $v1, 4
    ctx->pc = 0x1398ccu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1398d0: 0x2407ffcf  addiu       $a3, $zero, -0x31
    ctx->pc = 0x1398d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
    // 0x1398d4: 0x2405ff3f  addiu       $a1, $zero, -0xC1
    ctx->pc = 0x1398d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967103));
    // 0x1398d8: 0x64060040  daddiu      $a2, $zero, 0x40
    ctx->pc = 0x1398d8u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)64);
    // 0x1398dc: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1398dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1398e0: 0x1ab5824  and         $t3, $t5, $t3
    ctx->pc = 0x1398e0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 13) & GPR_U64(ctx, 11));
    // 0x1398e4: 0x16c5825  or          $t3, $t3, $t4
    ctx->pc = 0x1398e4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 12));
    // 0x1398e8: 0xa08b0010  sb          $t3, 0x10($a0)
    ctx->pc = 0x1398e8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 11));
    // 0x1398ec: 0x908b0010  lbu         $t3, 0x10($a0)
    ctx->pc = 0x1398ecu;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1398f0: 0x1694824  and         $t1, $t3, $t1
    ctx->pc = 0x1398f0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 11) & GPR_U64(ctx, 9));
    // 0x1398f4: 0x12a4825  or          $t1, $t1, $t2
    ctx->pc = 0x1398f4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
    // 0x1398f8: 0xa0890010  sb          $t1, 0x10($a0)
    ctx->pc = 0x1398f8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 9));
    // 0x1398fc: 0x90890010  lbu         $t1, 0x10($a0)
    ctx->pc = 0x1398fcu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x139900: 0x1273824  and         $a3, $t1, $a3
    ctx->pc = 0x139900u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) & GPR_U64(ctx, 7));
    // 0x139904: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x139904u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x139908: 0xa0870010  sb          $a3, 0x10($a0)
    ctx->pc = 0x139908u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 7));
    // 0x13990c: 0x90870010  lbu         $a3, 0x10($a0)
    ctx->pc = 0x13990cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x139910: 0xe52824  and         $a1, $a3, $a1
    ctx->pc = 0x139910u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x139914: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x139914u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x139918: 0xa0850010  sb          $a1, 0x10($a0)
    ctx->pc = 0x139918u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 5));
    // 0x13991c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x13991Cu;
    {
        const bool branch_taken_0x13991c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13991Cu;
        // 0x139920: 0xa0830014  sb          $v1, 0x14($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 20), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13991c) {
            ctx->pc = 0x13998Cu;
            goto label_13998c;
        }
    }
    ctx->pc = 0x139924u;
label_139924:
    // 0x139924: 0x908d0010  lbu         $t5, 0x10($a0)
    ctx->pc = 0x139924u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x139928: 0x240bfffc  addiu       $t3, $zero, -0x4
    ctx->pc = 0x139928u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x13992c: 0x300c0003  andi        $t4, $zero, 0x3
    ctx->pc = 0x13992cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x139930: 0x2409fff3  addiu       $t1, $zero, -0xD
    ctx->pc = 0x139930u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x139934: 0x640a0004  daddiu      $t2, $zero, 0x4
    ctx->pc = 0x139934u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
    // 0x139938: 0x2407ffcf  addiu       $a3, $zero, -0x31
    ctx->pc = 0x139938u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
    // 0x13993c: 0xc4100  sll         $t0, $t4, 4
    ctx->pc = 0x13993cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
    // 0x139940: 0x2405ff3f  addiu       $a1, $zero, -0xC1
    ctx->pc = 0x139940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967103));
    // 0x139944: 0x64060040  daddiu      $a2, $zero, 0x40
    ctx->pc = 0x139944u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)64);
    // 0x139948: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x139948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x13994c: 0x1ab5824  and         $t3, $t5, $t3
    ctx->pc = 0x13994cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 13) & GPR_U64(ctx, 11));
    // 0x139950: 0x16c5825  or          $t3, $t3, $t4
    ctx->pc = 0x139950u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 12));
    // 0x139954: 0xa08b0010  sb          $t3, 0x10($a0)
    ctx->pc = 0x139954u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 11));
    // 0x139958: 0x908b0010  lbu         $t3, 0x10($a0)
    ctx->pc = 0x139958u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x13995c: 0x1694824  and         $t1, $t3, $t1
    ctx->pc = 0x13995cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 11) & GPR_U64(ctx, 9));
    // 0x139960: 0x12a4825  or          $t1, $t1, $t2
    ctx->pc = 0x139960u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
    // 0x139964: 0xa0890010  sb          $t1, 0x10($a0)
    ctx->pc = 0x139964u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 9));
    // 0x139968: 0x90890010  lbu         $t1, 0x10($a0)
    ctx->pc = 0x139968u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x13996c: 0x1273824  and         $a3, $t1, $a3
    ctx->pc = 0x13996cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) & GPR_U64(ctx, 7));
    // 0x139970: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x139970u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x139974: 0xa0870010  sb          $a3, 0x10($a0)
    ctx->pc = 0x139974u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 7));
    // 0x139978: 0x90870010  lbu         $a3, 0x10($a0)
    ctx->pc = 0x139978u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x13997c: 0xe52824  and         $a1, $a3, $a1
    ctx->pc = 0x13997cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x139980: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x139980u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x139984: 0xa0850010  sb          $a1, 0x10($a0)
    ctx->pc = 0x139984u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 5));
    // 0x139988: 0xa0830014  sb          $v1, 0x14($a0)
    ctx->pc = 0x139988u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 20), (uint8_t)GPR_U32(ctx, 3));
label_13998c:
    // 0x13998c: 0x3e00008  jr          $ra
    ctx->pc = 0x13998Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13998Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x139994u;
}
