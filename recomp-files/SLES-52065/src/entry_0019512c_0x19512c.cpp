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

// Function: entry_0019512c
// Address: 0x19512c - 0x195138
void entry_0019512c_0x19512c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019512c_0x19512c");
#endif

    ctx->pc = 0x19512cu;

    // 0x19512c: 0x0  nop
    ctx->pc = 0x19512cu;
    // NOP
    // 0x195130: 0x10000310  b           . + 4 + (0x310 << 2)
    ctx->pc = 0x195130u;
    {
        const bool branch_taken_0x195130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195130u;
        // 0x195134: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195130) {
            ctx->pc = 0x195D74u;
            return;
        }
    }
    ctx->pc = 0x195138u;
}
