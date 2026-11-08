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

// Function: entry_0012c748
// Address: 0x12c748 - 0x12c758
void entry_0012c748_0x12c748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012c748_0x12c748");
#endif

    ctx->pc = 0x12c748u;

    // 0x12c748: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12C748u;
    {
        const bool branch_taken_0x12c748 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C748u;
        // 0x12c74c: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c748) {
            ctx->pc = 0x12C758u;
            return;
        }
    }
    ctx->pc = 0x12C750u;
    // 0x12c750: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x12C750u;
    {
        const bool branch_taken_0x12c750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C750u;
        // 0x12c754: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c750) {
            ctx->pc = 0x12C764u;
            return;
        }
    }
    ctx->pc = 0x12C758u;
}
