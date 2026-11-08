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

// Function: entry_001fa9a0
// Address: 0x1fa9a0 - 0x1fa9b8
void entry_001fa9a0_0x1fa9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fa9a0_0x1fa9a0");
#endif

    ctx->pc = 0x1fa9a0u;

    // 0x1fa9a0: 0x14e00005  bnez        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FA9A0u;
    {
        const bool branch_taken_0x1fa9a0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FA9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA9A0u;
        // 0x1fa9a4: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa9a0) {
            ctx->pc = 0x1FA9B8u;
            return;
        }
    }
    ctx->pc = 0x1FA9A8u;
    // 0x1fa9a8: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FA9A8u;
    {
        const bool branch_taken_0x1fa9a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA9A8u;
        // 0x1fa9ac: 0x1051023  subu        $v0, $t0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa9a8) {
            ctx->pc = 0x1FA9C0u;
            return;
        }
    }
    ctx->pc = 0x1FA9B0u;
    // 0x1fa9b0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1FA9B0u;
    {
        const bool branch_taken_0x1fa9b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA9B0u;
        // 0x1fa9b4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa9b0) {
            ctx->pc = 0x1FA9BCu;
            return;
        }
    }
    ctx->pc = 0x1FA9B8u;
}
