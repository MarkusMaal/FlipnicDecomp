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

// Function: entry_001017c8
// Address: 0x1017c8 - 0x101800
void entry_001017c8_0x1017c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001017c8_0x1017c8");
#endif

    switch (ctx->pc) {
        case 0x1017d0u: goto label_1017d0;
        case 0x1017d8u: goto label_1017d8;
        case 0x1017e0u: goto label_1017e0;
        case 0x1017e8u: goto label_1017e8;
        case 0x1017f0u: goto label_1017f0;
        default: break;
    }

    ctx->pc = 0x1017c8u;

    // 0x1017c8: 0xc05fa94  jal         func_17EA50
    ctx->pc = 0x1017C8u;
    SET_GPR_U32(ctx, 31, 0x1017D0u);
    ctx->pc = 0x17EA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EA50u, 0x1017C8u, 0x1017D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1017D0u;
label_1017d0:
    // 0x1017d0: 0xc06d04c  jal         func_1B4130
    ctx->pc = 0x1017D0u;
    SET_GPR_U32(ctx, 31, 0x1017D8u);
    ctx->pc = 0x1017D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1017D0u;
    // 0x1017d4: 0x8f848714  lw          $a0, -0x78EC($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4130u, 0x1017D0u, 0x1017D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1017D8u;
label_1017d8:
    // 0x1017d8: 0xc0617f8  jal         func_185FE0
    ctx->pc = 0x1017D8u;
    SET_GPR_U32(ctx, 31, 0x1017E0u);
    ctx->pc = 0x185FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185FE0u, 0x1017D8u, 0x1017E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1017E0u;
label_1017e0:
    // 0x1017e0: 0xc047a3c  jal         func_11E8F0
    ctx->pc = 0x1017E0u;
    SET_GPR_U32(ctx, 31, 0x1017E8u);
    ctx->pc = 0x11E8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E8F0u, 0x1017E0u, 0x1017E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1017E8u;
label_1017e8:
    // 0x1017e8: 0xc046b74  jal         func_11ADD0
    ctx->pc = 0x1017E8u;
    SET_GPR_U32(ctx, 31, 0x1017F0u);
    ctx->pc = 0x1017ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1017E8u;
    // 0x1017ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ADD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ADD0u, 0x1017E8u, 0x1017F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1017F0u;
label_1017f0:
    // 0x1017f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1017f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1017f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1017f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1017f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1017F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1017FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1017F8u;
        // 0x1017fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1017F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x101800u;
}
