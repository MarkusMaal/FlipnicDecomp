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

// Function: entry_00198788
// Address: 0x198788 - 0x1987d8
void entry_00198788_0x198788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198788_0x198788");
#endif

    ctx->pc = 0x198788u;

    // 0x198788: 0xacc004d0  sw          $zero, 0x4D0($a2)
    ctx->pc = 0x198788u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1232), GPR_U32(ctx, 0));
    // 0x19878c: 0x8ea50670  lw          $a1, 0x670($s5)
    ctx->pc = 0x19878cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1648)));
    // 0x198790: 0x8ea40340  lw          $a0, 0x340($s5)
    ctx->pc = 0x198790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 832)));
    // 0x198794: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x198794u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x198798: 0x0  nop
    ctx->pc = 0x198798u;
    // NOP
    // 0x19879c: 0x0  nop
    ctx->pc = 0x19879cu;
    // NOP
    // 0x1987a0: 0x2012  mflo        $a0
    ctx->pc = 0x1987a0u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x1987a4: 0xacc40510  sw          $a0, 0x510($a2)
    ctx->pc = 0x1987a4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1296), GPR_U32(ctx, 4));
    // 0x1987a8: 0x8ea50670  lw          $a1, 0x670($s5)
    ctx->pc = 0x1987a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1648)));
    // 0x1987ac: 0x8ea40340  lw          $a0, 0x340($s5)
    ctx->pc = 0x1987acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 832)));
    // 0x1987b0: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x1987b0u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1987b4: 0x0  nop
    ctx->pc = 0x1987b4u;
    // NOP
    // 0x1987b8: 0x0  nop
    ctx->pc = 0x1987b8u;
    // NOP
    // 0x1987bc: 0x2010  mfhi        $a0
    ctx->pc = 0x1987bcu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1987c0: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x1987c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1987c4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1987C4u;
    {
        const bool branch_taken_0x1987c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1987C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1987C4u;
        // 0x1987c8: 0x24c70510  addiu       $a3, $a2, 0x510 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 1296));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1987c4) {
            ctx->pc = 0x1987D8u;
            return;
        }
    }
    ctx->pc = 0x1987CCu;
    // 0x1987cc: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x1987ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1987d0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1987d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1987d4: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x1987d4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    ctx->pc = 0x1987d8u;
}
