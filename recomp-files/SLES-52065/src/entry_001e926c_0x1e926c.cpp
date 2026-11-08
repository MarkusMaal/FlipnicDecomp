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

// Function: entry_001e926c
// Address: 0x1e926c - 0x1e9298
void entry_001e926c_0x1e926c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e926c_0x1e926c");
#endif

    ctx->pc = 0x1e926cu;

    // 0x1e926c: 0x80870000  lb          $a3, 0x0($a0)
    ctx->pc = 0x1e926cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e9270: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x1e9270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x1e9274: 0x10e30008  beq         $a3, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E9274u;
    {
        const bool branch_taken_0x1e9274 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E9278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9274u;
        // 0x1e9278: 0x2403002a  addiu       $v1, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9274) {
            ctx->pc = 0x1E9298u;
            return;
        }
    }
    ctx->pc = 0x1E927Cu;
    // 0x1e927c: 0x10e30006  beq         $a3, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E927Cu;
    {
        const bool branch_taken_0x1e927c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e927c) {
            ctx->pc = 0x1E9298u;
            return;
        }
    }
    ctx->pc = 0x1E9284u;
    // 0x1e9284: 0x24050052  addiu       $a1, $zero, 0x52
    ctx->pc = 0x1e9284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x1e9288: 0x24090043  addiu       $t1, $zero, 0x43
    ctx->pc = 0x1e9288u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1e928c: 0x24070056  addiu       $a3, $zero, 0x56
    ctx->pc = 0x1e928cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    // 0x1e9290: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x1E9290u;
    {
        const bool branch_taken_0x1e9290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9290u;
        // 0x1e9294: 0x24060050  addiu       $a2, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9290) {
            ctx->pc = 0x1E93E4u;
            return;
        }
    }
    ctx->pc = 0x1E9298u;
}
