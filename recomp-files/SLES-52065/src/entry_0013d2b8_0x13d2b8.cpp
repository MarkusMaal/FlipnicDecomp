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

// Function: entry_0013d2b8
// Address: 0x13d2b8 - 0x13d2c0
void entry_0013d2b8_0x13d2b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d2b8_0x13d2b8");
#endif

    ctx->pc = 0x13d2b8u;

    // 0x13d2b8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13D2B8u;
    {
        const bool branch_taken_0x13d2b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D2B8u;
        // 0x13d2bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d2b8) {
            ctx->pc = 0x13D2C8u;
            return;
        }
    }
    ctx->pc = 0x13D2C0u;
}
