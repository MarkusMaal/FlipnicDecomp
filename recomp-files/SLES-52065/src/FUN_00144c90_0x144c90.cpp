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

// Function: FUN_00144c90
// Address: 0x144c90 - 0x144cd0
void FUN_00144c90_0x144c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00144c90_0x144c90");
#endif

    switch (ctx->pc) {
        case 0x144cb4u: goto label_144cb4;
        case 0x144cc0u: goto label_144cc0;
        default: break;
    }

    ctx->pc = 0x144c90u;

    // 0x144c90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x144c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x144c94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x144c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x144c98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x144c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x144c9c: 0xafa5002c  sw          $a1, 0x2C($sp)
    ctx->pc = 0x144c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 5));
    // 0x144ca0: 0x8c8401a4  lw          $a0, 0x1A4($a0)
    ctx->pc = 0x144ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 420)));
    // 0x144ca4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x144CA4u;
    {
        const bool branch_taken_0x144ca4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x144CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144CA4u;
        // 0x144ca8: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144ca4) {
            ctx->pc = 0x144CB4u;
            goto label_144cb4;
        }
    }
    ctx->pc = 0x144CACu;
    // 0x144cac: 0xc051548  jal         func_145520
    ctx->pc = 0x144CACu;
    SET_GPR_U32(ctx, 31, 0x144CB4u);
    ctx->pc = 0x144CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144CACu;
    // 0x144cb0: 0x27a5002c  addiu       $a1, $sp, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145520u, 0x144CACu, 0x144CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144CB4u;
label_144cb4:
    // 0x144cb4: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x144cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x144cb8: 0xc04d030  jal         func_1340C0
    ctx->pc = 0x144CB8u;
    SET_GPR_U32(ctx, 31, 0x144CC0u);
    ctx->pc = 0x144CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144CB8u;
    // 0x144cbc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1340C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1340C0u, 0x144CB8u, 0x144CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144CC0u;
label_144cc0:
    // 0x144cc0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x144cc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x144cc4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x144cc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x144cc8: 0x3e00008  jr          $ra
    ctx->pc = 0x144CC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144CC8u;
        // 0x144ccc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144CC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x144CD0u;
}
