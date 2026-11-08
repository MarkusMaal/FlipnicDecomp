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

// Function: entry_001a7000
// Address: 0x1a7000 - 0x1a700c
void entry_001a7000_0x1a7000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a7000_0x1a7000");
#endif

    ctx->pc = 0x1a7000u;

    // 0x1a7000: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1a7000u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1a7004: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A7004u;
    {
        const bool branch_taken_0x1a7004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7004u;
        // 0x1a7008: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7004) {
            ctx->pc = 0x1A7014u;
            return;
        }
    }
    ctx->pc = 0x1A700Cu;
}
