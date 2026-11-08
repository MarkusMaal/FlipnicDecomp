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

// Function: entry_0017936c
// Address: 0x17936c - 0x1793a4
void entry_0017936c_0x17936c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017936c_0x17936c");
#endif

    ctx->pc = 0x17936cu;

    // 0x17936c: 0x0  nop
    ctx->pc = 0x17936cu;
    // NOP
    // 0x179370: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x179370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x179374: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x179374u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x179378: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x179378u;
    {
        const bool branch_taken_0x179378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x179378) {
            ctx->pc = 0x1792D4u;
            return;
        }
    }
    ctx->pc = 0x179380u;
    // 0x179380: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x179380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x179384: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x179384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x179388: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x179388u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17938c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17938cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179390: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x179390u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x179394: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x179394u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x179398: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x179398u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17939c: 0x3e00008  jr          $ra
    ctx->pc = 0x17939Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1793A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17939Cu;
        // 0x1793a0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17939Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1793A4u;
}
