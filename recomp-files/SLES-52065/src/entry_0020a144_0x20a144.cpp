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

// Function: entry_0020a144
// Address: 0x20a144 - 0x20a14c
void entry_0020a144_0x20a144(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020a144_0x20a144");
#endif

    ctx->pc = 0x20a144u;

    // 0x20a144: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x20A144u;
    {
        const bool branch_taken_0x20a144 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a144) {
            ctx->pc = 0x20A148u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A144u;
            // 0x20a148: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A14Cu;
            return;
        }
    }
    ctx->pc = 0x20A14Cu;
}
