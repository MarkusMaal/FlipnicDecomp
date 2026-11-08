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

// Function: entry_001b5ad0
// Address: 0x1b5ad0 - 0x1b5ae4
void entry_001b5ad0_0x1b5ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b5ad0_0x1b5ad0");
#endif

    switch (ctx->pc) {
        case 0x1b5ad8u: goto label_1b5ad8;
        default: break;
    }

    ctx->pc = 0x1b5ad0u;

    // 0x1b5ad0: 0xc047a3c  jal         func_11E8F0
    ctx->pc = 0x1B5AD0u;
    SET_GPR_U32(ctx, 31, 0x1B5AD8u);
    ctx->pc = 0x11E8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E8F0u, 0x1B5AD0u, 0x1B5AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5AD8u;
label_1b5ad8:
    // 0x1b5ad8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b5ad8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5adc: 0xc0485a4  jal         func_121690
    ctx->pc = 0x1B5ADCu;
    SET_GPR_U32(ctx, 31, 0x1B5AE4u);
    ctx->pc = 0x1B5AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5ADCu;
    // 0x1b5ae0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121690u, 0x1B5ADCu, 0x1B5AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5AE4u;
}
