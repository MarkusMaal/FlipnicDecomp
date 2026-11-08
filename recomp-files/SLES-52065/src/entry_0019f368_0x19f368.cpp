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

// Function: entry_0019f368
// Address: 0x19f368 - 0x19f378
void entry_0019f368_0x19f368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f368_0x19f368");
#endif

    switch (ctx->pc) {
        case 0x19f370u: goto label_19f370;
        default: break;
    }

    ctx->pc = 0x19f368u;

    // 0x19f368: 0xc063e08  jal         func_18F820
    ctx->pc = 0x19F368u;
    SET_GPR_U32(ctx, 31, 0x19F370u);
    ctx->pc = 0x19F36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F368u;
    // 0x19f36c: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19F368u, 0x19F370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F370u;
label_19f370:
    // 0x19f370: 0x10000194  b           . + 4 + (0x194 << 2)
    ctx->pc = 0x19F370u;
    {
        const bool branch_taken_0x19f370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f370) {
            ctx->pc = 0x19F9C4u;
            return;
        }
    }
    ctx->pc = 0x19F378u;
}
