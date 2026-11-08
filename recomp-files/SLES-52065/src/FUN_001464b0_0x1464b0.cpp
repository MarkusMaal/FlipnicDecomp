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

// Function: FUN_001464b0
// Address: 0x1464b0 - 0x1464dc
void FUN_001464b0_0x1464b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001464b0_0x1464b0");
#endif

    switch (ctx->pc) {
        case 0x1464c8u: goto label_1464c8;
        default: break;
    }

    ctx->pc = 0x1464b0u;

    // 0x1464b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1464b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1464b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1464b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1464b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1464b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1464bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1464bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1464c0: 0xc051ea8  jal         func_147AA0
    ctx->pc = 0x1464C0u;
    SET_GPR_U32(ctx, 31, 0x1464C8u);
    ctx->pc = 0x1464C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1464C0u;
    // 0x1464c4: 0xafb0002c  sw          $s0, 0x2C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147AA0u, 0x1464C0u, 0x1464C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1464C8u;
label_1464c8:
    // 0x1464c8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1464c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1464cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1464ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1464d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1464d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1464d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1464D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1464D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1464D4u;
        // 0x1464d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1464D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1464DCu;
}
