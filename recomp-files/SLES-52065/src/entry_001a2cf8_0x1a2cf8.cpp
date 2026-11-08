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

// Function: entry_001a2cf8
// Address: 0x1a2cf8 - 0x1a2d04
void entry_001a2cf8_0x1a2cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2cf8_0x1a2cf8");
#endif

    ctx->pc = 0x1a2cf8u;

    // 0x1a2cf8: 0xaf808244  sw          $zero, -0x7DBC($gp)
    ctx->pc = 0x1a2cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935108), GPR_U32(ctx, 0));
    // 0x1a2cfc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A2CFCu;
    {
        const bool branch_taken_0x1a2cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2CFCu;
        // 0x1a2d00: 0xaf83824c  sw          $v1, -0x7DB4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935116), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2cfc) {
            ctx->pc = 0x1A2D08u;
            return;
        }
    }
    ctx->pc = 0x1A2D04u;
}
