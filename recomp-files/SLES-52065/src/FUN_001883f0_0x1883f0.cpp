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

// Function: FUN_001883f0
// Address: 0x1883f0 - 0x188450
void FUN_001883f0_0x1883f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001883f0_0x1883f0");
#endif

    switch (ctx->pc) {
        case 0x188444u: goto label_188444;
        default: break;
    }

    ctx->pc = 0x1883f0u;

    // 0x1883f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1883f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1883f4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1883f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1883f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1883f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1883fc: 0x28620008  slti        $v0, $v1, 0x8
    ctx->pc = 0x1883fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x188400: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x188400u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x188404: 0xffa60030  sd          $a2, 0x30($sp)
    ctx->pc = 0x188404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 6));
    // 0x188408: 0xffa70038  sd          $a3, 0x38($sp)
    ctx->pc = 0x188408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 7));
    // 0x18840c: 0xffa80040  sd          $t0, 0x40($sp)
    ctx->pc = 0x18840cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 8));
    // 0x188410: 0xffa90048  sd          $t1, 0x48($sp)
    ctx->pc = 0x188410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 9));
    // 0x188414: 0xffaa0050  sd          $t2, 0x50($sp)
    ctx->pc = 0x188414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 10));
    // 0x188418: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x188418u;
    {
        const bool branch_taken_0x188418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18841Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188418u;
        // 0x18841c: 0xffab0058  sd          $t3, 0x58($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188418) {
            ctx->pc = 0x188428u;
            goto label_188428;
        }
    }
    ctx->pc = 0x188420u;
    // 0x188420: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x188420u;
    {
        const bool branch_taken_0x188420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188420u;
        // 0x188424: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188420) {
            ctx->pc = 0x188434u;
            goto label_188434;
        }
    }
    ctx->pc = 0x188428u;
label_188428:
    // 0x188428: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x188428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x18842c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x18842cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x188430: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x188430u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_188434:
    // 0x188434: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x188434u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x188438: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x188438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x18843c: 0xc061fc0  jal         func_187F00
    ctx->pc = 0x18843Cu;
    SET_GPR_U32(ctx, 31, 0x188444u);
    ctx->pc = 0x188440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18843Cu;
    // 0x188440: 0x433023  subu        $a2, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187F00u, 0x18843Cu, 0x188444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188444u;
label_188444:
    // 0x188444: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x188444u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x188448: 0x3e00008  jr          $ra
    ctx->pc = 0x188448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18844Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188448u;
        // 0x18844c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x188448u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x188450u;
}
