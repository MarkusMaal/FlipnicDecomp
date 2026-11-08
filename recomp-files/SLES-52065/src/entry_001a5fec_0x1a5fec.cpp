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

// Function: entry_001a5fec
// Address: 0x1a5fec - 0x1a5ff8
void entry_001a5fec_0x1a5fec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5fec_0x1a5fec");
#endif

    ctx->pc = 0x1a5fecu;

    // 0x1a5fec: 0x0  nop
    ctx->pc = 0x1a5fecu;
    // NOP
    // 0x1a5ff0: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x1A5FF0u;
    {
        const bool branch_taken_0x1a5ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5FF0u;
        // 0x1a5ff4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5ff0) {
            ctx->pc = 0x1A6240u;
            return;
        }
    }
    ctx->pc = 0x1A5FF8u;
}
