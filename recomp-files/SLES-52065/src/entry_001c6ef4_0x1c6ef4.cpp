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

// Function: entry_001c6ef4
// Address: 0x1c6ef4 - 0x1c6efc
void entry_001c6ef4_0x1c6ef4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c6ef4_0x1c6ef4");
#endif

    ctx->pc = 0x1c6ef4u;

    // 0x1c6ef4: 0x10000223  b           . + 4 + (0x223 << 2)
    ctx->pc = 0x1C6EF4u;
    {
        const bool branch_taken_0x1c6ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6EF4u;
        // 0x1c6ef8: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6ef4) {
            ctx->pc = 0x1C7784u;
            return;
        }
    }
    ctx->pc = 0x1C6EFCu;
}
