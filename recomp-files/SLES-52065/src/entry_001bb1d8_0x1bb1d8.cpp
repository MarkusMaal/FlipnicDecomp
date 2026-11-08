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

// Function: entry_001bb1d8
// Address: 0x1bb1d8 - 0x1bb1e0
void entry_001bb1d8_0x1bb1d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bb1d8_0x1bb1d8");
#endif

    ctx->pc = 0x1bb1d8u;

    // 0x1bb1d8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1BB1D8u;
    {
        const bool branch_taken_0x1bb1d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB1D8u;
        // 0x1bb1dc: 0xae500000  sw          $s0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb1d8) {
            ctx->pc = 0x1BB244u;
            return;
        }
    }
    ctx->pc = 0x1BB1E0u;
}
