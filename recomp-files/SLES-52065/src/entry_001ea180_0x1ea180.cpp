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

// Function: entry_001ea180
// Address: 0x1ea180 - 0x1ea188
void entry_001ea180_0x1ea180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ea180_0x1ea180");
#endif

    ctx->pc = 0x1ea180u;

    // 0x1ea180: 0x10000197  b           . + 4 + (0x197 << 2)
    ctx->pc = 0x1EA180u;
    {
        const bool branch_taken_0x1ea180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA180u;
        // 0x1ea184: 0xae710008  sw          $s1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea180) {
            ctx->pc = 0x1EA7E0u;
            return;
        }
    }
    ctx->pc = 0x1EA188u;
}
