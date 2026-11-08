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

// Function: entry_00199228
// Address: 0x199228 - 0x19923c
void entry_00199228_0x199228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199228_0x199228");
#endif

    switch (ctx->pc) {
        case 0x199234u: goto label_199234;
        default: break;
    }

    ctx->pc = 0x199228u;

    // 0x199228: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x199228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19922c: 0xc063e08  jal         func_18F820
    ctx->pc = 0x19922Cu;
    SET_GPR_U32(ctx, 31, 0x199234u);
    ctx->pc = 0x199230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19922Cu;
    // 0x199230: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19922Cu, 0x199234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199234u;
label_199234:
    // 0x199234: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x199234u;
    {
        const bool branch_taken_0x199234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x199234) {
            ctx->pc = 0x199350u;
            return;
        }
    }
    ctx->pc = 0x19923Cu;
}
