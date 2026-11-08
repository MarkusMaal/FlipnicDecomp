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

// Function: FUN_001d1df0
// Address: 0x1d1df0 - 0x1d1e34
void FUN_001d1df0_0x1d1df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d1df0_0x1d1df0");
#endif

    switch (ctx->pc) {
        case 0x1d1e10u: goto label_1d1e10;
        case 0x1d1e20u: goto label_1d1e20;
        default: break;
    }

    ctx->pc = 0x1d1df0u;

    // 0x1d1df0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d1df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d1df4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d1df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d1df8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d1df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d1dfc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d1dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d1e00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d1e00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1e04: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1d1e04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1e08: 0xc074af0  jal         func_1D2BC0
    ctx->pc = 0x1D1E08u;
    SET_GPR_U32(ctx, 31, 0x1D1E10u);
    ctx->pc = 0x1D1E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1E08u;
    // 0x1d1e0c: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2BC0u, 0x1D1E08u, 0x1D1E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1E10u;
label_1d1e10:
    // 0x1d1e10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d1e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1e14: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1d1e14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1e18: 0xc074790  jal         func_1D1E40
    ctx->pc = 0x1D1E18u;
    SET_GPR_U32(ctx, 31, 0x1D1E20u);
    ctx->pc = 0x1D1E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1E18u;
    // 0x1d1e1c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1E40u, 0x1D1E18u, 0x1D1E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1E20u;
label_1d1e20:
    // 0x1d1e20: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d1e20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d1e24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d1e24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d1e28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d1e28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d1e2c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1E2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1E2Cu;
        // 0x1d1e30: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1E2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D1E34u;
}
