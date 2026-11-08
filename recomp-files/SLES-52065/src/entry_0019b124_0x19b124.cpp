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

// Function: entry_0019b124
// Address: 0x19b124 - 0x19b130
void entry_0019b124_0x19b124(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b124_0x19b124");
#endif

    ctx->pc = 0x19b124u;

    // 0x19b124: 0x0  nop
    ctx->pc = 0x19b124u;
    // NOP
    // 0x19b128: 0x1000ffc2  b           . + 4 + (-0x3E << 2)
    ctx->pc = 0x19B128u;
    {
        const bool branch_taken_0x19b128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B128u;
        // 0x19b12c: 0x26520040  addiu       $s2, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b128) {
            ctx->pc = 0x19B034u;
            return;
        }
    }
    ctx->pc = 0x19B130u;
}
