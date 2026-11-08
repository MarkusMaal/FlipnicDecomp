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

// Function: entry_001a4048
// Address: 0x1a4048 - 0x1a4058
void entry_001a4048_0x1a4048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4048_0x1a4048");
#endif

    ctx->pc = 0x1a4048u;

    // 0x1a4048: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1a4048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1a404c: 0x28820007  slti        $v0, $a0, 0x7
    ctx->pc = 0x1a404cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x1a4050: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1A4050u;
    {
        const bool branch_taken_0x1a4050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A4054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4050u;
        // 0x1a4054: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4050) {
            ctx->pc = 0x1A4028u;
            return;
        }
    }
    ctx->pc = 0x1A4058u;
}
