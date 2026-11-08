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

// Function: entry_00206f24
// Address: 0x206f24 - 0x206f2c
void entry_00206f24_0x206f24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00206f24_0x206f24");
#endif

    ctx->pc = 0x206f24u;

    // 0x206f24: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x206F24u;
    {
        const bool branch_taken_0x206f24 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x206f24) {
            ctx->pc = 0x206F28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206F24u;
            // 0x206f28: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x206F2Cu;
            return;
        }
    }
    ctx->pc = 0x206F2Cu;
}
