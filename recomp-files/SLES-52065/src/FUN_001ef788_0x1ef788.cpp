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

// Function: FUN_001ef788
// Address: 0x1ef788 - 0x1ef7bc
void FUN_001ef788_0x1ef788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ef788_0x1ef788");
#endif

    switch (ctx->pc) {
        case 0x1ef7acu: goto label_1ef7ac;
        default: break;
    }

    ctx->pc = 0x1ef788u;

    // 0x1ef788: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ef788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ef78c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1ef78cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1ef790: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1ef790u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x1ef794: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ef794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ef798: 0xac40a45c  sw          $zero, -0x5BA4($v0)
    ctx->pc = 0x1ef798u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x21A45Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x21A45Cu, _value); } while (0);
    // 0x1ef79c: 0x2484f928  addiu       $a0, $a0, -0x6D8
    ctx->pc = 0x1ef79cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965544));
    // 0x1ef7a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ef7a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef7a4: 0xc07fe6c  jal         func_1FF9B0
    ctx->pc = 0x1EF7A4u;
    SET_GPR_U32(ctx, 31, 0x1EF7ACu);
    ctx->pc = 0x1EF7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF7A4u;
    // 0x1ef7a8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF9B0u, 0x1EF7A4u, 0x1EF7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF7ACu;
label_1ef7ac:
    // 0x1ef7ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ef7acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ef7b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ef7b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef7b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1EF7B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EF7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF7B4u;
        // 0x1ef7b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF7B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EF7BCu;
}
