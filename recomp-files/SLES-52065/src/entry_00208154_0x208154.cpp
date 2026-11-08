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

// Function: entry_00208154
// Address: 0x208154 - 0x208160
void entry_00208154_0x208154(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00208154_0x208154");
#endif

    ctx->pc = 0x208154u;

    // 0x208154: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x208154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x208158: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x208158u;
    {
        const bool branch_taken_0x208158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20815Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208158u;
        // 0x20815c: 0x24442c00  addiu       $a0, $v0, 0x2C00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208158) {
            ctx->pc = 0x20832Cu;
            return;
        }
    }
    ctx->pc = 0x208160u;
}
