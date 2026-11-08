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

// Function: entry_0019277c
// Address: 0x19277c - 0x19278c
void entry_0019277c_0x19277c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019277c_0x19277c");
#endif

    ctx->pc = 0x19277cu;

    // 0x19277c: 0x0  nop
    ctx->pc = 0x19277cu;
    // NOP
    // 0x192780: 0x28820010  slti        $v0, $a0, 0x10
    ctx->pc = 0x192780u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x192784: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x192784u;
    {
        const bool branch_taken_0x192784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x192788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192784u;
        // 0x192788: 0xa41821  addu        $v1, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192784) {
            ctx->pc = 0x192760u;
            return;
        }
    }
    ctx->pc = 0x19278Cu;
}
