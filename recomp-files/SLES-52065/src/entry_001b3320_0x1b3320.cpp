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

// Function: entry_001b3320
// Address: 0x1b3320 - 0x1b335c
void entry_001b3320_0x1b3320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3320_0x1b3320");
#endif

    ctx->pc = 0x1b3320u;

    // 0x1b3320: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1b3320u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1b3324: 0x2aa20003  slti        $v0, $s5, 0x3
    ctx->pc = 0x1b3324u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1b3328: 0x1440ffbc  bnez        $v0, . + 4 + (-0x44 << 2)
    ctx->pc = 0x1B3328u;
    {
        const bool branch_taken_0x1b3328 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B332Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3328u;
        // 0x1b332c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3328) {
            ctx->pc = 0x1B321Cu;
            return;
        }
    }
    ctx->pc = 0x1B3330u;
    // 0x1b3330: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1b3330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b3334: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b3334u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3338: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1b3338u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b333c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1b333cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b3340: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1b3340u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b3344: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b3344u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b3348: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b3348u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b334c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b334cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b3350: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b3350u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3354: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3354u;
        // 0x1b3358: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3354u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B335Cu;
}
