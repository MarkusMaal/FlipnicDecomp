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

// Function: entry_001f8bb8
// Address: 0x1f8bb8 - 0x1f8bc8
void entry_001f8bb8_0x1f8bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f8bb8_0x1f8bb8");
#endif

    switch (ctx->pc) {
        case 0x1f8bc0u: goto label_1f8bc0;
        default: break;
    }

    ctx->pc = 0x1f8bb8u;

    // 0x1f8bb8: 0xc07ba5a  jal         func_1EE968
    ctx->pc = 0x1F8BB8u;
    SET_GPR_U32(ctx, 31, 0x1F8BC0u);
    ctx->pc = 0x1F8BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8BB8u;
    // 0x1f8bbc: 0x26241600  addiu       $a0, $s1, 0x1600 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 5632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE968u, 0x1F8BB8u, 0x1F8BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8BC0u;
label_1f8bc0:
    // 0x1f8bc0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1F8BC0u;
    {
        const bool branch_taken_0x1f8bc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8BC0u;
        // 0x1f8bc4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8bc0) {
            ctx->pc = 0x1F8BB0u;
            return;
        }
    }
    ctx->pc = 0x1F8BC8u;
}
