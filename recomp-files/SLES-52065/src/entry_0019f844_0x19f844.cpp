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

// Function: entry_0019f844
// Address: 0x19f844 - 0x19f850
void entry_0019f844_0x19f844(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f844_0x19f844");
#endif

    switch (ctx->pc) {
        case 0x19f84cu: goto label_19f84c;
        default: break;
    }

    ctx->pc = 0x19f844u;

    // 0x19f844: 0xc063e08  jal         func_18F820
    ctx->pc = 0x19F844u;
    SET_GPR_U32(ctx, 31, 0x19F84Cu);
    ctx->pc = 0x19F848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F844u;
    // 0x19f848: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19F844u, 0x19F84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F84Cu;
label_19f84c:
    // 0x19f84c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x19f84cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19f850u;
}
