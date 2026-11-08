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

// Function: entry_0013bf94
// Address: 0x13bf94 - 0x13bfac
void entry_0013bf94_0x13bf94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013bf94_0x13bf94");
#endif

    switch (ctx->pc) {
        case 0x13bfa8u: goto label_13bfa8;
        default: break;
    }

    ctx->pc = 0x13bf94u;

    // 0x13bf94: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x13bf94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x13bf98: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x13BF98u;
    {
        const bool branch_taken_0x13bf98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BF98u;
        // 0x13bf9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bf98) {
            ctx->pc = 0x13BFACu;
            return;
        }
    }
    ctx->pc = 0x13BFA0u;
    // 0x13bfa0: 0xc04ee7c  jal         func_13B9F0
    ctx->pc = 0x13BFA0u;
    SET_GPR_U32(ctx, 31, 0x13BFA8u);
    ctx->pc = 0x13BFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BFA0u;
    // 0x13bfa4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B9F0u, 0x13BFA0u, 0x13BFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BFA8u;
label_13bfa8:
    // 0x13bfa8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13bfa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13bfacu;
}
