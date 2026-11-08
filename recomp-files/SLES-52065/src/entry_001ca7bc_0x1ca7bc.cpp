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

// Function: entry_001ca7bc
// Address: 0x1ca7bc - 0x1ca7d8
void entry_001ca7bc_0x1ca7bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca7bc_0x1ca7bc");
#endif

    switch (ctx->pc) {
        case 0x1ca7c8u: goto label_1ca7c8;
        case 0x1ca7d4u: goto label_1ca7d4;
        default: break;
    }

    ctx->pc = 0x1ca7bcu;

    // 0x1ca7bc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1ca7bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ca7c0: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CA7C0u;
    SET_GPR_U32(ctx, 31, 0x1CA7C8u);
    ctx->pc = 0x1CA7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA7C0u;
    // 0x1ca7c4: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CA7C0u, 0x1CA7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA7C8u;
label_1ca7c8:
    // 0x1ca7c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ca7c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca7cc: 0xc06eb84  jal         func_1BAE10
    ctx->pc = 0x1CA7CCu;
    SET_GPR_U32(ctx, 31, 0x1CA7D4u);
    ctx->pc = 0x1CA7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA7CCu;
    // 0x1ca7d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BAE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BAE10u, 0x1CA7CCu, 0x1CA7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA7D4u;
label_1ca7d4:
    // 0x1ca7d4: 0x8e02006c  lw          $v0, 0x6C($s0)
    ctx->pc = 0x1ca7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    ctx->pc = 0x1ca7d8u;
}
