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

// Function: entry_0011a8c4
// Address: 0x11a8c4 - 0x11a8e0
void entry_0011a8c4_0x11a8c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a8c4_0x11a8c4");
#endif

    ctx->pc = 0x11a8c4u;

label_11a8c4:
    // 0x11a8c4: 0x1060002f  beqz        $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x11A8C4u;
    {
        const bool branch_taken_0x11a8c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A8C4u;
        // 0x11a8c8: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a8c4) {
            ctx->pc = 0x11A984u;
            return;
        }
    }
    ctx->pc = 0x11A8CCu;
    // 0x11a8cc: 0x10710004  beq         $v1, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x11A8CCu;
    {
        const bool branch_taken_0x11a8cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        if (branch_taken_0x11a8cc) {
            ctx->pc = 0x11A8E0u;
            return;
        }
    }
    ctx->pc = 0x11A8D4u;
    // 0x11a8d4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x11a8d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a8d8: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x11A8D8u;
    {
        const bool branch_taken_0x11a8d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A8D8u;
        // 0x11a8dc: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a8d8) {
            ctx->pc = 0x11A8C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11a8c4;
        }
    }
    ctx->pc = 0x11A8E0u;
}
