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

// Function: entry_001d3ea8
// Address: 0x1d3ea8 - 0x1d3eb8
void entry_001d3ea8_0x1d3ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d3ea8_0x1d3ea8");
#endif

    ctx->pc = 0x1d3ea8u;

    // 0x1d3ea8: 0xe5102a  slt         $v0, $a3, $a1
    ctx->pc = 0x1d3ea8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1d3eac: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D3EACu;
    {
        const bool branch_taken_0x1d3eac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3eac) {
            ctx->pc = 0x1D3EB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D3EACu;
            // 0x1d3eb0: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D3EB8u;
            return;
        }
    }
    ctx->pc = 0x1D3EB4u;
    // 0x1d3eb4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1d3eb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1d3eb8u;
}
