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

// Function: FUN_001be3d0
// Address: 0x1be3d0 - 0x1be404
void FUN_001be3d0_0x1be3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001be3d0_0x1be3d0");
#endif

    switch (ctx->pc) {
        case 0x1be3f8u: goto label_1be3f8;
        default: break;
    }

    ctx->pc = 0x1be3d0u;

    // 0x1be3d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1be3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1be3d4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1be3d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be3d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1be3d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1be3dc: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x1be3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1be3e0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1be3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1be3e4: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1be3e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1be3e8: 0xafa50014  sw          $a1, 0x14($sp)
    ctx->pc = 0x1be3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 5));
    // 0x1be3ec: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1be3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1be3f0: 0xc06f9e4  jal         func_1BE790
    ctx->pc = 0x1BE3F0u;
    SET_GPR_U32(ctx, 31, 0x1BE3F8u);
    ctx->pc = 0x1BE3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE3F0u;
    // 0x1be3f4: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE790u, 0x1BE3F0u, 0x1BE3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE3F8u;
label_1be3f8:
    // 0x1be3f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1be3f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1be3fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE3FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE3FCu;
        // 0x1be400: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE3FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BE404u;
}
