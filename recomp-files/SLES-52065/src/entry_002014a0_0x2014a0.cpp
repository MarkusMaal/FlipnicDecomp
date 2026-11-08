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

// Function: entry_002014a0
// Address: 0x2014a0 - 0x2014b0
void entry_002014a0_0x2014a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002014a0_0x2014a0");
#endif

    ctx->pc = 0x2014a0u;

    // 0x2014a0: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x2014a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2014a4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2014a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2014a8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2014A8u;
    {
        const bool branch_taken_0x2014a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2014ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2014A8u;
        // 0x2014ac: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2014a8) {
            ctx->pc = 0x2014BCu;
            return;
        }
    }
    ctx->pc = 0x2014B0u;
}
