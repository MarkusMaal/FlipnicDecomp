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

// Function: entry_00133b4c
// Address: 0x133b4c - 0x133b70
void entry_00133b4c_0x133b4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00133b4c_0x133b4c");
#endif

    switch (ctx->pc) {
        case 0x133b58u: goto label_133b58;
        default: break;
    }

    ctx->pc = 0x133b4cu;

    // 0x133b4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x133b4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133b50: 0xc04c4ec  jal         func_1313B0
    ctx->pc = 0x133B50u;
    SET_GPR_U32(ctx, 31, 0x133B58u);
    ctx->pc = 0x133B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133B50u;
    // 0x133b54: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1313B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1313B0u, 0x133B50u, 0x133B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133B58u;
label_133b58:
    // 0x133b58: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x133b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x133b5c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x133b5cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x133b60: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x133B60u;
    {
        const bool branch_taken_0x133b60 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x133B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133B60u;
        // 0x133b64: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133b60) {
            ctx->pc = 0x133B74u;
            return;
        }
    }
    ctx->pc = 0x133B68u;
    // 0x133b68: 0xc0401a4  jal         func_100690
    ctx->pc = 0x133B68u;
    SET_GPR_U32(ctx, 31, 0x133B70u);
    ctx->pc = 0x133B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133B68u;
    // 0x133b6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x133B68u, 0x133B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133B70u;
}
