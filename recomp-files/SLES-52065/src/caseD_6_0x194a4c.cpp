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

// Function: caseD_6
// Address: 0x194a4c - 0x194a58
void caseD_6_0x194a4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x194a4c");
#endif

    ctx->pc = 0x194a4cu;

    // 0x194a4c: 0x0  nop
    ctx->pc = 0x194a4cu;
    // NOP
    // 0x194a50: 0x100004c8  b           . + 4 + (0x4C8 << 2)
    ctx->pc = 0x194A50u;
    {
        const bool branch_taken_0x194a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194A50u;
        // 0x194a54: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194a50) {
            ctx->pc = 0x195D74u;
            return;
        }
    }
    ctx->pc = 0x194A58u;
}
