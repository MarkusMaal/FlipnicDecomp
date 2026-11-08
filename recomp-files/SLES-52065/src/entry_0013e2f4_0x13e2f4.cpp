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

// Function: entry_0013e2f4
// Address: 0x13e2f4 - 0x13e318
void entry_0013e2f4_0x13e2f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013e2f4_0x13e2f4");
#endif

    switch (ctx->pc) {
        case 0x13e2fcu: goto label_13e2fc;
        default: break;
    }

    ctx->pc = 0x13e2f4u;

    // 0x13e2f4: 0xc04b7b4  jal         func_12DED0
    ctx->pc = 0x13E2F4u;
    SET_GPR_U32(ctx, 31, 0x13E2FCu);
    ctx->pc = 0x12DED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DED0u, 0x13E2F4u, 0x13E2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E2FCu;
label_13e2fc:
    // 0x13e2fc: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x13e2fcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e300: 0x8ea201c4  lw          $v0, 0x1C4($s5)
    ctx->pc = 0x13e300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 452)));
    // 0x13e304: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x13e304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13e308: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13E308u;
    {
        const bool branch_taken_0x13e308 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e308) {
            ctx->pc = 0x13E318u;
            return;
        }
    }
    ctx->pc = 0x13E310u;
    // 0x13e310: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x13E310u;
    {
        const bool branch_taken_0x13e310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E310u;
        // 0x13e314: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e310) {
            ctx->pc = 0x13E550u;
            return;
        }
    }
    ctx->pc = 0x13E318u;
}
