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

// Function: FUN_0018ba90
// Address: 0x18ba90 - 0x18bac8
void FUN_0018ba90_0x18ba90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018ba90_0x18ba90");
#endif

    switch (ctx->pc) {
        case 0x18baa8u: goto label_18baa8;
        case 0x18bab0u: goto label_18bab0;
        case 0x18bab8u: goto label_18bab8;
        default: break;
    }

    ctx->pc = 0x18ba90u;

    // 0x18ba90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18ba90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18ba94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18ba94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18ba98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18ba98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18ba9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18ba9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18baa0: 0xc063ce4  jal         func_18F390
    ctx->pc = 0x18BAA0u;
    SET_GPR_U32(ctx, 31, 0x18BAA8u);
    ctx->pc = 0x18BAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BAA0u;
    // 0x18baa4: 0x26040610  addiu       $a0, $s0, 0x610 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F390u, 0x18BAA0u, 0x18BAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BAA8u;
label_18baa8:
    // 0x18baa8: 0xc063f8c  jal         func_18FE30
    ctx->pc = 0x18BAA8u;
    SET_GPR_U32(ctx, 31, 0x18BAB0u);
    ctx->pc = 0x18BAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BAA8u;
    // 0x18baac: 0x26040210  addiu       $a0, $s0, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FE30u, 0x18BAA8u, 0x18BAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BAB0u;
label_18bab0:
    // 0x18bab0: 0xc062fac  jal         func_18BEB0
    ctx->pc = 0x18BAB0u;
    SET_GPR_U32(ctx, 31, 0x18BAB8u);
    ctx->pc = 0x18BAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BAB0u;
    // 0x18bab4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18BEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BEB0u, 0x18BAB0u, 0x18BAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BAB8u;
label_18bab8:
    // 0x18bab8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18bab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18babc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18babcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18bac0: 0x3e00008  jr          $ra
    ctx->pc = 0x18BAC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18BAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BAC0u;
        // 0x18bac4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18BAC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18BAC8u;
}
