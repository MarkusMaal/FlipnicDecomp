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

// Function: FUN_001b7a90
// Address: 0x1b7a90 - 0x1b7b08
void FUN_001b7a90_0x1b7a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b7a90_0x1b7a90");
#endif

    switch (ctx->pc) {
        case 0x1b7ac8u: goto label_1b7ac8;
        case 0x1b7ad4u: goto label_1b7ad4;
        default: break;
    }

    ctx->pc = 0x1b7a90u;

    // 0x1b7a90: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1b7a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1b7a94: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1b7a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1b7a98: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1b7a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1b7a9c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b7a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1b7aa0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1b7aa0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7aa4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b7aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b7aa8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1b7aa8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7aac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b7aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b7ab0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1b7ab0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7ab4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b7ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b7ab8: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x1b7ab8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1b7abc: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B7ABCu;
    {
        const bool branch_taken_0x1b7abc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7ABCu;
        // 0x1b7ac0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7abc) {
            ctx->pc = 0x1B7AE4u;
            goto label_1b7ae4;
        }
    }
    ctx->pc = 0x1B7AC4u;
    // 0x1b7ac4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1b7ac4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b7ac8:
    // 0x1b7ac8: 0x2712821  addu        $a1, $s3, $s1
    ctx->pc = 0x1b7ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x1b7acc: 0xc06dec4  jal         func_1B7B10
    ctx->pc = 0x1B7ACCu;
    SET_GPR_U32(ctx, 31, 0x1B7AD4u);
    ctx->pc = 0x1B7AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7ACCu;
    // 0x1b7ad0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7B10u, 0x1B7ACCu, 0x1B7AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7AD4u;
label_1b7ad4:
    // 0x1b7ad4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1b7ad4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1b7ad8: 0x212182a  slt         $v1, $s0, $s2
    ctx->pc = 0x1b7ad8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1b7adc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1B7ADCu;
    {
        const bool branch_taken_0x1b7adc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7ADCu;
        // 0x1b7ae0: 0x2631000c  addiu       $s1, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7adc) {
            ctx->pc = 0x1B7AC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b7ac8;
        }
    }
    ctx->pc = 0x1B7AE4u;
label_1b7ae4:
    // 0x1b7ae4: 0x0  nop
    ctx->pc = 0x1b7ae4u;
    // NOP
    // 0x1b7ae8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1b7ae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b7aec: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1b7aecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b7af0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b7af0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b7af4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b7af4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b7af8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b7af8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b7afc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b7afcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7b00: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7B00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7B00u;
        // 0x1b7b04: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7B00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7B08u;
}
