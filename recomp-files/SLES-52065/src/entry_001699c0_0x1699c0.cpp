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

// Function: entry_001699c0
// Address: 0x1699c0 - 0x1699d4
void entry_001699c0_0x1699c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001699c0_0x1699c0");
#endif

    ctx->pc = 0x1699c0u;

    // 0x1699c0: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1699C0u;
    {
        const bool branch_taken_0x1699c0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1699C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1699C0u;
        // 0x1699c4: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1699c0) {
            ctx->pc = 0x1699D4u;
            return;
        }
    }
    ctx->pc = 0x1699C8u;
    // 0x1699c8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1699c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1699cc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1699CCu;
    {
        const bool branch_taken_0x1699cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1699D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1699CCu;
        // 0x1699d0: 0xac8301d4  sw          $v1, 0x1D4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 468), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1699cc) {
            ctx->pc = 0x1699F8u;
            return;
        }
    }
    ctx->pc = 0x1699D4u;
}
