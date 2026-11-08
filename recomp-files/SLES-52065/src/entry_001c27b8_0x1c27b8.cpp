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

// Function: entry_001c27b8
// Address: 0x1c27b8 - 0x1c27c0
void entry_001c27b8_0x1c27b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c27b8_0x1c27b8");
#endif

    ctx->pc = 0x1c27b8u;

    // 0x1c27b8: 0x1000012d  b           . + 4 + (0x12D << 2)
    ctx->pc = 0x1C27B8u;
    {
        const bool branch_taken_0x1c27b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C27BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C27B8u;
        // 0x1c27bc: 0xae220248  sw          $v0, 0x248($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c27b8) {
            ctx->pc = 0x1C2C70u;
            return;
        }
    }
    ctx->pc = 0x1C27C0u;
}
