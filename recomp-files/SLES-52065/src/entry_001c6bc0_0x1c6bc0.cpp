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

// Function: entry_001c6bc0
// Address: 0x1c6bc0 - 0x1c6bdc
void entry_001c6bc0_0x1c6bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c6bc0_0x1c6bc0");
#endif

    switch (ctx->pc) {
        case 0x1c6bc8u: goto label_1c6bc8;
        case 0x1c6bd4u: goto label_1c6bd4;
        default: break;
    }

    ctx->pc = 0x1c6bc0u;

    // 0x1c6bc0: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C6BC0u;
    SET_GPR_U32(ctx, 31, 0x1C6BC8u);
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C6BC0u, 0x1C6BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6BC8u;
label_1c6bc8:
    // 0x1c6bc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6bcc: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C6BCCu;
    SET_GPR_U32(ctx, 31, 0x1C6BD4u);
    ctx->pc = 0x1C6BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6BCCu;
    // 0x1c6bd0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C6BCCu, 0x1C6BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6BD4u;
label_1c6bd4:
    // 0x1c6bd4: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1C6BD4u;
    {
        const bool branch_taken_0x1c6bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6bd4) {
            ctx->pc = 0x1C6C2Cu;
            return;
        }
    }
    ctx->pc = 0x1C6BDCu;
}
