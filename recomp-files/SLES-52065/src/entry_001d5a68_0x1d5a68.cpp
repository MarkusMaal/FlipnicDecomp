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

// Function: entry_001d5a68
// Address: 0x1d5a68 - 0x1d5a78
void entry_001d5a68_0x1d5a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5a68_0x1d5a68");
#endif

    ctx->pc = 0x1d5a68u;

    // 0x1d5a68: 0x12020063  beq         $s0, $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x1D5A68u;
    {
        const bool branch_taken_0x1d5a68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D5A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5A68u;
        // 0x1d5a6c: 0x240309e4  addiu       $v1, $zero, 0x9E4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2532));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5a68) {
            ctx->pc = 0x1D5BF8u;
            return;
        }
    }
    ctx->pc = 0x1D5A70u;
    // 0x1d5a70: 0x100001b9  b           . + 4 + (0x1B9 << 2)
    ctx->pc = 0x1D5A70u;
    {
        const bool branch_taken_0x1d5a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5a70) {
            ctx->pc = 0x1D6158u;
            return;
        }
    }
    ctx->pc = 0x1D5A78u;
}
