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

// Function: entry_001c6324
// Address: 0x1c6324 - 0x1c632c
void entry_001c6324_0x1c6324(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c6324_0x1c6324");
#endif

    ctx->pc = 0x1c6324u;

    // 0x1c6324: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C6324u;
    {
        const bool branch_taken_0x1c6324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6324u;
        // 0x1c6328: 0xae42005c  sw          $v0, 0x5C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6324) {
            ctx->pc = 0x1C6330u;
            return;
        }
    }
    ctx->pc = 0x1C632Cu;
}
