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

// Function: entry_001c02e0
// Address: 0x1c02e0 - 0x1c02e8
void entry_001c02e0_0x1c02e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c02e0_0x1c02e0");
#endif

    ctx->pc = 0x1c02e0u;

    // 0x1c02e0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C02E0u;
    {
        const bool branch_taken_0x1c02e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C02E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C02E0u;
        // 0x1c02e4: 0x2442000a  addiu       $v0, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c02e0) {
            ctx->pc = 0x1C0304u;
            return;
        }
    }
    ctx->pc = 0x1C02E8u;
}
