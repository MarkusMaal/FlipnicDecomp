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

// Function: entry_0013b528
// Address: 0x13b528 - 0x13b534
void entry_0013b528_0x13b528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b528_0x13b528");
#endif

    ctx->pc = 0x13b528u;

    // 0x13b528: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x13B528u;
    {
        const bool branch_taken_0x13b528 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B528u;
        // 0x13b52c: 0x3c0202aa  lui         $v0, 0x2AA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)682 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b528) {
            ctx->pc = 0x13B564u;
            return;
        }
    }
    ctx->pc = 0x13B530u;
    // 0x13b530: 0x3c010155  lui         $at, 0x155
    ctx->pc = 0x13b530u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)341 << 16));
    ctx->pc = 0x13b534u;
}
