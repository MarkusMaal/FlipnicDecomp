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

// Function: entry_0019158c
// Address: 0x19158c - 0x19159c
void entry_0019158c_0x19158c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019158c_0x19158c");
#endif

    ctx->pc = 0x19158cu;

    // 0x19158c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19158Cu;
    {
        const bool branch_taken_0x19158c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19158c) {
            ctx->pc = 0x19159Cu;
            return;
        }
    }
    ctx->pc = 0x191594u;
    // 0x191594: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x191594u;
    {
        const bool branch_taken_0x191594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191594u;
        // 0x191598: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191594) {
            ctx->pc = 0x1915A0u;
            return;
        }
    }
    ctx->pc = 0x19159Cu;
}
