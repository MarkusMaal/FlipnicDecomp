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

// Function: entry_0018e6d4
// Address: 0x18e6d4 - 0x18e6e8
void entry_0018e6d4_0x18e6d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e6d4_0x18e6d4");
#endif

    switch (ctx->pc) {
        case 0x18e6e0u: goto label_18e6e0;
        default: break;
    }

    ctx->pc = 0x18e6d4u;

    // 0x18e6d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18e6d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e6d8: 0xc063e08  jal         func_18F820
    ctx->pc = 0x18E6D8u;
    SET_GPR_U32(ctx, 31, 0x18E6E0u);
    ctx->pc = 0x18E6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E6D8u;
    // 0x18e6dc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x18E6D8u, 0x18E6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E6E0u;
label_18e6e0:
    // 0x18e6e0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x18E6E0u;
    {
        const bool branch_taken_0x18e6e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e6e0) {
            ctx->pc = 0x18E6F0u;
            return;
        }
    }
    ctx->pc = 0x18E6E8u;
}
