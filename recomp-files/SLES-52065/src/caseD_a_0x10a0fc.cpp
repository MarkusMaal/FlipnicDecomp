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

// Function: caseD_a
// Address: 0x10a0fc - 0x10a110
void caseD_a_0x10a0fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_a_0x10a0fc");
#endif

    switch (ctx->pc) {
        case 0x10a108u: goto label_10a108;
        default: break;
    }

    ctx->pc = 0x10a0fcu;

    // 0x10a0fc: 0x8f848388  lw          $a0, -0x7C78($gp)
    ctx->pc = 0x10a0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
    // 0x10a100: 0xc0463c4  jal         func_118F10
    ctx->pc = 0x10A100u;
    SET_GPR_U32(ctx, 31, 0x10A108u);
    ctx->pc = 0x10A104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A100u;
    // 0x10a104: 0x86250002  lh          $a1, 0x2($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118F10u, 0x10A100u, 0x10A108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A108u;
label_10a108:
    // 0x10a108: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x10A108u;
    {
        const bool branch_taken_0x10a108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a108) {
            ctx->pc = 0x10A1F0u;
            return;
        }
    }
    ctx->pc = 0x10A110u;
}
