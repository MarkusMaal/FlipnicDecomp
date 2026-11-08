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

// Function: entry_001d7524
// Address: 0x1d7524 - 0x1d7534
void entry_001d7524_0x1d7524(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d7524_0x1d7524");
#endif

    ctx->pc = 0x1d7524u;

    // 0x1d7524: 0x96a30066  lhu         $v1, 0x66($s5)
    ctx->pc = 0x1d7524u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 102)));
    // 0x1d7528: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D7528u;
    {
        const bool branch_taken_0x1d7528 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D752Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7528u;
        // 0x1d752c: 0x30c2ffe0  andi        $v0, $a2, 0xFFE0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65504);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7528) {
            ctx->pc = 0x1D7534u;
            return;
        }
    }
    ctx->pc = 0x1D7530u;
    // 0x1d7530: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x1d7530u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->pc = 0x1d7534u;
}
