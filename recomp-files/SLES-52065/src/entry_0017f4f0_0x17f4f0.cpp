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

// Function: entry_0017f4f0
// Address: 0x17f4f0 - 0x17f508
void entry_0017f4f0_0x17f4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017f4f0_0x17f4f0");
#endif

    switch (ctx->pc) {
        case 0x17f504u: goto label_17f504;
        default: break;
    }

    ctx->pc = 0x17f4f0u;

    // 0x17f4f0: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x17f4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x17f4f4: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x17F4F4u;
    {
        const bool branch_taken_0x17f4f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F4F4u;
        // 0x17f4f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f4f4) {
            ctx->pc = 0x17F508u;
            return;
        }
    }
    ctx->pc = 0x17F4FCu;
    // 0x17f4fc: 0xc05fce8  jal         func_17F3A0
    ctx->pc = 0x17F4FCu;
    SET_GPR_U32(ctx, 31, 0x17F504u);
    ctx->pc = 0x17F500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F4FCu;
    // 0x17f500: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F3A0u, 0x17F4FCu, 0x17F504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F504u;
label_17f504:
    // 0x17f504: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17f504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17f508u;
}
