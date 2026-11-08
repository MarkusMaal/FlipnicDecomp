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

// Function: entry_0015ade4
// Address: 0x15ade4 - 0x15adec
void entry_0015ade4_0x15ade4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015ade4_0x15ade4");
#endif

    ctx->pc = 0x15ade4u;

    // 0x15ade4: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x15ADE4u;
    {
        const bool branch_taken_0x15ade4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15ADE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ADE4u;
        // 0x15ade8: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ade4) {
            ctx->pc = 0x15AF80u;
            return;
        }
    }
    ctx->pc = 0x15ADECu;
}
