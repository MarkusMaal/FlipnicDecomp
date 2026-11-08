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

// Function: entry_00199284
// Address: 0x199284 - 0x19929c
void entry_00199284_0x199284(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199284_0x199284");
#endif

    switch (ctx->pc) {
        case 0x199294u: goto label_199294;
        default: break;
    }

    ctx->pc = 0x199284u;

    // 0x199284: 0x0  nop
    ctx->pc = 0x199284u;
    // NOP
    // 0x199288: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x199288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19928c: 0xc063e08  jal         func_18F820
    ctx->pc = 0x19928Cu;
    SET_GPR_U32(ctx, 31, 0x199294u);
    ctx->pc = 0x199290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19928Cu;
    // 0x199290: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19928Cu, 0x199294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199294u;
label_199294:
    // 0x199294: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x199294u;
    {
        const bool branch_taken_0x199294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x199294) {
            ctx->pc = 0x199350u;
            return;
        }
    }
    ctx->pc = 0x19929Cu;
}
