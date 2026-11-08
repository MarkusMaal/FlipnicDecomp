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

// Function: entry_00186360
// Address: 0x186360 - 0x186390
void entry_00186360_0x186360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00186360_0x186360");
#endif

    ctx->pc = 0x186360u;

    // 0x186360: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x186360u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x186364: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x186364u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x186368: 0x26310018  addiu       $s1, $s1, 0x18
    ctx->pc = 0x186368u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x18636c: 0x1460ff95  bnez        $v1, . + 4 + (-0x6B << 2)
    ctx->pc = 0x18636Cu;
    {
        const bool branch_taken_0x18636c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x186370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18636Cu;
        // 0x186370: 0x26520078  addiu       $s2, $s2, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18636c) {
            ctx->pc = 0x1861C4u;
            return;
        }
    }
    ctx->pc = 0x186374u;
    // 0x186374: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x186374u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x186378: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x186378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x18637c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x18637cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x186380: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x186380u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x186384: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x186384u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x186388: 0x3e00008  jr          $ra
    ctx->pc = 0x186388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18638Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186388u;
        // 0x18638c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186388u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x186390u;
}
