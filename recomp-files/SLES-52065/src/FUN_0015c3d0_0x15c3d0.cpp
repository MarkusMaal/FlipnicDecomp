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

// Function: FUN_0015c3d0
// Address: 0x15c3d0 - 0x15c454
void FUN_0015c3d0_0x15c3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0015c3d0_0x15c3d0");
#endif

    switch (ctx->pc) {
        case 0x15c404u: goto label_15c404;
        case 0x15c418u: goto label_15c418;
        default: break;
    }

    ctx->pc = 0x15c3d0u;

    // 0x15c3d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x15c3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x15c3d4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x15c3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x15c3d8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15c3d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x15c3dc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15c3dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x15c3e0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x15c3e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c3e4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15c3e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15c3e8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x15c3e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c3ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15c3ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15c3f0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x15c3f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c3f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15c3f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15c3f8: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x15c3f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c3fc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x15c3fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c400: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x15c400u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_15c404:
    // 0x15c404: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x15c404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c408: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x15c408u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c40c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x15c40cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c410: 0xc0570b4  jal         func_15C2D0
    ctx->pc = 0x15C410u;
    SET_GPR_U32(ctx, 31, 0x15C418u);
    ctx->pc = 0x15C414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C410u;
    // 0x15c414: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C2D0u, 0x15C410u, 0x15C418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C418u;
label_15c418:
    // 0x15c418: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x15c418u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c41c: 0x4e00004  bltz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x15C41Cu;
    {
        const bool branch_taken_0x15c41c = (GPR_S32(ctx, 7) < 0);
        if (branch_taken_0x15c41c) {
            ctx->pc = 0x15C430u;
            goto label_15c430;
        }
    }
    ctx->pc = 0x15C424u;
    // 0x15c424: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x15c424u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x15c428: 0x1000fff6  b           . + 4 + (-0xA << 2)
    ctx->pc = 0x15C428u;
    {
        const bool branch_taken_0x15c428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C428u;
        // 0x15c42c: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c428) {
            ctx->pc = 0x15C404u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15c404;
        }
    }
    ctx->pc = 0x15C430u;
label_15c430:
    // 0x15c430: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x15c430u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c434: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x15c434u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15c438: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15c438u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15c43c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15c43cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15c440: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15c440u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15c444: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15c444u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15c448: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15c448u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15c44c: 0x3e00008  jr          $ra
    ctx->pc = 0x15C44Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15C450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C44Cu;
        // 0x15c450: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C44Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15C454u;
}
