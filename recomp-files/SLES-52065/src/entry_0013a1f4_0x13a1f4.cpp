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

// Function: entry_0013a1f4
// Address: 0x13a1f4 - 0x13a22c
void entry_0013a1f4_0x13a1f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013a1f4_0x13a1f4");
#endif

    ctx->pc = 0x13a1f4u;

    // 0x13a1f4: 0x0  nop
    ctx->pc = 0x13a1f4u;
    // NOP
    // 0x13a1f8: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x13a1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x13a1fc: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x13a1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x13a200: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x13a200u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x13a204: 0x1460ffd7  bnez        $v1, . + 4 + (-0x29 << 2)
    ctx->pc = 0x13A204u;
    {
        const bool branch_taken_0x13a204 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13a204) {
            ctx->pc = 0x13A164u;
            return;
        }
    }
    ctx->pc = 0x13A20Cu;
    // 0x13a20c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x13a20cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13a210: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x13a210u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13a214: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x13a214u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13a218: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13a218u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13a21c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13a21cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13a220: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13a220u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13a224: 0x3e00008  jr          $ra
    ctx->pc = 0x13A224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13A228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A224u;
        // 0x13a228: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13A224u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13A22Cu;
}
