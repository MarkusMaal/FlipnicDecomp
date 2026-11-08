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

// Function: entry_0015d454
// Address: 0x15d454 - 0x15d470
void entry_0015d454_0x15d454(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015d454_0x15d454");
#endif

    ctx->pc = 0x15d454u;

    // 0x15d454: 0x2d31821  addu        $v1, $s6, $s3
    ctx->pc = 0x15d454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 19)));
    // 0x15d458: 0x8c643cd8  lw          $a0, 0x3CD8($v1)
    ctx->pc = 0x15d458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15576)));
    // 0x15d45c: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x15d45cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15d460: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x15D460u;
    {
        const bool branch_taken_0x15d460 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x15D464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D460u;
        // 0x15d464: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d460) {
            ctx->pc = 0x15D470u;
            return;
        }
    }
    ctx->pc = 0x15D468u;
    // 0x15d468: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15D468u;
    {
        const bool branch_taken_0x15d468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d468) {
            ctx->pc = 0x15D478u;
            return;
        }
    }
    ctx->pc = 0x15D470u;
}
