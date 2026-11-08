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

// Function: entry_001d276c
// Address: 0x1d276c - 0x1d2790
void entry_001d276c_0x1d276c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d276c_0x1d276c");
#endif

    ctx->pc = 0x1d276cu;

    // 0x1d276c: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x1d276cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1d2770: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D2770u;
    {
        const bool branch_taken_0x1d2770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2770u;
        // 0x1d2774: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2770) {
            ctx->pc = 0x1D2790u;
            return;
        }
    }
    ctx->pc = 0x1D2778u;
    // 0x1d2778: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1d2778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1d277c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1d277cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d2780: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d2780u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2784: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d2784u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d2788: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d2788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d278c: 0xac650020  sw          $a1, 0x20($v1)
    ctx->pc = 0x1d278cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 5));
    ctx->pc = 0x1d2790u;
}
