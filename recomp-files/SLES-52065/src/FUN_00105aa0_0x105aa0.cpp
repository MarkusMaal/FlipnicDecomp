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

// Function: FUN_00105aa0
// Address: 0x105aa0 - 0x105ad4
void FUN_00105aa0_0x105aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00105aa0_0x105aa0");
#endif

    switch (ctx->pc) {
        case 0x105ab4u: goto label_105ab4;
        default: break;
    }

    ctx->pc = 0x105aa0u;

    // 0x105aa0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x105aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x105aa4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x105aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x105aa8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x105aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x105aac: 0xc056360  jal         func_158D80
    ctx->pc = 0x105AACu;
    SET_GPR_U32(ctx, 31, 0x105AB4u);
    ctx->pc = 0x105AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105AACu;
    // 0x105ab0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x105AACu, 0x105AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105AB4u;
label_105ab4:
    // 0x105ab4: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x105ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x105ab8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x105ab8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105abc: 0x24639f50  addiu       $v1, $v1, -0x60B0
    ctx->pc = 0x105abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942544));
    // 0x105ac0: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x105ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x105ac4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x105ac4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x105ac8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x105ac8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x105acc: 0x3e00008  jr          $ra
    ctx->pc = 0x105ACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105ACCu;
        // 0x105ad0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105ACCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x105AD4u;
}
