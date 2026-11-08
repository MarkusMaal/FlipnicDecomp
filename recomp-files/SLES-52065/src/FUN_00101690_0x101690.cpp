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

// Function: FUN_00101690
// Address: 0x101690 - 0x1016c0
void FUN_00101690_0x101690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00101690_0x101690");
#endif

    switch (ctx->pc) {
        case 0x1016a4u: goto label_1016a4;
        case 0x1016acu: goto label_1016ac;
        default: break;
    }

    ctx->pc = 0x101690u;

    // 0x101690: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x101690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x101694: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x101694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x101698: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x101698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x10169c: 0xc045fb4  jal         func_117ED0
    ctx->pc = 0x10169Cu;
    SET_GPR_U32(ctx, 31, 0x1016A4u);
    ctx->pc = 0x1016A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10169Cu;
    // 0x1016a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117ED0u, 0x10169Cu, 0x1016A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1016A4u;
label_1016a4:
    // 0x1016a4: 0xc040368  jal         func_100DA0
    ctx->pc = 0x1016A4u;
    SET_GPR_U32(ctx, 31, 0x1016ACu);
    ctx->pc = 0x1016A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1016A4u;
    // 0x1016a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100DA0u, 0x1016A4u, 0x1016ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1016ACu;
label_1016ac:
    // 0x1016ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1016acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1016b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1016b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1016b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1016b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1016b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1016B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1016BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1016B8u;
        // 0x1016bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1016B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1016C0u;
}
