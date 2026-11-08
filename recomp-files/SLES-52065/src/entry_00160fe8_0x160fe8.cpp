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

// Function: entry_00160fe8
// Address: 0x160fe8 - 0x160ff0
void entry_00160fe8_0x160fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160fe8_0x160fe8");
#endif

    ctx->pc = 0x160fe8u;

    // 0x160fe8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x160FE8u;
    {
        const bool branch_taken_0x160fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160FE8u;
        // 0x160fec: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160fe8) {
            ctx->pc = 0x161004u;
            return;
        }
    }
    ctx->pc = 0x160FF0u;
}
