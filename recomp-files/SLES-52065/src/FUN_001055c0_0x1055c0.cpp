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

// Function: FUN_001055c0
// Address: 0x1055c0 - 0x10560c
void FUN_001055c0_0x1055c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001055c0_0x1055c0");
#endif

    switch (ctx->pc) {
        case 0x1055d4u: goto label_1055d4;
        default: break;
    }

    ctx->pc = 0x1055c0u;

    // 0x1055c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1055c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1055c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1055c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1055c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1055c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1055cc: 0xc056360  jal         func_158D80
    ctx->pc = 0x1055CCu;
    SET_GPR_U32(ctx, 31, 0x1055D4u);
    ctx->pc = 0x1055D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1055CCu;
    // 0x1055d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x1055CCu, 0x1055D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1055D4u;
label_1055d4:
    // 0x1055d4: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1055d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1055d8: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1055d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1055dc: 0x24639f50  addiu       $v1, $v1, -0x60B0
    ctx->pc = 0x1055dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942544));
    // 0x1055e0: 0x2442a250  addiu       $v0, $v0, -0x5DB0
    ctx->pc = 0x1055e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943312));
    // 0x1055e4: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1055e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1055e8: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1055e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1055ec: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1055ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1055f0: 0x2463a490  addiu       $v1, $v1, -0x5B70
    ctx->pc = 0x1055f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943888));
    // 0x1055f4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1055f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1055f8: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1055f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1055fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1055fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x105600: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x105600u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x105604: 0x3e00008  jr          $ra
    ctx->pc = 0x105604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105604u;
        // 0x105608: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10560Cu;
}
