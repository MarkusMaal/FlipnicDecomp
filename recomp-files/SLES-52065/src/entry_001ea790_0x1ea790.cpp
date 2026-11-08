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

// Function: entry_001ea790
// Address: 0x1ea790 - 0x1ea798
void entry_001ea790_0x1ea790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ea790_0x1ea790");
#endif

    ctx->pc = 0x1ea790u;

    // 0x1ea790: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1EA790u;
    {
        const bool branch_taken_0x1ea790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA790u;
        // 0x1ea794: 0xae700008  sw          $s0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea790) {
            ctx->pc = 0x1EA7E0u;
            return;
        }
    }
    ctx->pc = 0x1EA798u;
}
