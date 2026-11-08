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

// Function: entry_00198a1c
// Address: 0x198a1c - 0x198a68
void entry_00198a1c_0x198a1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198a1c_0x198a1c");
#endif

    ctx->pc = 0x198a1cu;

    // 0x198a1c: 0x0  nop
    ctx->pc = 0x198a1cu;
    // NOP
    // 0x198a20: 0x8ea30674  lw          $v1, 0x674($s5)
    ctx->pc = 0x198a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1652)));
    // 0x198a24: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x198a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x198a28: 0xaea30674  sw          $v1, 0x674($s5)
    ctx->pc = 0x198a28u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1652), GPR_U32(ctx, 3));
    // 0x198a2c: 0x8ea30670  lw          $v1, 0x670($s5)
    ctx->pc = 0x198a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1648)));
    // 0x198a30: 0x8ea40674  lw          $a0, 0x674($s5)
    ctx->pc = 0x198a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1652)));
    // 0x198a34: 0x14640027  bne         $v1, $a0, . + 4 + (0x27 << 2)
    ctx->pc = 0x198A34u;
    {
        const bool branch_taken_0x198a34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x198a34) {
            ctx->pc = 0x198AD4u;
            return;
        }
    }
    ctx->pc = 0x198A3Cu;
    // 0x198a3c: 0x8ea20664  lw          $v0, 0x664($s5)
    ctx->pc = 0x198a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1636)));
    // 0x198a40: 0x28810015  slti        $at, $a0, 0x15
    ctx->pc = 0x198a40u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x198a44: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x198A44u;
    {
        const bool branch_taken_0x198a44 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x198A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198A44u;
        // 0x198a48: 0x24510080  addiu       $s1, $v0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198a44) {
            ctx->pc = 0x198A68u;
            return;
        }
    }
    ctx->pc = 0x198A4Cu;
    // 0x198a4c: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x198a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x198a50: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x198a50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x198a54: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x198a54u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x198a58: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x198a58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x198a5c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x198a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x198a60: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x198A60u;
    {
        const bool branch_taken_0x198a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198A60u;
        // 0x198a64: 0x29840  sll         $s3, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198a60) {
            ctx->pc = 0x198A88u;
            return;
        }
    }
    ctx->pc = 0x198A68u;
}
