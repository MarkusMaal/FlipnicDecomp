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

// Function: entry_00190e54
// Address: 0x190e54 - 0x190e6c
void entry_00190e54_0x190e54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00190e54_0x190e54");
#endif

    ctx->pc = 0x190e54u;

    // 0x190e54: 0x8e030320  lw          $v1, 0x320($s0)
    ctx->pc = 0x190e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
    // 0x190e58: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x190e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x190e5c: 0x1462020e  bne         $v1, $v0, . + 4 + (0x20E << 2)
    ctx->pc = 0x190E5Cu;
    {
        const bool branch_taken_0x190e5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x190e5c) {
            ctx->pc = 0x191698u;
            return;
        }
    }
    ctx->pc = 0x190E64u;
    // 0x190e64: 0x1000020d  b           . + 4 + (0x20D << 2)
    ctx->pc = 0x190E64u;
    {
        const bool branch_taken_0x190e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190E64u;
        // 0x190e68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190e64) {
            ctx->pc = 0x19169Cu;
            return;
        }
    }
    ctx->pc = 0x190E6Cu;
}
