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

// Function: entry_0016a0c0
// Address: 0x16a0c0 - 0x16a0d8
void entry_0016a0c0_0x16a0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016a0c0_0x16a0c0");
#endif

    switch (ctx->pc) {
        case 0x16a0d4u: goto label_16a0d4;
        default: break;
    }

    ctx->pc = 0x16a0c0u;

    // 0x16a0c0: 0x8e040228  lw          $a0, 0x228($s0)
    ctx->pc = 0x16a0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 552)));
    // 0x16a0c4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16A0C4u;
    {
        const bool branch_taken_0x16a0c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a0c4) {
            ctx->pc = 0x16A0D8u;
            return;
        }
    }
    ctx->pc = 0x16A0CCu;
    // 0x16a0cc: 0xc04be08  jal         func_12F820
    ctx->pc = 0x16A0CCu;
    SET_GPR_U32(ctx, 31, 0x16A0D4u);
    ctx->pc = 0x12F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F820u, 0x16A0CCu, 0x16A0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A0D4u;
label_16a0d4:
    // 0x16a0d4: 0xae000228  sw          $zero, 0x228($s0)
    ctx->pc = 0x16a0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 552), GPR_U32(ctx, 0));
    ctx->pc = 0x16a0d8u;
}
