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

// Function: entry_0018a5fc
// Address: 0x18a5fc - 0x18a638
void entry_0018a5fc_0x18a5fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018a5fc_0x18a5fc");
#endif

    ctx->pc = 0x18a5fcu;

    // 0x18a5fc: 0x0  nop
    ctx->pc = 0x18a5fcu;
    // NOP
    // 0x18a600: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18a600u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18a604: 0x2a030008  slti        $v1, $s0, 0x8
    ctx->pc = 0x18a604u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x18a608: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x18a608u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x18a60c: 0x1460ffde  bnez        $v1, . + 4 + (-0x22 << 2)
    ctx->pc = 0x18A60Cu;
    {
        const bool branch_taken_0x18a60c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18A610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A60Cu;
        // 0x18a610: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a60c) {
            ctx->pc = 0x18A588u;
            return;
        }
    }
    ctx->pc = 0x18A614u;
    // 0x18a614: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x18a614u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18a618: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x18a618u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18a61c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x18a61cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18a620: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18a620u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18a624: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18a624u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18a628: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18a628u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18a62c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18a62cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18a630: 0x3e00008  jr          $ra
    ctx->pc = 0x18A630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A630u;
        // 0x18a634: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18A638u;
}
