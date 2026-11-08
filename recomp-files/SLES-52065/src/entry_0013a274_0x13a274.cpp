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

// Function: entry_0013a274
// Address: 0x13a274 - 0x13a2a8
void entry_0013a274_0x13a274(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013a274_0x13a274");
#endif

    ctx->pc = 0x13a274u;

    // 0x13a274: 0x0  nop
    ctx->pc = 0x13a274u;
    // NOP
    // 0x13a278: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x13a278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x13a27c: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x13a27cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x13a280: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x13a280u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x13a284: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x13A284u;
    {
        const bool branch_taken_0x13a284 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13a284) {
            ctx->pc = 0x13A25Cu;
            return;
        }
    }
    ctx->pc = 0x13A28Cu;
    // 0x13a28c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x13a28cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13a290: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x13a290u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13a294: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13a294u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13a298: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13a298u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13a29c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13a29cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13a2a0: 0x3e00008  jr          $ra
    ctx->pc = 0x13A2A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13A2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A2A0u;
        // 0x13a2a4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13A2A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13A2A8u;
}
