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

// Function: entry_001be5b0
// Address: 0x1be5b0 - 0x1be5c8
void entry_001be5b0_0x1be5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001be5b0_0x1be5b0");
#endif

    switch (ctx->pc) {
        case 0x1be5c4u: goto label_1be5c4;
        default: break;
    }

    ctx->pc = 0x1be5b0u;

    // 0x1be5b0: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x1be5b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1be5b4: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BE5B4u;
    {
        const bool branch_taken_0x1be5b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE5B4u;
        // 0x1be5b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be5b4) {
            ctx->pc = 0x1BE5C8u;
            return;
        }
    }
    ctx->pc = 0x1BE5BCu;
    // 0x1be5bc: 0xc06f92c  jal         func_1BE4B0
    ctx->pc = 0x1BE5BCu;
    SET_GPR_U32(ctx, 31, 0x1BE5C4u);
    ctx->pc = 0x1BE5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE5BCu;
    // 0x1be5c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE4B0u, 0x1BE5BCu, 0x1BE5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE5C4u;
label_1be5c4:
    // 0x1be5c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1be5c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1be5c8u;
}
