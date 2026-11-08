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

// Function: entry_001d7ba0
// Address: 0x1d7ba0 - 0x1d7bb8
void entry_001d7ba0_0x1d7ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d7ba0_0x1d7ba0");
#endif

    ctx->pc = 0x1d7ba0u;

    // 0x1d7ba0: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1D7BA0u;
    {
        const bool branch_taken_0x1d7ba0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D7BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7BA0u;
        // 0x1d7ba4: 0x2402007f  addiu       $v0, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7ba0) {
            ctx->pc = 0x1D7BF0u;
            return;
        }
    }
    ctx->pc = 0x1D7BA8u;
    // 0x1d7ba8: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1D7BA8u;
    {
        const bool branch_taken_0x1d7ba8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D7BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7BA8u;
        // 0x1d7bac: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7ba8) {
            ctx->pc = 0x1D7C08u;
            return;
        }
    }
    ctx->pc = 0x1D7BB0u;
    // 0x1d7bb0: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x1D7BB0u;
    {
        const bool branch_taken_0x1d7bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7bb0) {
            ctx->pc = 0x1D7CF0u;
            return;
        }
    }
    ctx->pc = 0x1D7BB8u;
}
