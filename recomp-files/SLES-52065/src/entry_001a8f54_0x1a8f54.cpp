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

// Function: entry_001a8f54
// Address: 0x1a8f54 - 0x1a8f64
void entry_001a8f54_0x1a8f54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8f54_0x1a8f54");
#endif

    ctx->pc = 0x1a8f54u;

    // 0x1a8f54: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x1a8f54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
    // 0x1a8f58: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x1A8F58u;
    {
        const bool branch_taken_0x1a8f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8F58u;
        // 0x1a8f5c: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8f58) {
            ctx->pc = 0x1A91E4u;
            return;
        }
    }
    ctx->pc = 0x1A8F60u;
    // 0x1a8f60: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1a8f60u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1a8f64u;
}
