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

// Function: entry_001fdeb0
// Address: 0x1fdeb0 - 0x1fdeb8
void entry_001fdeb0_0x1fdeb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fdeb0_0x1fdeb0");
#endif

    ctx->pc = 0x1fdeb0u;

    // 0x1fdeb0: 0x100000b9  b           . + 4 + (0xB9 << 2)
    ctx->pc = 0x1FDEB0u;
    {
        const bool branch_taken_0x1fdeb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDEB0u;
        // 0x1fdeb4: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdeb0) {
            ctx->pc = 0x1FE198u;
            return;
        }
    }
    ctx->pc = 0x1FDEB8u;
}
