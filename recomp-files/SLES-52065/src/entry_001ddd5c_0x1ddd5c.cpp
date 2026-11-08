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

// Function: entry_001ddd5c
// Address: 0x1ddd5c - 0x1ddd88
void entry_001ddd5c_0x1ddd5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ddd5c_0x1ddd5c");
#endif

    ctx->pc = 0x1ddd5cu;

    // 0x1ddd5c: 0x24e700e8  addiu       $a3, $a3, 0xE8
    ctx->pc = 0x1ddd5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 232));
    // 0x1ddd60: 0x28c20030  slti        $v0, $a2, 0x30
    ctx->pc = 0x1ddd60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x1ddd64: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x1DDD64u;
    {
        const bool branch_taken_0x1ddd64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DDD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDD64u;
        // 0x1ddd68: 0x250800e8  addiu       $t0, $t0, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddd64) {
            ctx->pc = 0x1DDCE0u;
            return;
        }
    }
    ctx->pc = 0x1DDD6Cu;
    // 0x1ddd6c: 0x11600006  beqz        $t3, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DDD6Cu;
    {
        const bool branch_taken_0x1ddd6c = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDD6Cu;
        // 0x1ddd70: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddd6c) {
            ctx->pc = 0x1DDD88u;
            return;
        }
    }
    ctx->pc = 0x1DDD74u;
    // 0x1ddd74: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ddd74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ddd78: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ddd78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ddd7c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1ddd7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ddd80: 0x807d0ea  j           func_1F43A8
    ctx->pc = 0x1DDD80u;
    ctx->pc = 0x1DDD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDD80u;
    // 0x1ddd84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F43A8u;
    FUN_001f43a8_0x1f43a8(rdram, ctx, runtime); return;
    ctx->pc = 0x1DDD88u;
}
