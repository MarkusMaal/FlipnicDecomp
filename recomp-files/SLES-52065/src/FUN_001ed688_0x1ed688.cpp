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

// Function: FUN_001ed688
// Address: 0x1ed688 - 0x1ed6c0
void FUN_001ed688_0x1ed688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ed688_0x1ed688");
#endif

    switch (ctx->pc) {
        case 0x1ed6b4u: goto label_1ed6b4;
        default: break;
    }

    ctx->pc = 0x1ed688u;

    // 0x1ed688: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1ed688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1ed68c: 0xffa50058  sd          $a1, 0x58($sp)
    ctx->pc = 0x1ed68cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 5));
    // 0x1ed690: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ed690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ed694: 0x27a50058  addiu       $a1, $sp, 0x58
    ctx->pc = 0x1ed694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x1ed698: 0xffa60060  sd          $a2, 0x60($sp)
    ctx->pc = 0x1ed698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 6));
    // 0x1ed69c: 0xffa70068  sd          $a3, 0x68($sp)
    ctx->pc = 0x1ed69cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 7));
    // 0x1ed6a0: 0xffa80070  sd          $t0, 0x70($sp)
    ctx->pc = 0x1ed6a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 8));
    // 0x1ed6a4: 0xffa90078  sd          $t1, 0x78($sp)
    ctx->pc = 0x1ed6a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 9));
    // 0x1ed6a8: 0xffaa0080  sd          $t2, 0x80($sp)
    ctx->pc = 0x1ed6a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 10));
    // 0x1ed6ac: 0xc07b426  jal         func_1ED098
    ctx->pc = 0x1ED6ACu;
    SET_GPR_U32(ctx, 31, 0x1ED6B4u);
    ctx->pc = 0x1ED6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED6ACu;
    // 0x1ed6b0: 0xffab0088  sd          $t3, 0x88($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED098u, 0x1ED6ACu, 0x1ED6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED6B4u;
label_1ed6b4:
    // 0x1ed6b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ed6b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ed6b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1ED6B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ED6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED6B8u;
        // 0x1ed6bc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED6B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ED6C0u;
}
