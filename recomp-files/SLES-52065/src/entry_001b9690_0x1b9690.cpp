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

// Function: entry_001b9690
// Address: 0x1b9690 - 0x1b96a0
void entry_001b9690_0x1b9690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b9690_0x1b9690");
#endif

    ctx->pc = 0x1b9690u;

    // 0x1b9690: 0x16110003  bne         $s0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B9690u;
    {
        const bool branch_taken_0x1b9690 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x1B9694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9690u;
        // 0x1b9694: 0x27a4004c  addiu       $a0, $sp, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9690) {
            ctx->pc = 0x1B96A0u;
            return;
        }
    }
    ctx->pc = 0x1B9698u;
    // 0x1b9698: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1B9698u;
    {
        const bool branch_taken_0x1b9698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B969Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9698u;
        // 0x1b969c: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9698) {
            ctx->pc = 0x1B96C8u;
            return;
        }
    }
    ctx->pc = 0x1B96A0u;
}
