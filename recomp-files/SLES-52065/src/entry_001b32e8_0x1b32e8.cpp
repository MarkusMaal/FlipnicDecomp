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

// Function: entry_001b32e8
// Address: 0x1b32e8 - 0x1b3310
void entry_001b32e8_0x1b32e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b32e8_0x1b32e8");
#endif

    switch (ctx->pc) {
        case 0x1b32f4u: goto label_1b32f4;
        case 0x1b3308u: goto label_1b3308;
        default: break;
    }

    ctx->pc = 0x1b32e8u;

    // 0x1b32e8: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x1b32e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1b32ec: 0xc081c20  jal         func_207080
    ctx->pc = 0x1B32ECu;
    SET_GPR_U32(ctx, 31, 0x1B32F4u);
    ctx->pc = 0x1B32F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B32ECu;
    // 0x1b32f0: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207080u, 0x1B32ECu, 0x1B32F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B32F4u;
label_1b32f4:
    // 0x1b32f4: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x1b32f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1b32f8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1b32f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b32fc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1b32fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3300: 0xc0627e0  jal         func_189F80
    ctx->pc = 0x1B3300u;
    SET_GPR_U32(ctx, 31, 0x1B3308u);
    ctx->pc = 0x1B3304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3300u;
    // 0x1b3304: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189F80u, 0x1B3300u, 0x1B3308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3308u;
label_1b3308:
    // 0x1b3308: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1B3308u;
    {
        const bool branch_taken_0x1b3308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3308) {
            ctx->pc = 0x1B3320u;
            return;
        }
    }
    ctx->pc = 0x1B3310u;
}
