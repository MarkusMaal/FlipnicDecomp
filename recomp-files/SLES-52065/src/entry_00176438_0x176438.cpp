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

// Function: entry_00176438
// Address: 0x176438 - 0x176448
void entry_00176438_0x176438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00176438_0x176438");
#endif

    ctx->pc = 0x176438u;

    // 0x176438: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x176438u;
    {
        const bool branch_taken_0x176438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x176438) {
            ctx->pc = 0x176448u;
            return;
        }
    }
    ctx->pc = 0x176440u;
    // 0x176440: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x176440u;
    {
        const bool branch_taken_0x176440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176440u;
        // 0x176444: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176440) {
            ctx->pc = 0x17644Cu;
            return;
        }
    }
    ctx->pc = 0x176448u;
}
