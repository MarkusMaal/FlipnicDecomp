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

// Function: entry_001953ec
// Address: 0x1953ec - 0x195404
void entry_001953ec_0x1953ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001953ec_0x1953ec");
#endif

    switch (ctx->pc) {
        case 0x1953fcu: goto label_1953fc;
        default: break;
    }

    ctx->pc = 0x1953ecu;

    // 0x1953ec: 0x0  nop
    ctx->pc = 0x1953ecu;
    // NOP
    // 0x1953f0: 0x8f8486f4  lw          $a0, -0x790C($gp)
    ctx->pc = 0x1953f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936308)));
    // 0x1953f4: 0xc046400  jal         func_119000
    ctx->pc = 0x1953F4u;
    SET_GPR_U32(ctx, 31, 0x1953FCu);
    ctx->pc = 0x1953F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1953F4u;
    // 0x1953f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119000u, 0x1953F4u, 0x1953FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1953FCu;
label_1953fc:
    // 0x1953fc: 0x10000259  b           . + 4 + (0x259 << 2)
    ctx->pc = 0x1953FCu;
    {
        const bool branch_taken_0x1953fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1953fc) {
            ctx->pc = 0x195D64u;
            return;
        }
    }
    ctx->pc = 0x195404u;
}
