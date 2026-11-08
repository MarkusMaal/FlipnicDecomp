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

// Function: entry_0016db30
// Address: 0x16db30 - 0x16db50
void entry_0016db30_0x16db30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016db30_0x16db30");
#endif

    switch (ctx->pc) {
        case 0x16db3cu: goto label_16db3c;
        case 0x16db48u: goto label_16db48;
        default: break;
    }

    ctx->pc = 0x16db30u;

    // 0x16db30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16db30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16db34: 0xc06cdf0  jal         func_1B37C0
    ctx->pc = 0x16DB34u;
    SET_GPR_U32(ctx, 31, 0x16DB3Cu);
    ctx->pc = 0x16DB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DB34u;
    // 0x16db38: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B37C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B37C0u, 0x16DB34u, 0x16DB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DB3Cu;
label_16db3c:
    // 0x16db3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16db3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16db40: 0xc06cdfc  jal         func_1B37F0
    ctx->pc = 0x16DB40u;
    SET_GPR_U32(ctx, 31, 0x16DB48u);
    ctx->pc = 0x16DB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DB40u;
    // 0x16db44: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B37F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B37F0u, 0x16DB40u, 0x16DB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DB48u;
label_16db48:
    // 0x16db48: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x16DB48u;
    {
        const bool branch_taken_0x16db48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16db48) {
            ctx->pc = 0x16DB98u;
            return;
        }
    }
    ctx->pc = 0x16DB50u;
}
