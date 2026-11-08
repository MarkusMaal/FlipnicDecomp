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

// Function: entry_001fa77c
// Address: 0x1fa77c - 0x1fa794
void entry_001fa77c_0x1fa77c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fa77c_0x1fa77c");
#endif

    ctx->pc = 0x1fa77cu;

    // 0x1fa77c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1fa77cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1fa780: 0xe6102a  slt         $v0, $a3, $a2
    ctx->pc = 0x1fa780u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1fa784: 0x1040fff2  beqz        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x1FA784u;
    {
        const bool branch_taken_0x1fa784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA784u;
        // 0x1fa788: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa784) {
            ctx->pc = 0x1FA750u;
            return;
        }
    }
    ctx->pc = 0x1FA78Cu;
    // 0x1fa78c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1FA78Cu;
    {
        const bool branch_taken_0x1fa78c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA78Cu;
        // 0x1fa790: 0x8fa80154  lw          $t0, 0x154($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa78c) {
            ctx->pc = 0x1FA7B0u;
            return;
        }
    }
    ctx->pc = 0x1FA794u;
}
