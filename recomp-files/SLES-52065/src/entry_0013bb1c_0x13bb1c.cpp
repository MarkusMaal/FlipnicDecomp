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

// Function: entry_0013bb1c
// Address: 0x13bb1c - 0x13bb34
void entry_0013bb1c_0x13bb1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013bb1c_0x13bb1c");
#endif

    switch (ctx->pc) {
        case 0x13bb30u: goto label_13bb30;
        default: break;
    }

    ctx->pc = 0x13bb1cu;

    // 0x13bb1c: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x13bb1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x13bb20: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x13BB20u;
    {
        const bool branch_taken_0x13bb20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BB20u;
        // 0x13bb24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bb20) {
            ctx->pc = 0x13BB34u;
            return;
        }
    }
    ctx->pc = 0x13BB28u;
    // 0x13bb28: 0xc04ee7c  jal         func_13B9F0
    ctx->pc = 0x13BB28u;
    SET_GPR_U32(ctx, 31, 0x13BB30u);
    ctx->pc = 0x13BB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BB28u;
    // 0x13bb2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B9F0u, 0x13BB28u, 0x13BB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BB30u;
label_13bb30:
    // 0x13bb30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13bb30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13bb34u;
}
