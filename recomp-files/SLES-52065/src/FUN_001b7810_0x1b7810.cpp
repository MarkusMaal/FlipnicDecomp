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

// Function: FUN_001b7810
// Address: 0x1b7810 - 0x1b7888
void FUN_001b7810_0x1b7810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b7810_0x1b7810");
#endif

    switch (ctx->pc) {
        case 0x1b7848u: goto label_1b7848;
        case 0x1b7854u: goto label_1b7854;
        default: break;
    }

    ctx->pc = 0x1b7810u;

    // 0x1b7810: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1b7810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1b7814: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1b7814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1b7818: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1b7818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1b781c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b781cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1b7820: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1b7820u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7824: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b7824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b7828: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1b7828u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b782c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b782cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b7830: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1b7830u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7834: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b7834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b7838: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x1b7838u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1b783c: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B783Cu;
    {
        const bool branch_taken_0x1b783c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B783Cu;
        // 0x1b7840: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b783c) {
            ctx->pc = 0x1B7864u;
            goto label_1b7864;
        }
    }
    ctx->pc = 0x1B7844u;
    // 0x1b7844: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1b7844u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b7848:
    // 0x1b7848: 0x2712821  addu        $a1, $s3, $s1
    ctx->pc = 0x1b7848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x1b784c: 0xc06df0c  jal         func_1B7C30
    ctx->pc = 0x1B784Cu;
    SET_GPR_U32(ctx, 31, 0x1B7854u);
    ctx->pc = 0x1B7850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B784Cu;
    // 0x1b7850: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7C30u, 0x1B784Cu, 0x1B7854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7854u;
label_1b7854:
    // 0x1b7854: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1b7854u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1b7858: 0x212182a  slt         $v1, $s0, $s2
    ctx->pc = 0x1b7858u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1b785c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1B785Cu;
    {
        const bool branch_taken_0x1b785c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B785Cu;
        // 0x1b7860: 0x26310014  addiu       $s1, $s1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b785c) {
            ctx->pc = 0x1B7848u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b7848;
        }
    }
    ctx->pc = 0x1B7864u;
label_1b7864:
    // 0x1b7864: 0x0  nop
    ctx->pc = 0x1b7864u;
    // NOP
    // 0x1b7868: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1b7868u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b786c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1b786cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b7870: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b7870u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b7874: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b7874u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b7878: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b7878u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b787c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b787cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7880: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7880u;
        // 0x1b7884: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7880u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7888u;
}
