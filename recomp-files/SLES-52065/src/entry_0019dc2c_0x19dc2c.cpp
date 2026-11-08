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

// Function: entry_0019dc2c
// Address: 0x19dc2c - 0x19dc40
void entry_0019dc2c_0x19dc2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019dc2c_0x19dc2c");
#endif

    switch (ctx->pc) {
        case 0x19dc34u: goto label_19dc34;
        default: break;
    }

    ctx->pc = 0x19dc2cu;

    // 0x19dc2c: 0xc063de0  jal         func_18F780
    ctx->pc = 0x19DC2Cu;
    SET_GPR_U32(ctx, 31, 0x19DC34u);
    ctx->pc = 0x19DC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DC2Cu;
    // 0x19dc30: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F780u, 0x19DC2Cu, 0x19DC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DC34u;
label_19dc34:
    // 0x19dc34: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x19DC34u;
    {
        const bool branch_taken_0x19dc34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19dc34) {
            ctx->pc = 0x19DCCCu;
            return;
        }
    }
    ctx->pc = 0x19DC3Cu;
    // 0x19dc3c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x19dc3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19dc40u;
}
