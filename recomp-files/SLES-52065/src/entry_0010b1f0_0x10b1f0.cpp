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

// Function: entry_0010b1f0
// Address: 0x10b1f0 - 0x10b200
void entry_0010b1f0_0x10b1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010b1f0_0x10b1f0");
#endif

    ctx->pc = 0x10b1f0u;

    // 0x10b1f0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10B1F0u;
    {
        const bool branch_taken_0x10b1f0 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x10b1f0) {
            ctx->pc = 0x10B200u;
            return;
        }
    }
    ctx->pc = 0x10B1F8u;
    // 0x10b1f8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x10B1F8u;
    {
        const bool branch_taken_0x10b1f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B1F8u;
        // 0x10b1fc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b1f8) {
            ctx->pc = 0x10B224u;
            return;
        }
    }
    ctx->pc = 0x10B200u;
}
