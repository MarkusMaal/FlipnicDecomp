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

// Function: entry_0018f3b4
// Address: 0x18f3b4 - 0x18f3f4
void entry_0018f3b4_0x18f3b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f3b4_0x18f3b4");
#endif

    switch (ctx->pc) {
        case 0x18f3c0u: goto label_18f3c0;
        case 0x18f3c8u: goto label_18f3c8;
        default: break;
    }

    ctx->pc = 0x18f3b4u;

label_18f3b4:
    // 0x18f3b4: 0x2719021  addu        $s2, $s3, $s1
    ctx->pc = 0x18f3b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x18f3b8: 0xc05ecac  jal         func_17B2B0
    ctx->pc = 0x18F3B8u;
    SET_GPR_U32(ctx, 31, 0x18F3C0u);
    ctx->pc = 0x18F3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F3B8u;
    // 0x18f3bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B2B0u, 0x18F3B8u, 0x18F3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F3C0u;
label_18f3c0:
    // 0x18f3c0: 0xc05eb80  jal         func_17AE00
    ctx->pc = 0x18F3C0u;
    SET_GPR_U32(ctx, 31, 0x18F3C8u);
    ctx->pc = 0x18F3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F3C0u;
    // 0x18f3c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17AE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17AE00u, 0x18F3C0u, 0x18F3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F3C8u;
label_18f3c8:
    // 0x18f3c8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18f3c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18f3cc: 0x2a030008  slti        $v1, $s0, 0x8
    ctx->pc = 0x18f3ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x18f3d0: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x18F3D0u;
    {
        const bool branch_taken_0x18f3d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18F3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F3D0u;
        // 0x18f3d4: 0x26310420  addiu       $s1, $s1, 0x420 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1056));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f3d0) {
            ctx->pc = 0x18F3B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18f3b4;
        }
    }
    ctx->pc = 0x18F3D8u;
    // 0x18f3d8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x18f3d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18f3dc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18f3dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18f3e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18f3e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18f3e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18f3e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18f3e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18f3e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18f3ec: 0x3e00008  jr          $ra
    ctx->pc = 0x18F3ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F3ECu;
        // 0x18f3f0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F3ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18F3F4u;
}
