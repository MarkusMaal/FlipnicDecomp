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

// Function: entry_001300c0
// Address: 0x1300c0 - 0x1300e8
void entry_001300c0_0x1300c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001300c0_0x1300c0");
#endif

    switch (ctx->pc) {
        case 0x1300d0u: goto label_1300d0;
        case 0x1300d8u: goto label_1300d8;
        default: break;
    }

    ctx->pc = 0x1300c0u;

    // 0x1300c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1300c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1300c4: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1300c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1300c8: 0xc04a098  jal         func_128260
    ctx->pc = 0x1300C8u;
    SET_GPR_U32(ctx, 31, 0x1300D0u);
    ctx->pc = 0x1300CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1300C8u;
    // 0x1300cc: 0xaf9085c8  sw          $s0, -0x7A38($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936008), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128260u, 0x1300C8u, 0x1300D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1300D0u;
label_1300d0:
    // 0x1300d0: 0xc04bc4c  jal         func_12F130
    ctx->pc = 0x1300D0u;
    SET_GPR_U32(ctx, 31, 0x1300D8u);
    ctx->pc = 0x12F130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F130u, 0x1300D0u, 0x1300D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1300D8u;
label_1300d8:
    // 0x1300d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1300d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1300dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1300dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1300e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1300E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1300E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1300E0u;
        // 0x1300e4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1300E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1300E8u;
}
