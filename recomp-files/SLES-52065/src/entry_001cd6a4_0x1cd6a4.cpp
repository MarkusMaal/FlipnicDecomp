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

// Function: entry_001cd6a4
// Address: 0x1cd6a4 - 0x1cd6cc
void entry_001cd6a4_0x1cd6a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cd6a4_0x1cd6a4");
#endif

    switch (ctx->pc) {
        case 0x1cd6b8u: goto label_1cd6b8;
        case 0x1cd6c4u: goto label_1cd6c4;
        default: break;
    }

    ctx->pc = 0x1cd6a4u;

    // 0x1cd6a4: 0x0  nop
    ctx->pc = 0x1cd6a4u;
    // NOP
    // 0x1cd6a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1cd6a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd6ac: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1cd6acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1cd6b0: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CD6B0u;
    SET_GPR_U32(ctx, 31, 0x1CD6B8u);
    ctx->pc = 0x1CD6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD6B0u;
    // 0x1cd6b4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CD6B0u, 0x1CD6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD6B8u;
label_1cd6b8:
    // 0x1cd6b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cd6b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd6bc: 0xc06e764  jal         func_1B9D90
    ctx->pc = 0x1CD6BCu;
    SET_GPR_U32(ctx, 31, 0x1CD6C4u);
    ctx->pc = 0x1CD6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD6BCu;
    // 0x1cd6c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9D90u, 0x1CD6BCu, 0x1CD6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD6C4u;
label_1cd6c4:
    // 0x1cd6c4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1CD6C4u;
    {
        const bool branch_taken_0x1cd6c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd6c4) {
            ctx->pc = 0x1CD6E4u;
            return;
        }
    }
    ctx->pc = 0x1CD6CCu;
}
