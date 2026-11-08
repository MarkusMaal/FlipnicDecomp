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

// Function: entry_0016c588
// Address: 0x16c588 - 0x16c59c
void entry_0016c588_0x16c588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016c588_0x16c588");
#endif

    ctx->pc = 0x16c588u;

    // 0x16c588: 0x8e220240  lw          $v0, 0x240($s1)
    ctx->pc = 0x16c588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 576)));
    // 0x16c58c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16C58Cu;
    {
        const bool branch_taken_0x16c58c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x16C590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C58Cu;
        // 0x16c590: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c58c) {
            ctx->pc = 0x16C59Cu;
            return;
        }
    }
    ctx->pc = 0x16C594u;
    // 0x16c594: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x16C594u;
    {
        const bool branch_taken_0x16c594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C594u;
        // 0x16c598: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c594) {
            ctx->pc = 0x16C5F8u;
            return;
        }
    }
    ctx->pc = 0x16C59Cu;
}
