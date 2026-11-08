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

// Function: entry_00147bc0
// Address: 0x147bc0 - 0x147c24
void entry_00147bc0_0x147bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00147bc0_0x147bc0");
#endif

    ctx->pc = 0x147bc0u;

    // 0x147bc0: 0x908c0010  lbu         $t4, 0x10($a0)
    ctx->pc = 0x147bc0u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x147bc4: 0x240afffc  addiu       $t2, $zero, -0x4
    ctx->pc = 0x147bc4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x147bc8: 0x300b0003  andi        $t3, $zero, 0x3
    ctx->pc = 0x147bc8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x147bcc: 0x2408fff3  addiu       $t0, $zero, -0xD
    ctx->pc = 0x147bccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x147bd0: 0x64090004  daddiu      $t1, $zero, 0x4
    ctx->pc = 0x147bd0u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
    // 0x147bd4: 0x2406ffcf  addiu       $a2, $zero, -0x31
    ctx->pc = 0x147bd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
    // 0x147bd8: 0xb3900  sll         $a3, $t3, 4
    ctx->pc = 0x147bd8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x147bdc: 0x2403ff3f  addiu       $v1, $zero, -0xC1
    ctx->pc = 0x147bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967103));
    // 0x147be0: 0x64050040  daddiu      $a1, $zero, 0x40
    ctx->pc = 0x147be0u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)64);
    // 0x147be4: 0x18a5024  and         $t2, $t4, $t2
    ctx->pc = 0x147be4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 12) & GPR_U64(ctx, 10));
    // 0x147be8: 0x14b5025  or          $t2, $t2, $t3
    ctx->pc = 0x147be8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 11));
    // 0x147bec: 0xa08a0010  sb          $t2, 0x10($a0)
    ctx->pc = 0x147becu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 10));
    // 0x147bf0: 0x908a0010  lbu         $t2, 0x10($a0)
    ctx->pc = 0x147bf0u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x147bf4: 0x1484024  and         $t0, $t2, $t0
    ctx->pc = 0x147bf4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) & GPR_U64(ctx, 8));
    // 0x147bf8: 0x1094025  or          $t0, $t0, $t1
    ctx->pc = 0x147bf8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
    // 0x147bfc: 0xa0880010  sb          $t0, 0x10($a0)
    ctx->pc = 0x147bfcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 8));
    // 0x147c00: 0x90880010  lbu         $t0, 0x10($a0)
    ctx->pc = 0x147c00u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x147c04: 0x1063024  and         $a2, $t0, $a2
    ctx->pc = 0x147c04u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & GPR_U64(ctx, 6));
    // 0x147c08: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x147c08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x147c0c: 0xa0860010  sb          $a2, 0x10($a0)
    ctx->pc = 0x147c0cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 6));
    // 0x147c10: 0x90860010  lbu         $a2, 0x10($a0)
    ctx->pc = 0x147c10u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x147c14: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x147c14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x147c18: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x147c18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x147c1c: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x147C1Cu;
    {
        const bool branch_taken_0x147c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147C1Cu;
        // 0x147c20: 0xa0830010  sb          $v1, 0x10($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147c1c) {
            ctx->pc = 0x147CF4u;
            return;
        }
    }
    ctx->pc = 0x147C24u;
}
