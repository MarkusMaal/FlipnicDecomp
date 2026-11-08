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

// Function: entry_00139850
// Address: 0x139850 - 0x1398b4
void entry_00139850_0x139850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00139850_0x139850");
#endif

    ctx->pc = 0x139850u;

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
            return;
        }
    }
    ctx->pc = 0x1398B4u;
}
