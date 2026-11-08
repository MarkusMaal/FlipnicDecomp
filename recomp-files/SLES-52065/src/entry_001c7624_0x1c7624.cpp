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

// Function: entry_001c7624
// Address: 0x1c7624 - 0x1c762c
void entry_001c7624_0x1c7624(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c7624_0x1c7624");
#endif

    ctx->pc = 0x1c7624u;

    // 0x1c7624: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x1C7624u;
    {
        const bool branch_taken_0x1c7624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7624u;
        // 0x1c7628: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7624) {
            ctx->pc = 0x1C7784u;
            return;
        }
    }
    ctx->pc = 0x1C762Cu;
}
