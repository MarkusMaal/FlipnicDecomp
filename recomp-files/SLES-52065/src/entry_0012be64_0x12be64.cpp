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

// Function: entry_0012be64
// Address: 0x12be64 - 0x12be8c
void entry_0012be64_0x12be64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012be64_0x12be64");
#endif

    ctx->pc = 0x12be64u;

    // 0x12be64: 0x8082a  slt         $at, $zero, $t0
    ctx->pc = 0x12be64u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x12be68: 0x10200070  beqz        $at, . + 4 + (0x70 << 2)
    ctx->pc = 0x12BE68u;
    {
        const bool branch_taken_0x12be68 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BE68u;
        // 0x12be6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12be68) {
            ctx->pc = 0x12C02Cu;
            return;
        }
    }
    ctx->pc = 0x12BE70u;
    // 0x12be70: 0x29010009  slti        $at, $t0, 0x9
    ctx->pc = 0x12be70u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x12be74: 0x14200059  bnez        $at, . + 4 + (0x59 << 2)
    ctx->pc = 0x12BE74u;
    {
        const bool branch_taken_0x12be74 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BE74u;
        // 0x12be78: 0x2506fff8  addiu       $a2, $t0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12be74) {
            ctx->pc = 0x12BFDCu;
            return;
        }
    }
    ctx->pc = 0x12BE7Cu;
    // 0x12be7c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x12be7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12be80: 0x8c890008  lw          $t1, 0x8($a0)
    ctx->pc = 0x12be80u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x12be84: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x12be84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x12be88: 0x0  nop
    ctx->pc = 0x12be88u;
    // NOP
    ctx->pc = 0x12be8cu;
}
