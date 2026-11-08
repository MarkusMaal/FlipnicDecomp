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

// Function: entry_001eeb60
// Address: 0x1eeb60 - 0x1eeb7c
void entry_001eeb60_0x1eeb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eeb60_0x1eeb60");
#endif

    ctx->pc = 0x1eeb60u;

label_1eeb60:
    // 0x1eeb60: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x1eeb60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eeb64: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EEB64u;
    {
        const bool branch_taken_0x1eeb64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eeb64) {
            ctx->pc = 0x1EEB80u;
            return;
        }
    }
    ctx->pc = 0x1EEB6Cu;
    // 0x1eeb6c: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x1eeb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x1eeb70: 0x1451fffb  bne         $v0, $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1EEB70u;
    {
        const bool branch_taken_0x1eeb70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x1EEB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEB70u;
        // 0x1eeb74: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eeb70) {
            ctx->pc = 0x1EEB60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eeb60;
        }
    }
    ctx->pc = 0x1EEB78u;
    // 0x1eeb78: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x1eeb78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    ctx->pc = 0x1eeb7cu;
}
