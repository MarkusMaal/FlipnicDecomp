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

// Function: entry_001049c0
// Address: 0x1049c0 - 0x1049cc
void entry_001049c0_0x1049c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001049c0_0x1049c0");
#endif

    ctx->pc = 0x1049c0u;

    // 0x1049c0: 0x10000215  b           . + 4 + (0x215 << 2)
    ctx->pc = 0x1049C0u;
    {
        const bool branch_taken_0x1049c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1049C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1049C0u;
        // 0x1049c4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1049c0) {
            ctx->pc = 0x105218u;
            return;
        }
    }
    ctx->pc = 0x1049C8u;
    // 0x1049c8: 0x24040230  addiu       $a0, $zero, 0x230
    ctx->pc = 0x1049c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
    ctx->pc = 0x1049ccu;
}
