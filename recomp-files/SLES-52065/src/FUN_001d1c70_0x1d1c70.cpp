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

// Function: FUN_001d1c70
// Address: 0x1d1c70 - 0x1d1cb4
void FUN_001d1c70_0x1d1c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d1c70_0x1d1c70");
#endif

    switch (ctx->pc) {
        case 0x1d1c90u: goto label_1d1c90;
        case 0x1d1ca0u: goto label_1d1ca0;
        default: break;
    }

    ctx->pc = 0x1d1c70u;

    // 0x1d1c70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d1c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d1c74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d1c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d1c78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d1c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d1c7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d1c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d1c80: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d1c80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1c84: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1d1c84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1c88: 0xc074af0  jal         func_1D2BC0
    ctx->pc = 0x1D1C88u;
    SET_GPR_U32(ctx, 31, 0x1D1C90u);
    ctx->pc = 0x1D1C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1C88u;
    // 0x1d1c8c: 0x2405001b  addiu       $a1, $zero, 0x1B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2BC0u, 0x1D1C88u, 0x1D1C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1C90u;
label_1d1c90:
    // 0x1d1c90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d1c90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1c94: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1d1c94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1c98: 0xc074730  jal         func_1D1CC0
    ctx->pc = 0x1D1C98u;
    SET_GPR_U32(ctx, 31, 0x1D1CA0u);
    ctx->pc = 0x1D1C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1C98u;
    // 0x1d1c9c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1CC0u, 0x1D1C98u, 0x1D1CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1CA0u;
label_1d1ca0:
    // 0x1d1ca0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d1ca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d1ca4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d1ca4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d1ca8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d1ca8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d1cac: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1CACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1CACu;
        // 0x1d1cb0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1CACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D1CB4u;
}
