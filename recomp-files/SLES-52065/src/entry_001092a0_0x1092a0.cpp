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

// Function: entry_001092a0
// Address: 0x1092a0 - 0x1092b0
void entry_001092a0_0x1092a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001092a0_0x1092a0");
#endif

    ctx->pc = 0x1092a0u;

    // 0x1092a0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1092A0u;
    {
        const bool branch_taken_0x1092a0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1092A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1092A0u;
        // 0x1092a4: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1092a0) {
            ctx->pc = 0x1092B0u;
            return;
        }
    }
    ctx->pc = 0x1092A8u;
    // 0x1092a8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1092A8u;
    {
        const bool branch_taken_0x1092a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1092ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1092A8u;
        // 0x1092ac: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1092a8) {
            ctx->pc = 0x1092C8u;
            return;
        }
    }
    ctx->pc = 0x1092B0u;
}
