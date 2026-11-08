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

// Function: entry_002075e4
// Address: 0x2075e4 - 0x2075ec
void entry_002075e4_0x2075e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002075e4_0x2075e4");
#endif

    ctx->pc = 0x2075e4u;

    // 0x2075e4: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2075E4u;
    {
        const bool branch_taken_0x2075e4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2075e4) {
            ctx->pc = 0x2075E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2075E4u;
            // 0x2075e8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2075ECu;
            return;
        }
    }
    ctx->pc = 0x2075ECu;
}
