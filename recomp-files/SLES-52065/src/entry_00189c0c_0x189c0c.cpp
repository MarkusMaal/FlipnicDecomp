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

// Function: entry_00189c0c
// Address: 0x189c0c - 0x189c28
void entry_00189c0c_0x189c0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189c0c_0x189c0c");
#endif

    ctx->pc = 0x189c0cu;

    // 0x189c0c: 0x0  nop
    ctx->pc = 0x189c0cu;
    // NOP
    // 0x189c10: 0x2c830081  sltiu       $v1, $a0, 0x81
    ctx->pc = 0x189c10u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x189c14: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x189C14u;
    {
        const bool branch_taken_0x189c14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x189C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189C14u;
        // 0x189c18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189c14) {
            ctx->pc = 0x189C28u;
            return;
        }
    }
    ctx->pc = 0x189C1Cu;
    // 0x189c1c: 0x2c8100a0  sltiu       $at, $a0, 0xA0
    ctx->pc = 0x189c1cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)160) ? 1 : 0);
    // 0x189c20: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x189C20u;
    {
        const bool branch_taken_0x189c20 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x189c20) {
            ctx->pc = 0x189C3Cu;
            return;
        }
    }
    ctx->pc = 0x189C28u;
}
