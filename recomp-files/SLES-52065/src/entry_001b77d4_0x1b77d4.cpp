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

// Function: entry_001b77d4
// Address: 0x1b77d4 - 0x1b780c
void entry_001b77d4_0x1b77d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b77d4_0x1b77d4");
#endif

    ctx->pc = 0x1b77d4u;

    // 0x1b77d4: 0x0  nop
    ctx->pc = 0x1b77d4u;
    // NOP
    // 0x1b77d8: 0x8e430034  lw          $v1, 0x34($s2)
    ctx->pc = 0x1b77d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x1b77dc: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x1b77dcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1b77e0: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1B77E0u;
    {
        const bool branch_taken_0x1b77e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B77E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B77E0u;
        // 0x1b77e4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b77e0) {
            ctx->pc = 0x1B7788u;
            return;
        }
    }
    ctx->pc = 0x1B77E8u;
    // 0x1b77e8: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x1b77e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x1b77ec: 0xae40003c  sw          $zero, 0x3C($s2)
    ctx->pc = 0x1b77ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 0));
    // 0x1b77f0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1b77f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b77f4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b77f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b77f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b77f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b77fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b77fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b7800: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b7800u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7804: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7804u;
        // 0x1b7808: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7804u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B780Cu;
}
