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

// Function: entry_00207aec
// Address: 0x207aec - 0x207af4
void entry_00207aec_0x207aec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00207aec_0x207aec");
#endif

    ctx->pc = 0x207aecu;

    // 0x207aec: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x207AECu;
    {
        const bool branch_taken_0x207aec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x207aec) {
            ctx->pc = 0x207AF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207AECu;
            // 0x207af0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x207AF4u;
            return;
        }
    }
    ctx->pc = 0x207AF4u;
}
