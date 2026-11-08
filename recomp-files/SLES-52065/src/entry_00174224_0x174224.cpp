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

// Function: entry_00174224
// Address: 0x174224 - 0x174230
void entry_00174224_0x174224(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174224_0x174224");
#endif

    ctx->pc = 0x174224u;

    // 0x174224: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x174224u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174228: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x174228u;
    {
        const bool branch_taken_0x174228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17422Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174228u;
        // 0x17422c: 0xafa200f4  sw          $v0, 0xF4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174228) {
            ctx->pc = 0x174334u;
            return;
        }
    }
    ctx->pc = 0x174230u;
}
