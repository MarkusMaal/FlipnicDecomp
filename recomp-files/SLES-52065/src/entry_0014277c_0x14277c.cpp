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

// Function: entry_0014277c
// Address: 0x14277c - 0x142790
void entry_0014277c_0x14277c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014277c_0x14277c");
#endif

    ctx->pc = 0x14277cu;

    // 0x14277c: 0x8fc20034  lw          $v0, 0x34($fp)
    ctx->pc = 0x14277cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 52)));
    // 0x142780: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x142780u;
    {
        const bool branch_taken_0x142780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x142784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142780u;
        // 0x142784: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142780) {
            ctx->pc = 0x142790u;
            return;
        }
    }
    ctx->pc = 0x142788u;
    // 0x142788: 0x100001f1  b           . + 4 + (0x1F1 << 2)
    ctx->pc = 0x142788u;
    {
        const bool branch_taken_0x142788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14278Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142788u;
        // 0x14278c: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142788) {
            ctx->pc = 0x142F50u;
            return;
        }
    }
    ctx->pc = 0x142790u;
}
