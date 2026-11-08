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

// Function: FUN_001426a0
// Address: 0x1426a0 - 0x1426e4
void FUN_001426a0_0x1426a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001426a0_0x1426a0");
#endif

    switch (ctx->pc) {
        case 0x1426d8u: goto label_1426d8;
        default: break;
    }

    ctx->pc = 0x1426a0u;

    // 0x1426a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1426a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1426a4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1426a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1426a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1426a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1426ac: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x1426acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1426b0: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x1426b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1426b4: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1426b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1426b8: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x1426b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x1426bc: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x1426bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x1426c0: 0x8c83004c  lw          $v1, 0x4C($a0)
    ctx->pc = 0x1426c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x1426c4: 0x8c820050  lw          $v0, 0x50($a0)
    ctx->pc = 0x1426c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x1426c8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1426c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1426cc: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1426ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1426d0: 0xc050d74  jal         func_1435D0
    ctx->pc = 0x1426D0u;
    SET_GPR_U32(ctx, 31, 0x1426D8u);
    ctx->pc = 0x1426D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1426D0u;
    // 0x1426d4: 0x24840048  addiu       $a0, $a0, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1435D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1435D0u, 0x1426D0u, 0x1426D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1426D8u;
label_1426d8:
    // 0x1426d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1426d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1426dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1426DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1426E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1426DCu;
        // 0x1426e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1426DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1426E4u;
}
