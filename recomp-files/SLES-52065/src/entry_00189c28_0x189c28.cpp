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

// Function: entry_00189c28
// Address: 0x189c28 - 0x189c3c
void entry_00189c28_0x189c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189c28_0x189c28");
#endif

    ctx->pc = 0x189c28u;

    // 0x189c28: 0x2c8300e0  sltiu       $v1, $a0, 0xE0
    ctx->pc = 0x189c28u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)224) ? 1 : 0);
    // 0x189c2c: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x189C2Cu;
    {
        const bool branch_taken_0x189c2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x189C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189C2Cu;
        // 0x189c30: 0x2c8100fd  sltiu       $at, $a0, 0xFD (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)253) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x189c2c) {
            ctx->pc = 0x189C70u;
            return;
        }
    }
    ctx->pc = 0x189C34u;
    // 0x189c34: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x189C34u;
    {
        const bool branch_taken_0x189c34 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x189c34) {
            ctx->pc = 0x189C70u;
            return;
        }
    }
    ctx->pc = 0x189C3Cu;
}
