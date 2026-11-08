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

// Function: entry_00139414
// Address: 0x139414 - 0x13952c
void entry_00139414_0x139414(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00139414_0x139414");
#endif

    ctx->pc = 0x139414u;

    // 0x139414: 0x0  nop
    ctx->pc = 0x139414u;
    // NOP
    // 0x139418: 0x8f8384e4  lw          $v1, -0x7B1C($gp)
    ctx->pc = 0x139418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935780)));
    // 0x13941c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x13941cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x139420: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x139420u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x139424: 0x3c021400  lui         $v0, 0x1400
    ctx->pc = 0x139424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5120 << 16));
    // 0x139428: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x139428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x13942c: 0xa0860003  sb          $a2, 0x3($a0)
    ctx->pc = 0x13942cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 6));
    // 0x139430: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x139430u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x139434: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x139434u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x139438: 0xa4800000  sh          $zero, 0x0($a0)
    ctx->pc = 0x139438u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x13943c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x13943cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x139440: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x139440u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x139444: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x139444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x139448: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x139448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x13944c: 0x12a00064  beqz        $s5, . + 4 + (0x64 << 2)
    ctx->pc = 0x13944Cu;
    {
        const bool branch_taken_0x13944c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x139450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13944Cu;
        // 0x139450: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13944c) {
            ctx->pc = 0x1395E0u;
            return;
        }
    }
    ctx->pc = 0x139454u;
    // 0x139454: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x139454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x139458: 0x2c92018  mult        $a0, $s6, $t1
    ctx->pc = 0x139458u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x13945c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x13945cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x139460: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x139460u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x139464: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x139464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x139468: 0xafa301dc  sw          $v1, 0x1DC($sp)
    ctx->pc = 0x139468u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 476), GPR_U32(ctx, 3));
    // 0x13946c: 0x8fa301dc  lw          $v1, 0x1DC($sp)
    ctx->pc = 0x13946cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x139470: 0xa0660003  sb          $a2, 0x3($v1)
    ctx->pc = 0x139470u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 6));
    // 0x139474: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x139474u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x139478: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x139478u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x13947c: 0xa4600000  sh          $zero, 0x0($v1)
    ctx->pc = 0x13947cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x139480: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x139480u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x139484: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x139484u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x139488: 0x8fa201dc  lw          $v0, 0x1DC($sp)
    ctx->pc = 0x139488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x13948c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x13948cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x139490: 0xafa201dc  sw          $v0, 0x1DC($sp)
    ctx->pc = 0x139490u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 476), GPR_U32(ctx, 2));
    // 0x139494: 0x8e820090  lw          $v0, 0x90($s4)
    ctx->pc = 0x139494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x139498: 0x8c420068  lw          $v0, 0x68($v0)
    ctx->pc = 0x139498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x13949c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x13949cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1394a0: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1394A0u;
    {
        const bool branch_taken_0x1394a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1394A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1394A0u;
        // 0x1394a4: 0x27a501dc  addiu       $a1, $sp, 0x1DC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 476));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1394a0) {
            ctx->pc = 0x13952Cu;
            return;
        }
    }
    ctx->pc = 0x1394A8u;
    // 0x1394a8: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x1394a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1394ac: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x1394acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1394b0: 0x3c0a0100  lui         $t2, 0x100
    ctx->pc = 0x1394b0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)256 << 16));
    // 0x1394b4: 0x3c0c6c00  lui         $t4, 0x6C00
    ctx->pc = 0x1394b4u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)27648 << 16));
    // 0x1394b8: 0x358d8021  ori         $t5, $t4, 0x8021
    ctx->pc = 0x1394b8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)32801);
    // 0x1394bc: 0x75c00  sll         $t3, $a3, 16
    ctx->pc = 0x1394bcu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x1394c0: 0x25d1821  addu        $v1, $s2, $sp
    ctx->pc = 0x1394c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x1394c4: 0x810c0  sll         $v0, $t0, 3
    ctx->pc = 0x1394c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x1394c8: 0x354a0104  ori         $t2, $t2, 0x104
    ctx->pc = 0x1394c8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)260);
    // 0x1394cc: 0x16d6825  or          $t5, $t3, $t5
    ctx->pc = 0x1394ccu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 11) | GPR_U64(ctx, 13));
    // 0x1394d0: 0x358c8121  ori         $t4, $t4, 0x8121
    ctx->pc = 0x1394d0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)33057);
    // 0x1394d4: 0xa0c40003  sb          $a0, 0x3($a2)
    ctx->pc = 0x1394d4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x1394d8: 0x16c5825  or          $t3, $t3, $t4
    ctx->pc = 0x1394d8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 12));
    // 0x1394dc: 0xa0c00002  sb          $zero, 0x2($a2)
    ctx->pc = 0x1394dcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1394e0: 0x8c6301a8  lw          $v1, 0x1A8($v1)
    ctx->pc = 0x1394e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 424)));
    // 0x1394e4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1394e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1394e8: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x1394e8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x1394ec: 0xa4c70000  sh          $a3, 0x0($a2)
    ctx->pc = 0x1394ecu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x1394f0: 0xacca0008  sw          $t2, 0x8($a2)
    ctx->pc = 0x1394f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 10));
    // 0x1394f4: 0xaccd000c  sw          $t5, 0xC($a2)
    ctx->pc = 0x1394f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 13));
    // 0x1394f8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1394f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1394fc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1394fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x139500: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x139500u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x139504: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x139504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x139508: 0xa0440003  sb          $a0, 0x3($v0)
    ctx->pc = 0x139508u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x13950c: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x13950cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x139510: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x139510u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x139514: 0xa4470000  sh          $a3, 0x0($v0)
    ctx->pc = 0x139514u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x139518: 0xac4a0008  sw          $t2, 0x8($v0)
    ctx->pc = 0x139518u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 10));
    // 0x13951c: 0xac4b000c  sw          $t3, 0xC($v0)
    ctx->pc = 0x13951cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 11));
    // 0x139520: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x139520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x139524: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x139524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x139528: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x139528u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x13952cu;
}
