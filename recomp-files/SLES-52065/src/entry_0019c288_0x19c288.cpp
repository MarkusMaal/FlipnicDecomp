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

// Function: entry_0019c288
// Address: 0x19c288 - 0x19c294
void entry_0019c288_0x19c288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c288_0x19c288");
#endif

    switch (ctx->pc) {
        case 0x19c290u: goto label_19c290;
        default: break;
    }

    ctx->pc = 0x19c288u;

    // 0x19c288: 0xc063e14  jal         func_18F850
    ctx->pc = 0x19C288u;
    SET_GPR_U32(ctx, 31, 0x19C290u);
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x19C288u, 0x19C290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C290u;
label_19c290:
    // 0x19c290: 0x26240ac0  addiu       $a0, $s1, 0xAC0
    ctx->pc = 0x19c290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2752));
    ctx->pc = 0x19c294u;
}
