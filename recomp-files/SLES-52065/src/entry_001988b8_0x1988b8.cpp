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

// Function: entry_001988b8
// Address: 0x1988b8 - 0x1988cc
void entry_001988b8_0x1988b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001988b8_0x1988b8");
#endif

    switch (ctx->pc) {
        case 0x1988c0u: goto label_1988c0;
        default: break;
    }

    ctx->pc = 0x1988b8u;

    // 0x1988b8: 0xc063e08  jal         func_18F820
    ctx->pc = 0x1988B8u;
    SET_GPR_U32(ctx, 31, 0x1988C0u);
    ctx->pc = 0x1988BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1988B8u;
    // 0x1988bc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1988B8u, 0x1988C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1988C0u;
label_1988c0:
    // 0x1988c0: 0x100000dc  b           . + 4 + (0xDC << 2)
    ctx->pc = 0x1988C0u;
    {
        const bool branch_taken_0x1988c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1988c0) {
            ctx->pc = 0x198C34u;
            return;
        }
    }
    ctx->pc = 0x1988C8u;
    // 0x1988c8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1988c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1988ccu;
}
