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

// Function: entry_001be6d0
// Address: 0x1be6d0 - 0x1be6e8
void entry_001be6d0_0x1be6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001be6d0_0x1be6d0");
#endif

    switch (ctx->pc) {
        case 0x1be6e4u: goto label_1be6e4;
        default: break;
    }

    ctx->pc = 0x1be6d0u;

    // 0x1be6d0: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x1be6d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1be6d4: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BE6D4u;
    {
        const bool branch_taken_0x1be6d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE6D4u;
        // 0x1be6d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be6d4) {
            ctx->pc = 0x1BE6E8u;
            return;
        }
    }
    ctx->pc = 0x1BE6DCu;
    // 0x1be6dc: 0xc06f92c  jal         func_1BE4B0
    ctx->pc = 0x1BE6DCu;
    SET_GPR_U32(ctx, 31, 0x1BE6E4u);
    ctx->pc = 0x1BE6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE6DCu;
    // 0x1be6e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE4B0u, 0x1BE6DCu, 0x1BE6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE6E4u;
label_1be6e4:
    // 0x1be6e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1be6e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1be6e8u;
}
