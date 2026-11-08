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

// Function: entry_00123d68
// Address: 0x123d68 - 0x123d80
void entry_00123d68_0x123d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00123d68_0x123d68");
#endif

    switch (ctx->pc) {
        case 0x123d70u: goto label_123d70;
        case 0x123d78u: goto label_123d78;
        default: break;
    }

    ctx->pc = 0x123d68u;

    // 0x123d68: 0xc080702  jal         func_201C08
    ctx->pc = 0x123D68u;
    SET_GPR_U32(ctx, 31, 0x123D70u);
    ctx->pc = 0x123D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123D68u;
    // 0x123d6c: 0x26840020  addiu       $a0, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x123D68u, 0x123D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123D70u;
label_123d70:
    // 0x123d70: 0xc046c8c  jal         func_11B230
    ctx->pc = 0x123D70u;
    SET_GPR_U32(ctx, 31, 0x123D78u);
    ctx->pc = 0x123D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123D70u;
    // 0x123d74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B230u, 0x123D70u, 0x123D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123D78u;
label_123d78:
    // 0x123d78: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x123D78u;
    {
        const bool branch_taken_0x123d78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x123d78) {
            ctx->pc = 0x123D9Cu;
            return;
        }
    }
    ctx->pc = 0x123D80u;
}
