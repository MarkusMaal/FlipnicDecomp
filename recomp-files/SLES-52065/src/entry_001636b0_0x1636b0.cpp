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

// Function: entry_001636b0
// Address: 0x1636b0 - 0x1636d8
void entry_001636b0_0x1636b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001636b0_0x1636b0");
#endif

    switch (ctx->pc) {
        case 0x1636b8u: goto label_1636b8;
        case 0x1636c4u: goto label_1636c4;
        default: break;
    }

    ctx->pc = 0x1636b0u;

    // 0x1636b0: 0xc042118  jal         func_108460
    ctx->pc = 0x1636B0u;
    SET_GPR_U32(ctx, 31, 0x1636B8u);
    ctx->pc = 0x1636B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1636B0u;
    // 0x1636b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x1636B0u, 0x1636B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1636B8u;
label_1636b8:
    // 0x1636b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1636b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1636bc: 0xc0561e4  jal         func_158790
    ctx->pc = 0x1636BCu;
    SET_GPR_U32(ctx, 31, 0x1636C4u);
    ctx->pc = 0x1636C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1636BCu;
    // 0x1636c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158790u, 0x1636BCu, 0x1636C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1636C4u;
label_1636c4:
    // 0x1636c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1636c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1636c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1636c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1636cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1636ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1636d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1636D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1636D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1636D0u;
        // 0x1636d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1636D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1636D8u;
}
