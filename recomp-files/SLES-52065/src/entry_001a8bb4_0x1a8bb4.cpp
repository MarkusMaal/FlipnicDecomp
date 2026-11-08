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

// Function: entry_001a8bb4
// Address: 0x1a8bb4 - 0x1a8bc4
void entry_001a8bb4_0x1a8bb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8bb4_0x1a8bb4");
#endif

    ctx->pc = 0x1a8bb4u;

    // 0x1a8bb4: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x1a8bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
    // 0x1a8bb8: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x1A8BB8u;
    {
        const bool branch_taken_0x1a8bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8BB8u;
        // 0x1a8bbc: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8bb8) {
            ctx->pc = 0x1A8DFCu;
            return;
        }
    }
    ctx->pc = 0x1A8BC0u;
    // 0x1a8bc0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1a8bc0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1a8bc4u;
}
