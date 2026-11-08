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

// Function: FUN_0015d820
// Address: 0x15d820 - 0x15d880
void FUN_0015d820_0x15d820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0015d820_0x15d820");
#endif

    switch (ctx->pc) {
        case 0x15d848u: goto label_15d848;
        case 0x15d854u: goto label_15d854;
        default: break;
    }

    ctx->pc = 0x15d820u;

    // 0x15d820: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x15d820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x15d824: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x15d824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x15d828: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15d828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15d82c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15d82cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15d830: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x15d830u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d834: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15d834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15d838: 0x8c902c20  lw          $s0, 0x2C20($a0)
    ctx->pc = 0x15d838u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11296)));
    // 0x15d83c: 0x10082a  slt         $at, $zero, $s0
    ctx->pc = 0x15d83cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x15d840: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x15D840u;
    {
        const bool branch_taken_0x15d840 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D840u;
        // 0x15d844: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d840) {
            ctx->pc = 0x15D864u;
            goto label_15d864;
        }
    }
    ctx->pc = 0x15D848u;
label_15d848:
    // 0x15d848: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15d848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d84c: 0xc057620  jal         func_15D880
    ctx->pc = 0x15D84Cu;
    SET_GPR_U32(ctx, 31, 0x15D854u);
    ctx->pc = 0x15D850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D84Cu;
    // 0x15d850: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15D880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D880u, 0x15D84Cu, 0x15D854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D854u;
label_15d854:
    // 0x15d854: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x15d854u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x15d858: 0x230182a  slt         $v1, $s1, $s0
    ctx->pc = 0x15d858u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x15d85c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x15D85Cu;
    {
        const bool branch_taken_0x15d85c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15d85c) {
            ctx->pc = 0x15D848u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15d848;
        }
    }
    ctx->pc = 0x15D864u;
label_15d864:
    // 0x15d864: 0x0  nop
    ctx->pc = 0x15d864u;
    // NOP
    // 0x15d868: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x15d868u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15d86c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15d86cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15d870: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15d870u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15d874: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15d874u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15d878: 0x3e00008  jr          $ra
    ctx->pc = 0x15D878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D878u;
        // 0x15d87c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15D880u;
}
