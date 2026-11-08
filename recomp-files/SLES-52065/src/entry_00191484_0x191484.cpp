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

// Function: entry_00191484
// Address: 0x191484 - 0x191494
void entry_00191484_0x191484(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191484_0x191484");
#endif

    ctx->pc = 0x191484u;

    // 0x191484: 0x10400084  beqz        $v0, . + 4 + (0x84 << 2)
    ctx->pc = 0x191484u;
    {
        const bool branch_taken_0x191484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x191484) {
            ctx->pc = 0x191698u;
            return;
        }
    }
    ctx->pc = 0x19148Cu;
    // 0x19148c: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x19148Cu;
    {
        const bool branch_taken_0x19148c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19148Cu;
        // 0x191490: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19148c) {
            ctx->pc = 0x19169Cu;
            return;
        }
    }
    ctx->pc = 0x191494u;
}
