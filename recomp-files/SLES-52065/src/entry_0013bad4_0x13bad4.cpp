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

// Function: entry_0013bad4
// Address: 0x13bad4 - 0x13baec
void entry_0013bad4_0x13bad4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013bad4_0x13bad4");
#endif

    switch (ctx->pc) {
        case 0x13bae8u: goto label_13bae8;
        default: break;
    }

    ctx->pc = 0x13bad4u;

    // 0x13bad4: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x13bad4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x13bad8: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x13BAD8u;
    {
        const bool branch_taken_0x13bad8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BAD8u;
        // 0x13badc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bad8) {
            ctx->pc = 0x13BAECu;
            return;
        }
    }
    ctx->pc = 0x13BAE0u;
    // 0x13bae0: 0xc04ee7c  jal         func_13B9F0
    ctx->pc = 0x13BAE0u;
    SET_GPR_U32(ctx, 31, 0x13BAE8u);
    ctx->pc = 0x13BAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BAE0u;
    // 0x13bae4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B9F0u, 0x13BAE0u, 0x13BAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BAE8u;
label_13bae8:
    // 0x13bae8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13bae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13baecu;
}
