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

// Function: entry_00198a88
// Address: 0x198a88 - 0x198ac0
void entry_00198a88_0x198a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198a88_0x198a88");
#endif

    switch (ctx->pc) {
        case 0x198aa8u: goto label_198aa8;
        default: break;
    }

    ctx->pc = 0x198a88u;

    // 0x198a88: 0x8e250024  lw          $a1, 0x24($s1)
    ctx->pc = 0x198a88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x198a8c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x198a8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x198a90: 0x10a7000b  beq         $a1, $a3, . + 4 + (0xB << 2)
    ctx->pc = 0x198A90u;
    {
        const bool branch_taken_0x198a90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        if (branch_taken_0x198a90) {
            ctx->pc = 0x198AC0u;
            return;
        }
    }
    ctx->pc = 0x198A98u;
    // 0x198a98: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x198a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198a9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x198a9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198aa0: 0xc064f7c  jal         func_193DF0
    ctx->pc = 0x198AA0u;
    SET_GPR_U32(ctx, 31, 0x198AA8u);
    ctx->pc = 0x198AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198AA0u;
    // 0x198aa4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193DF0u, 0x198AA0u, 0x198AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198AA8u;
label_198aa8:
    // 0x198aa8: 0x8ea20664  lw          $v0, 0x664($s5)
    ctx->pc = 0x198aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1636)));
    // 0x198aac: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x198aacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198ab0: 0x8c460030  lw          $a2, 0x30($v0)
    ctx->pc = 0x198ab0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x198ab4: 0x8c470034  lw          $a3, 0x34($v0)
    ctx->pc = 0x198ab4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x198ab8: 0xc064b08  jal         func_192C20
    ctx->pc = 0x198AB8u;
    SET_GPR_U32(ctx, 31, 0x198AC0u);
    ctx->pc = 0x198ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198AB8u;
    // 0x198abc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192C20u, 0x198AB8u, 0x198AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198AC0u;
}
