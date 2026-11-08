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

// Function: entry_001954e0
// Address: 0x1954e0 - 0x1954f0
void entry_001954e0_0x1954e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001954e0_0x1954e0");
#endif

    ctx->pc = 0x1954e0u;

    // 0x1954e0: 0x16400220  bnez        $s2, . + 4 + (0x220 << 2)
    ctx->pc = 0x1954E0u;
    {
        const bool branch_taken_0x1954e0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1954e0) {
            ctx->pc = 0x195D64u;
            return;
        }
    }
    ctx->pc = 0x1954E8u;
    // 0x1954e8: 0x1000021e  b           . + 4 + (0x21E << 2)
    ctx->pc = 0x1954E8u;
    {
        const bool branch_taken_0x1954e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1954ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1954E8u;
        // 0x1954ec: 0xaf80831c  sw          $zero, -0x7CE4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935324), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1954e8) {
            ctx->pc = 0x195D64u;
            return;
        }
    }
    ctx->pc = 0x1954F0u;
}
