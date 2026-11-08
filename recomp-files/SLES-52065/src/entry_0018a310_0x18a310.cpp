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

// Function: entry_0018a310
// Address: 0x18a310 - 0x18a328
void entry_0018a310_0x18a310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018a310_0x18a310");
#endif

    ctx->pc = 0x18a310u;

    // 0x18a310: 0x11060005  beq         $t0, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x18A310u;
    {
        const bool branch_taken_0x18a310 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 6));
        ctx->pc = 0x18A314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A310u;
        // 0x18a314: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a310) {
            ctx->pc = 0x18A328u;
            return;
        }
    }
    ctx->pc = 0x18A318u;
    // 0x18a318: 0x11030003  beq         $t0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18A318u;
    {
        const bool branch_taken_0x18a318 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 3));
        if (branch_taken_0x18a318) {
            ctx->pc = 0x18A328u;
            return;
        }
    }
    ctx->pc = 0x18A320u;
    // 0x18a320: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x18A320u;
    {
        const bool branch_taken_0x18a320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A320u;
        // 0x18a324: 0x29020081  slti        $v0, $t0, 0x81 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)129) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a320) {
            ctx->pc = 0x18A33Cu;
            return;
        }
    }
    ctx->pc = 0x18A328u;
}
