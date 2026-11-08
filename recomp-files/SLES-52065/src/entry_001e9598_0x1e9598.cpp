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

// Function: entry_001e9598
// Address: 0x1e9598 - 0x1e95bc
void entry_001e9598_0x1e9598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e9598_0x1e9598");
#endif

    ctx->pc = 0x1e9598u;

    // 0x1e9598: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1e9598u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
    // 0x1e959c: 0x7000007  bltz        $t8, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E959Cu;
    {
        const bool branch_taken_0x1e959c = (GPR_S32(ctx, 24) < 0);
        ctx->pc = 0x1E95A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E959Cu;
        // 0x1e95a0: 0x812021  addu        $a0, $a0, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e959c) {
            ctx->pc = 0x1E95BCu;
            return;
        }
    }
    ctx->pc = 0x1E95A4u;
    // 0x1e95a4: 0x99c821  addu        $t9, $a0, $t9
    ctx->pc = 0x1e95a4u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 25)));
    // 0x1e95a8: 0x8f390000  lw          $t9, 0x0($t9)
    ctx->pc = 0x1e95a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x1e95ac: 0x0  nop
    ctx->pc = 0x1e95acu;
    // NOP
    // 0x1e95b0: 0x338c821  addu        $t9, $t9, $t8
    ctx->pc = 0x1e95b0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 24)));
    // 0x1e95b4: 0x8f390000  lw          $t9, 0x0($t9)
    ctx->pc = 0x1e95b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x1e95b8: 0x0  nop
    ctx->pc = 0x1e95b8u;
    // NOP
    ctx->pc = 0x1e95bcu;
}
