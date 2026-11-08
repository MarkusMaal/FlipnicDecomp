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

// Function: entry_00187bec
// Address: 0x187bec - 0x187bf8
void entry_00187bec_0x187bec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187bec_0x187bec");
#endif

    ctx->pc = 0x187becu;

    // 0x187bec: 0x0  nop
    ctx->pc = 0x187becu;
    // NOP
    // 0x187bf0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x187BF0u;
    {
        const bool branch_taken_0x187bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187BF0u;
        // 0x187bf4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187bf0) {
            ctx->pc = 0x187C38u;
            return;
        }
    }
    ctx->pc = 0x187BF8u;
}
