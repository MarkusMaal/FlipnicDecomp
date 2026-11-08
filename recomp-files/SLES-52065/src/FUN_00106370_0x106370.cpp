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

// Function: FUN_00106370
// Address: 0x106370 - 0x1063b0
void FUN_00106370_0x106370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00106370_0x106370");
#endif

    switch (ctx->pc) {
        case 0x106384u: goto label_106384;
        default: break;
    }

    ctx->pc = 0x106370u;

    // 0x106370: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x106370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x106374: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x106374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x106378: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x106378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x10637c: 0xc056360  jal         func_158D80
    ctx->pc = 0x10637Cu;
    SET_GPR_U32(ctx, 31, 0x106384u);
    ctx->pc = 0x106380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10637Cu;
    // 0x106380: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x10637Cu, 0x106384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106384u;
label_106384:
    // 0x106384: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x106384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x106388: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x106388u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x10638c: 0x24427cf0  addiu       $v0, $v0, 0x7CF0
    ctx->pc = 0x10638cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31984));
    // 0x106390: 0x246397d0  addiu       $v1, $v1, -0x6830
    ctx->pc = 0x106390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940624));
    // 0x106394: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x106394u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x106398: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x106398u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x10639c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x10639cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1063a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1063a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1063a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1063a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1063a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1063A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1063ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1063A8u;
        // 0x1063ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1063A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1063B0u;
}
