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

// Function: entry_0019f38c
// Address: 0x19f38c - 0x19f3a0
void entry_0019f38c_0x19f38c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f38c_0x19f38c");
#endif

    switch (ctx->pc) {
        case 0x19f398u: goto label_19f398;
        default: break;
    }

    ctx->pc = 0x19f38cu;

    // 0x19f38c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19f38cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f390: 0xc063e08  jal         func_18F820
    ctx->pc = 0x19F390u;
    SET_GPR_U32(ctx, 31, 0x19F398u);
    ctx->pc = 0x19F394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F390u;
    // 0x19f394: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19F390u, 0x19F398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F398u;
label_19f398:
    // 0x19f398: 0x1000018a  b           . + 4 + (0x18A << 2)
    ctx->pc = 0x19F398u;
    {
        const bool branch_taken_0x19f398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f398) {
            ctx->pc = 0x19F9C4u;
            return;
        }
    }
    ctx->pc = 0x19F3A0u;
}
