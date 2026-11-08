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

// Function: entry_00133558
// Address: 0x133558 - 0x1335bc
void entry_00133558_0x133558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00133558_0x133558");
#endif

    ctx->pc = 0x133558u;

    // 0x133558: 0x908c0040  lbu         $t4, 0x40($a0)
    ctx->pc = 0x133558u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x13355c: 0x240afffc  addiu       $t2, $zero, -0x4
    ctx->pc = 0x13355cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x133560: 0x300b0003  andi        $t3, $zero, 0x3
    ctx->pc = 0x133560u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x133564: 0x2408fff3  addiu       $t0, $zero, -0xD
    ctx->pc = 0x133564u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x133568: 0x64090004  daddiu      $t1, $zero, 0x4
    ctx->pc = 0x133568u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
    // 0x13356c: 0x2406ffcf  addiu       $a2, $zero, -0x31
    ctx->pc = 0x13356cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
    // 0x133570: 0xb3900  sll         $a3, $t3, 4
    ctx->pc = 0x133570u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x133574: 0x2403ff3f  addiu       $v1, $zero, -0xC1
    ctx->pc = 0x133574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967103));
    // 0x133578: 0x64050040  daddiu      $a1, $zero, 0x40
    ctx->pc = 0x133578u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)64);
    // 0x13357c: 0x18a5024  and         $t2, $t4, $t2
    ctx->pc = 0x13357cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 12) & GPR_U64(ctx, 10));
    // 0x133580: 0x14b5025  or          $t2, $t2, $t3
    ctx->pc = 0x133580u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 11));
    // 0x133584: 0xa08a0040  sb          $t2, 0x40($a0)
    ctx->pc = 0x133584u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 64), (uint8_t)GPR_U32(ctx, 10));
    // 0x133588: 0x908a0040  lbu         $t2, 0x40($a0)
    ctx->pc = 0x133588u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x13358c: 0x1484024  and         $t0, $t2, $t0
    ctx->pc = 0x13358cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) & GPR_U64(ctx, 8));
    // 0x133590: 0x1094025  or          $t0, $t0, $t1
    ctx->pc = 0x133590u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
    // 0x133594: 0xa0880040  sb          $t0, 0x40($a0)
    ctx->pc = 0x133594u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 64), (uint8_t)GPR_U32(ctx, 8));
    // 0x133598: 0x90880040  lbu         $t0, 0x40($a0)
    ctx->pc = 0x133598u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x13359c: 0x1063024  and         $a2, $t0, $a2
    ctx->pc = 0x13359cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & GPR_U64(ctx, 6));
    // 0x1335a0: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x1335a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x1335a4: 0xa0860040  sb          $a2, 0x40($a0)
    ctx->pc = 0x1335a4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 64), (uint8_t)GPR_U32(ctx, 6));
    // 0x1335a8: 0x90860040  lbu         $a2, 0x40($a0)
    ctx->pc = 0x1335a8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1335ac: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x1335acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1335b0: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1335b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1335b4: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x1335B4u;
    {
        const bool branch_taken_0x1335b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1335B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1335B4u;
        // 0x1335b8: 0xa0830040  sb          $v1, 0x40($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 64), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1335b4) {
            ctx->pc = 0x133688u;
            return;
        }
    }
    ctx->pc = 0x1335BCu;
}
