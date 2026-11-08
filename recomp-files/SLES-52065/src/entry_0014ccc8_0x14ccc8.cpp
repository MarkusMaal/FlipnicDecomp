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

// Function: entry_0014ccc8
// Address: 0x14ccc8 - 0x14ccdc
void entry_0014ccc8_0x14ccc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ccc8_0x14ccc8");
#endif

    switch (ctx->pc) {
        case 0x14ccd4u: goto label_14ccd4;
        default: break;
    }

    ctx->pc = 0x14ccc8u;

    // 0x14ccc8: 0x8e2400b0  lw          $a0, 0xB0($s1)
    ctx->pc = 0x14ccc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x14cccc: 0xc0522d4  jal         func_148B50
    ctx->pc = 0x14CCCCu;
    SET_GPR_U32(ctx, 31, 0x14CCD4u);
    ctx->pc = 0x14CCD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CCCCu;
    // 0x14ccd0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148B50u, 0x14CCCCu, 0x14CCD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CCD4u;
label_14ccd4:
    // 0x14ccd4: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x14CCD4u;
    {
        const bool branch_taken_0x14ccd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ccd4) {
            ctx->pc = 0x14CE34u;
            return;
        }
    }
    ctx->pc = 0x14CCDCu;
}
