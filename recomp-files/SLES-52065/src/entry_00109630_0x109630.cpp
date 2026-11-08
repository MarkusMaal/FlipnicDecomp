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

// Function: entry_00109630
// Address: 0x109630 - 0x109644
void entry_00109630_0x109630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00109630_0x109630");
#endif

    ctx->pc = 0x109630u;

    // 0x109630: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x109630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x109634: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x109634u;
    {
        const bool branch_taken_0x109634 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x109638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109634u;
        // 0x109638: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109634) {
            ctx->pc = 0x109644u;
            return;
        }
    }
    ctx->pc = 0x10963Cu;
    // 0x10963c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x10963Cu;
    {
        const bool branch_taken_0x10963c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10963c) {
            ctx->pc = 0x109680u;
            return;
        }
    }
    ctx->pc = 0x109644u;
}
