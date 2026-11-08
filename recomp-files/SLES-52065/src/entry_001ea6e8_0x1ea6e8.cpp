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

// Function: entry_001ea6e8
// Address: 0x1ea6e8 - 0x1ea6f0
void entry_001ea6e8_0x1ea6e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ea6e8_0x1ea6e8");
#endif

    ctx->pc = 0x1ea6e8u;

    // 0x1ea6e8: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x1EA6E8u;
    {
        const bool branch_taken_0x1ea6e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA6E8u;
        // 0x1ea6ec: 0xae710008  sw          $s1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea6e8) {
            ctx->pc = 0x1EA7E0u;
            return;
        }
    }
    ctx->pc = 0x1EA6F0u;
}
