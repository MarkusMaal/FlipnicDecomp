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

// Function: entry_00111b0c
// Address: 0x111b0c - 0x111b40
void entry_00111b0c_0x111b0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111b0c_0x111b0c");
#endif

    ctx->pc = 0x111b0cu;

    // 0x111b0c: 0x0  nop
    ctx->pc = 0x111b0cu;
    // NOP
    // 0x111b10: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x111b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x111b14: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x111b14u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x111b18: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x111B18u;
    {
        const bool branch_taken_0x111b18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x111b18) {
            ctx->pc = 0x111ADCu;
            return;
        }
    }
    ctx->pc = 0x111B20u;
    // 0x111b20: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x111b20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x111b24: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x111b24u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x111b28: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x111b28u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x111b2c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x111b2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x111b30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x111b30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x111b34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x111b34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x111b38: 0x3e00008  jr          $ra
    ctx->pc = 0x111B38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111B38u;
        // 0x111b3c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111B38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x111B40u;
}
