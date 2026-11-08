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

// Function: entry_001ca1c8
// Address: 0x1ca1c8 - 0x1ca1e8
void entry_001ca1c8_0x1ca1c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca1c8_0x1ca1c8");
#endif

    ctx->pc = 0x1ca1c8u;

    // 0x1ca1c8: 0x10430013  beq         $v0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1CA1C8u;
    {
        const bool branch_taken_0x1ca1c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1CA1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA1C8u;
        // 0x1ca1cc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca1c8) {
            ctx->pc = 0x1CA218u;
            return;
        }
    }
    ctx->pc = 0x1CA1D0u;
    // 0x1ca1d0: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1CA1D0u;
    {
        const bool branch_taken_0x1ca1d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1ca1d0) {
            ctx->pc = 0x1CA200u;
            return;
        }
    }
    ctx->pc = 0x1CA1D8u;
    // 0x1ca1d8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CA1D8u;
    {
        const bool branch_taken_0x1ca1d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca1d8) {
            ctx->pc = 0x1CA1E8u;
            return;
        }
    }
    ctx->pc = 0x1CA1E0u;
    // 0x1ca1e0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1CA1E0u;
    {
        const bool branch_taken_0x1ca1e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca1e0) {
            ctx->pc = 0x1CA260u;
            return;
        }
    }
    ctx->pc = 0x1CA1E8u;
}
