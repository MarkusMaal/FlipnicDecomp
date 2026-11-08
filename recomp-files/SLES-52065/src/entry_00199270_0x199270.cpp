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

// Function: entry_00199270
// Address: 0x199270 - 0x199284
void entry_00199270_0x199270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199270_0x199270");
#endif

    switch (ctx->pc) {
        case 0x19927cu: goto label_19927c;
        default: break;
    }

    ctx->pc = 0x199270u;

    // 0x199270: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x199270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199274: 0xc063e08  jal         func_18F820
    ctx->pc = 0x199274u;
    SET_GPR_U32(ctx, 31, 0x19927Cu);
    ctx->pc = 0x199278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199274u;
    // 0x199278: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x199274u, 0x19927Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19927Cu;
label_19927c:
    // 0x19927c: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x19927Cu;
    {
        const bool branch_taken_0x19927c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19927c) {
            ctx->pc = 0x199350u;
            return;
        }
    }
    ctx->pc = 0x199284u;
}
