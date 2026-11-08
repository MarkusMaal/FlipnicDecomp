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

// Function: entry_001a83cc
// Address: 0x1a83cc - 0x1a83f8
void entry_001a83cc_0x1a83cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a83cc_0x1a83cc");
#endif

    switch (ctx->pc) {
        case 0x1a83d8u: goto label_1a83d8;
        case 0x1a83f0u: goto label_1a83f0;
        default: break;
    }

    ctx->pc = 0x1a83ccu;

    // 0x1a83cc: 0x8f8580f4  lw          $a1, -0x7F0C($gp)
    ctx->pc = 0x1a83ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934772)));
    // 0x1a83d0: 0xc064918  jal         func_192460
    ctx->pc = 0x1A83D0u;
    SET_GPR_U32(ctx, 31, 0x1A83D8u);
    ctx->pc = 0x1A83D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A83D0u;
    // 0x1a83d4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192460u, 0x1A83D0u, 0x1A83D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A83D8u;
label_1a83d8:
    // 0x1a83d8: 0x8c430320  lw          $v1, 0x320($v0)
    ctx->pc = 0x1a83d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 800)));
    // 0x1a83dc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A83DCu;
    {
        const bool branch_taken_0x1a83dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a83dc) {
            ctx->pc = 0x1A83F8u;
            return;
        }
    }
    ctx->pc = 0x1A83E4u;
    // 0x1a83e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a83e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a83e8: 0xc063e08  jal         func_18F820
    ctx->pc = 0x1A83E8u;
    SET_GPR_U32(ctx, 31, 0x1A83F0u);
    ctx->pc = 0x1A83ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A83E8u;
    // 0x1a83ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1A83E8u, 0x1A83F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A83F0u;
label_1a83f0:
    // 0x1a83f0: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x1A83F0u;
    {
        const bool branch_taken_0x1a83f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a83f0) {
            ctx->pc = 0x1A855Cu;
            return;
        }
    }
    ctx->pc = 0x1A83F8u;
}
