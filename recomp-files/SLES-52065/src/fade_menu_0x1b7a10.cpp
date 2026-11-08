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

// Function: fade_menu
// Address: 0x1b7a10 - 0x1b7a88
void fade_menu_0x1b7a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("fade_menu_0x1b7a10");
#endif

    switch (ctx->pc) {
        case 0x1b7a48u: goto label_1b7a48;
        case 0x1b7a54u: goto label_1b7a54;
        default: break;
    }

    ctx->pc = 0x1b7a10u;

    // 0x1b7a10: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1b7a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1b7a14: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1b7a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1b7a18: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1b7a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1b7a1c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b7a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1b7a20: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1b7a20u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7a24: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b7a24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b7a28: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1b7a28u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7a2c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b7a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b7a30: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1b7a30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7a34: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b7a34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b7a38: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x1b7a38u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1b7a3c: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B7A3Cu;
    {
        const bool branch_taken_0x1b7a3c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7A3Cu;
        // 0x1b7a40: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7a3c) {
            ctx->pc = 0x1B7A64u;
            goto label_1b7a64;
        }
    }
    ctx->pc = 0x1B7A44u;
    // 0x1b7a44: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1b7a44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b7a48:
    // 0x1b7a48: 0x2712821  addu        $a1, $s3, $s1
    ctx->pc = 0x1b7a48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x1b7a4c: 0xc06df4c  jal         func_1B7D30
    ctx->pc = 0x1B7A4Cu;
    SET_GPR_U32(ctx, 31, 0x1B7A54u);
    ctx->pc = 0x1B7A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7A4Cu;
    // 0x1b7a50: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7D30u, 0x1B7A4Cu, 0x1B7A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7A54u;
label_1b7a54:
    // 0x1b7a54: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1b7a54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1b7a58: 0x212182a  slt         $v1, $s0, $s2
    ctx->pc = 0x1b7a58u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1b7a5c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1B7A5Cu;
    {
        const bool branch_taken_0x1b7a5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7A5Cu;
        // 0x1b7a60: 0x26310018  addiu       $s1, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7a5c) {
            ctx->pc = 0x1B7A48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b7a48;
        }
    }
    ctx->pc = 0x1B7A64u;
label_1b7a64:
    // 0x1b7a64: 0x0  nop
    ctx->pc = 0x1b7a64u;
    // NOP
    // 0x1b7a68: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1b7a68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b7a6c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1b7a6cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b7a70: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b7a70u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b7a74: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b7a74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b7a78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b7a78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b7a7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b7a7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7a80: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7A80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7A80u;
        // 0x1b7a84: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7A80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7A88u;
}
