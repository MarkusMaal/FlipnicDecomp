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

// Function: entry_001c85dc
// Address: 0x1c85dc - 0x1c85fc
void entry_001c85dc_0x1c85dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c85dc_0x1c85dc");
#endif

    switch (ctx->pc) {
        case 0x1c85e4u: goto label_1c85e4;
        case 0x1c85f8u: goto label_1c85f8;
        default: break;
    }

    ctx->pc = 0x1c85dcu;

    // 0x1c85dc: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1C85DCu;
    SET_GPR_U32(ctx, 31, 0x1C85E4u);
    ctx->pc = 0x1C85E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C85DCu;
    // 0x1c85e0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1C85DCu, 0x1C85E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C85E4u;
label_1c85e4:
    // 0x1c85e4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C85E4u;
    {
        const bool branch_taken_0x1c85e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C85E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C85E4u;
        // 0x1c85e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c85e4) {
            ctx->pc = 0x1C85FCu;
            return;
        }
    }
    ctx->pc = 0x1C85ECu;
    // 0x1c85ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c85ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c85f0: 0xc072188  jal         func_1C8620
    ctx->pc = 0x1C85F0u;
    SET_GPR_U32(ctx, 31, 0x1C85F8u);
    ctx->pc = 0x1C85F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C85F0u;
    // 0x1c85f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8620u, 0x1C85F0u, 0x1C85F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C85F8u;
label_1c85f8:
    // 0x1c85f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c85f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1c85fcu;
}
