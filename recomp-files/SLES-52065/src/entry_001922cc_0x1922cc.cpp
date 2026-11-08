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

// Function: entry_001922cc
// Address: 0x1922cc - 0x1922d8
void entry_001922cc_0x1922cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001922cc_0x1922cc");
#endif

    ctx->pc = 0x1922ccu;

    // 0x1922cc: 0x0  nop
    ctx->pc = 0x1922ccu;
    // NOP
    // 0x1922d0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1922D0u;
    {
        const bool branch_taken_0x1922d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1922D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1922D0u;
        // 0x1922d4: 0xac4004d0  sw          $zero, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1922d0) {
            ctx->pc = 0x192324u;
            return;
        }
    }
    ctx->pc = 0x1922D8u;
}
