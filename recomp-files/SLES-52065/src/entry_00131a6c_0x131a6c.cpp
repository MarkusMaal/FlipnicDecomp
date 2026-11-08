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

// Function: entry_00131a6c
// Address: 0x131a6c - 0x131a94
void entry_00131a6c_0x131a6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131a6c_0x131a6c");
#endif

    switch (ctx->pc) {
        case 0x131a78u: goto label_131a78;
        default: break;
    }

    ctx->pc = 0x131a6cu;

    // 0x131a6c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x131a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131a70: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x131A70u;
    SET_GPR_U32(ctx, 31, 0x131A78u);
    ctx->pc = 0x131A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131A70u;
    // 0x131a74: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4BB8u, 0x131A70u, 0x131A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131A78u;
label_131a78:
    // 0x131a78: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x131a78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x131a7c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x131a7cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x131a80: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x131a80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x131a84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x131a84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x131a88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x131a88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x131a8c: 0x3e00008  jr          $ra
    ctx->pc = 0x131A8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131A8Cu;
        // 0x131a90: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131A8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x131A94u;
}
