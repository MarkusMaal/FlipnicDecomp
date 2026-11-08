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

// Function: entry_0011b8f0
// Address: 0x11b8f0 - 0x11b91c
void entry_0011b8f0_0x11b8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b8f0_0x11b8f0");
#endif

    switch (ctx->pc) {
        case 0x11b908u: goto label_11b908;
        default: break;
    }

    ctx->pc = 0x11b8f0u;

    // 0x11b8f0: 0x8ea20538  lw          $v0, 0x538($s5)
    ctx->pc = 0x11b8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1336)));
    // 0x11b8f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11b8f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11b8f8: 0x14450035  bne         $v0, $a1, . + 4 + (0x35 << 2)
    ctx->pc = 0x11B8F8u;
    {
        const bool branch_taken_0x11b8f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x11B8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B8F8u;
        // 0x11b8fc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b8f8) {
            ctx->pc = 0x11B9D0u;
            return;
        }
    }
    ctx->pc = 0x11B900u;
    // 0x11b900: 0xc07bdf0  jal         func_1EF7C0
    ctx->pc = 0x11B900u;
    SET_GPR_U32(ctx, 31, 0x11B908u);
    ctx->pc = 0x11B904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B900u;
    // 0x11b904: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF7C0u, 0x11B900u, 0x11B908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B908u;
label_11b908:
    // 0x11b908: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11b908u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b90c: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11B90Cu;
    {
        const bool branch_taken_0x11b90c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x11B910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B90Cu;
        // 0x11b910: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b90c) {
            ctx->pc = 0x11B91Cu;
            return;
        }
    }
    ctx->pc = 0x11B914u;
    // 0x11b914: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x11B914u;
    {
        const bool branch_taken_0x11b914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B914u;
        // 0x11b918: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b914) {
            ctx->pc = 0x11BA90u;
            return;
        }
    }
    ctx->pc = 0x11B91Cu;
}
