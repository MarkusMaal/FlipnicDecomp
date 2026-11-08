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

// Function: entry_00174e78
// Address: 0x174e78 - 0x174ea4
void entry_00174e78_0x174e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174e78_0x174e78");
#endif

    ctx->pc = 0x174e78u;

    // 0x174e78: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x174e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x174e7c: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x174e7cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x174e80: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x174e80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x174e84: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x174E84u;
    {
        const bool branch_taken_0x174e84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x174E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174E84u;
        // 0x174e88: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174e84) {
            ctx->pc = 0x174E5Cu;
            return;
        }
    }
    ctx->pc = 0x174E8Cu;
    // 0x174e8c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x174e8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x174e90: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x174e90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x174e94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x174e94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174e98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x174e98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174e9c: 0x3e00008  jr          $ra
    ctx->pc = 0x174E9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174E9Cu;
        // 0x174ea0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174E9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174EA4u;
}
