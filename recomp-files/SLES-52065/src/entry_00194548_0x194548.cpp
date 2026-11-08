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

// Function: entry_00194548
// Address: 0x194548 - 0x194550
void entry_00194548_0x194548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194548_0x194548");
#endif

    ctx->pc = 0x194548u;

    // 0x194548: 0x1000060a  b           . + 4 + (0x60A << 2)
    ctx->pc = 0x194548u;
    {
        const bool branch_taken_0x194548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19454Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194548u;
        // 0x19454c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194548) {
            ctx->pc = 0x195D74u;
            return;
        }
    }
    ctx->pc = 0x194550u;
}
