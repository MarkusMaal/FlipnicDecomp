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

// Function: entry_00207c34
// Address: 0x207c34 - 0x207c64
void entry_00207c34_0x207c34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00207c34_0x207c34");
#endif

    ctx->pc = 0x207c34u;

    // 0x207c34: 0x10a00020  beqz        $a1, . + 4 + (0x20 << 2)
    ctx->pc = 0x207C34u;
    {
        const bool branch_taken_0x207c34 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x207c34) {
            ctx->pc = 0x207CB8u;
            return;
        }
    }
    ctx->pc = 0x207C3Cu;
    // 0x207c3c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x207c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x207c40: 0x2862fc02  slti        $v0, $v1, -0x3FE
    ctx->pc = 0x207c40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294966274) ? 1 : 0);
    // 0x207c44: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x207C44u;
    {
        const bool branch_taken_0x207c44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x207C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207C44u;
        // 0x207c48: 0x2402fc02  addiu       $v0, $zero, -0x3FE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966274));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207c44) {
            ctx->pc = 0x207C64u;
            return;
        }
    }
    ctx->pc = 0x207C4Cu;
    // 0x207c4c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x207c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x207c50: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x207c50u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x207c54: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x207C54u;
    {
        const bool branch_taken_0x207c54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x207C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207C54u;
        // 0x207c58: 0x452816  dsrlv       $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (GPR_U32(ctx, 2) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207c54) {
            ctx->pc = 0x207CB4u;
            return;
        }
    }
    ctx->pc = 0x207C5Cu;
    // 0x207c5c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x207C5Cu;
    {
        const bool branch_taken_0x207c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207C5Cu;
        // 0x207c60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207c5c) {
            ctx->pc = 0x207CB4u;
            return;
        }
    }
    ctx->pc = 0x207C64u;
}
