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

// Function: FUN_00103420
// Address: 0x103420 - 0x103460
void FUN_00103420_0x103420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00103420_0x103420");
#endif

    switch (ctx->pc) {
        case 0x103438u: goto label_103438;
        case 0x103444u: goto label_103444;
        case 0x103450u: goto label_103450;
        default: break;
    }

    ctx->pc = 0x103420u;

    // 0x103420: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x103420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x103424: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x103424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x103428: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x103428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x10342c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10342cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103430: 0xc0575c0  jal         func_15D700
    ctx->pc = 0x103430u;
    SET_GPR_U32(ctx, 31, 0x103438u);
    ctx->pc = 0x103434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103430u;
    // 0x103434: 0x8f848218  lw          $a0, -0x7DE8($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15D700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D700u, 0x103430u, 0x103438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103438u;
label_103438:
    // 0x103438: 0x8f858388  lw          $a1, -0x7C78($gp)
    ctx->pc = 0x103438u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
    // 0x10343c: 0xc046164  jal         func_118590
    ctx->pc = 0x10343Cu;
    SET_GPR_U32(ctx, 31, 0x103444u);
    ctx->pc = 0x103440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10343Cu;
    // 0x103440: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118590u, 0x10343Cu, 0x103444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103444u;
label_103444:
    // 0x103444: 0x8f858388  lw          $a1, -0x7C78($gp)
    ctx->pc = 0x103444u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
    // 0x103448: 0xc0460d4  jal         func_118350
    ctx->pc = 0x103448u;
    SET_GPR_U32(ctx, 31, 0x103450u);
    ctx->pc = 0x10344Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103448u;
    // 0x10344c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118350u, 0x103448u, 0x103450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103450u;
label_103450:
    // 0x103450: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x103450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x103454: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x103454u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103458: 0x3e00008  jr          $ra
    ctx->pc = 0x103458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10345Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103458u;
        // 0x10345c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x103460u;
}
