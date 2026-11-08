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

// Function: entry_00178f28
// Address: 0x178f28 - 0x178f50
void entry_00178f28_0x178f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178f28_0x178f28");
#endif

    ctx->pc = 0x178f28u;

    // 0x178f28: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x178f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x178f2c: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x178f2cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x178f30: 0x1460ffd6  bnez        $v1, . + 4 + (-0x2A << 2)
    ctx->pc = 0x178F30u;
    {
        const bool branch_taken_0x178f30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x178f30) {
            ctx->pc = 0x178E8Cu;
            return;
        }
    }
    ctx->pc = 0x178F38u;
    // 0x178f38: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x178f38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x178f3c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x178f3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x178f40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x178f40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178f44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x178f44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178f48: 0x3e00008  jr          $ra
    ctx->pc = 0x178F48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178F48u;
        // 0x178f4c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178F48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178F50u;
}
