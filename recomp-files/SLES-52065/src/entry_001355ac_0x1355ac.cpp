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

// Function: entry_001355ac
// Address: 0x1355ac - 0x1355c0
void entry_001355ac_0x1355ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001355ac_0x1355ac");
#endif

    ctx->pc = 0x1355acu;

    // 0x1355ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1355acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1355b0: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1355B0u;
    {
        const bool branch_taken_0x1355b0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1355B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1355B0u;
        // 0x1355b4: 0x26040058  addiu       $a0, $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1355b0) {
            ctx->pc = 0x1355C0u;
            return;
        }
    }
    ctx->pc = 0x1355B8u;
    // 0x1355b8: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1355B8u;
    {
        const bool branch_taken_0x1355b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1355BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1355B8u;
        // 0x1355bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1355b8) {
            ctx->pc = 0x13565Cu;
            return;
        }
    }
    ctx->pc = 0x1355C0u;
}
