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

// Function: caseD_1a
// Address: 0x10a110 - 0x10a120
void caseD_1a_0x10a110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1a_0x10a110");
#endif

    switch (ctx->pc) {
        case 0x10a118u: goto label_10a118;
        default: break;
    }

    ctx->pc = 0x10a110u;

    // 0x10a110: 0xc0463fc  jal         func_118FF0
    ctx->pc = 0x10A110u;
    SET_GPR_U32(ctx, 31, 0x10A118u);
    ctx->pc = 0x10A114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A110u;
    // 0x10a114: 0x8f848388  lw          $a0, -0x7C78($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118FF0u, 0x10A110u, 0x10A118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A118u;
label_10a118:
    // 0x10a118: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x10A118u;
    {
        const bool branch_taken_0x10a118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a118) {
            ctx->pc = 0x10A1F0u;
            return;
        }
    }
    ctx->pc = 0x10A120u;
}
