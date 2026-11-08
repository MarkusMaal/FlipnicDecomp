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

// Function: entry_0019f970
// Address: 0x19f970 - 0x19f984
void entry_0019f970_0x19f970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f970_0x19f970");
#endif

    switch (ctx->pc) {
        case 0x19f978u: goto label_19f978;
        default: break;
    }

    ctx->pc = 0x19f970u;

    // 0x19f970: 0xc063e08  jal         func_18F820
    ctx->pc = 0x19F970u;
    SET_GPR_U32(ctx, 31, 0x19F978u);
    ctx->pc = 0x19F974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F970u;
    // 0x19f974: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19F970u, 0x19F978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F978u;
label_19f978:
    // 0x19f978: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x19F978u;
    {
        const bool branch_taken_0x19f978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f978) {
            ctx->pc = 0x19F9C4u;
            return;
        }
    }
    ctx->pc = 0x19F980u;
    // 0x19f980: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19f980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19f984u;
}
