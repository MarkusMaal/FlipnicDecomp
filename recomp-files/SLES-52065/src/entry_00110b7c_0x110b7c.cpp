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

// Function: entry_00110b7c
// Address: 0x110b7c - 0x110bb0
void entry_00110b7c_0x110b7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110b7c_0x110b7c");
#endif

    ctx->pc = 0x110b7cu;

    // 0x110b7c: 0x0  nop
    ctx->pc = 0x110b7cu;
    // NOP
    // 0x110b80: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x110b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x110b84: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x110b84u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x110b88: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x110B88u;
    {
        const bool branch_taken_0x110b88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x110b88) {
            ctx->pc = 0x110B4Cu;
            return;
        }
    }
    ctx->pc = 0x110B90u;
    // 0x110b90: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x110b90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x110b94: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x110b94u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x110b98: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x110b98u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x110b9c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x110b9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x110ba0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x110ba0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x110ba4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x110ba4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110ba8: 0x3e00008  jr          $ra
    ctx->pc = 0x110BA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110BA8u;
        // 0x110bac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110BA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110BB0u;
}
