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

// Function: entry_00207c14
// Address: 0x207c14 - 0x207c34
void entry_00207c14_0x207c14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00207c14_0x207c14");
#endif

    ctx->pc = 0x207c14u;

    // 0x207c14: 0x38620004  xori        $v0, $v1, 0x4
    ctx->pc = 0x207c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
    // 0x207c18: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x207C18u;
    {
        const bool branch_taken_0x207c18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x207c18) {
            ctx->pc = 0x207C1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207C18u;
            // 0x207c1c: 0x240707ff  addiu       $a3, $zero, 0x7FF (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
            ctx->in_delay_slot = false;
            ctx->pc = 0x207C74u;
            return;
        }
    }
    ctx->pc = 0x207C20u;
    // 0x207c20: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x207c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x207c24: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x207C24u;
    {
        const bool branch_taken_0x207c24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x207c24) {
            ctx->pc = 0x207C34u;
            return;
        }
    }
    ctx->pc = 0x207C2Cu;
    // 0x207c2c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x207C2Cu;
    {
        const bool branch_taken_0x207c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207C2Cu;
        // 0x207c30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207c2c) {
            ctx->pc = 0x207CB8u;
            return;
        }
    }
    ctx->pc = 0x207C34u;
}
