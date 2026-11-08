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

// Function: entry_0014327c
// Address: 0x14327c - 0x1432bc
void entry_0014327c_0x14327c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014327c_0x14327c");
#endif

    ctx->pc = 0x14327cu;

    // 0x14327c: 0x0  nop
    ctx->pc = 0x14327cu;
    // NOP
    // 0x143280: 0x8cd10014  lw          $s1, 0x14($a2)
    ctx->pc = 0x143280u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x143284: 0x16200020  bnez        $s1, . + 4 + (0x20 << 2)
    ctx->pc = 0x143284u;
    {
        const bool branch_taken_0x143284 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x143284) {
            ctx->pc = 0x143308u;
            return;
        }
    }
    ctx->pc = 0x14328Cu;
    // 0x14328c: 0x8e430034  lw          $v1, 0x34($s2)
    ctx->pc = 0x14328cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x143290: 0x5b140  sll         $s6, $a1, 5
    ctx->pc = 0x143290u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x143294: 0x761821  addu        $v1, $v1, $s6
    ctx->pc = 0x143294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x143298: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x143298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14329c: 0x8c630020  lw          $v1, 0x20($v1)
    ctx->pc = 0x14329cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1432a0: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x1432A0u;
    {
        const bool branch_taken_0x1432a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1432a0) {
            ctx->pc = 0x143358u;
            return;
        }
    }
    ctx->pc = 0x1432A8u;
    // 0x1432a8: 0x8e500008  lw          $s0, 0x8($s2)
    ctx->pc = 0x1432a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1432ac: 0x10082a  slt         $at, $zero, $s0
    ctx->pc = 0x1432acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1432b0: 0x10200029  beqz        $at, . + 4 + (0x29 << 2)
    ctx->pc = 0x1432B0u;
    {
        const bool branch_taken_0x1432b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1432B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1432B0u;
        // 0x1432b4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1432b0) {
            ctx->pc = 0x143358u;
            return;
        }
    }
    ctx->pc = 0x1432B8u;
    // 0x1432b8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1432b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1432bcu;
}
