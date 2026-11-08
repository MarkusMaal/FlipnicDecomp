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

// Function: entry_00177f6c
// Address: 0x177f6c - 0x177fa0
void entry_00177f6c_0x177f6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177f6c_0x177f6c");
#endif

    ctx->pc = 0x177f6cu;

    // 0x177f6c: 0x0  nop
    ctx->pc = 0x177f6cu;
    // NOP
    // 0x177f70: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x177f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x177f74: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x177f74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x177f78: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x177F78u;
    {
        const bool branch_taken_0x177f78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x177F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177F78u;
        // 0x177f7c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177f78) {
            ctx->pc = 0x177ED8u;
            return;
        }
    }
    ctx->pc = 0x177F80u;
    // 0x177f80: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x177f80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x177f84: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x177f84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x177f88: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x177f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x177f8c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x177f8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x177f90: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x177f90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x177f94: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x177f94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177f98: 0x3e00008  jr          $ra
    ctx->pc = 0x177F98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177F98u;
        // 0x177f9c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177F98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177FA0u;
}
