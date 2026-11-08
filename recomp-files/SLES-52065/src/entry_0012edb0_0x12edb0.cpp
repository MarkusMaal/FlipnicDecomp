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

// Function: entry_0012edb0
// Address: 0x12edb0 - 0x12edc8
void entry_0012edb0_0x12edb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012edb0_0x12edb0");
#endif

    switch (ctx->pc) {
        case 0x12edc4u: goto label_12edc4;
        default: break;
    }

    ctx->pc = 0x12edb0u;

    // 0x12edb0: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x12edb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x12edb4: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x12EDB4u;
    {
        const bool branch_taken_0x12edb4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EDB4u;
        // 0x12edb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12edb4) {
            ctx->pc = 0x12EDC8u;
            return;
        }
    }
    ctx->pc = 0x12EDBCu;
    // 0x12edbc: 0xc04bb2c  jal         func_12ECB0
    ctx->pc = 0x12EDBCu;
    SET_GPR_U32(ctx, 31, 0x12EDC4u);
    ctx->pc = 0x12EDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EDBCu;
    // 0x12edc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12ECB0u, 0x12EDBCu, 0x12EDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EDC4u;
label_12edc4:
    // 0x12edc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12edc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12edc8u;
}
