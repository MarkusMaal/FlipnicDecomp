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

// Function: define_PON_MAN
// Address: 0x227670 - 0x2276c0
void define_PON_MAN_0x227670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("define_PON_MAN_0x227670");
#endif

    switch (ctx->pc) {
        case 0x22769cu: goto label_22769c;
        case 0x2276b4u: goto label_2276b4;
        default: break;
    }

    ctx->pc = 0x227670u;

    // 0x227670: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x227670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x227674: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x227674u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x227678: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x227678u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x22767c: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x22767cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x227680: 0x3c07001b  lui         $a3, 0x1B
    ctx->pc = 0x227680u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)27 << 16));
    // 0x227684: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x227684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x227688: 0x2484e190  addiu       $a0, $a0, -0x1E70
    ctx->pc = 0x227688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959504));
    // 0x22768c: 0x24a5d6d0  addiu       $a1, $a1, -0x2930
    ctx->pc = 0x22768cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956752));
    // 0x227690: 0x24c60ab8  addiu       $a2, $a2, 0xAB8
    ctx->pc = 0x227690u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2744));
    // 0x227694: 0xc064028  jal         func_1900A0
    ctx->pc = 0x227694u;
    SET_GPR_U32(ctx, 31, 0x22769Cu);
    ctx->pc = 0x227698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227694u;
    // 0x227698: 0x24e7ce50  addiu       $a3, $a3, -0x31B0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1900A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1900A0u, 0x227694u, 0x22769Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22769Cu;
label_22769c:
    // 0x22769c: 0x3c050019  lui         $a1, 0x19
    ctx->pc = 0x22769cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25 << 16));
    // 0x2276a0: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x2276a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x2276a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2276a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2276a8: 0x24a50190  addiu       $a1, $a1, 0x190
    ctx->pc = 0x2276a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 400));
    // 0x2276ac: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x2276ACu;
    SET_GPR_U32(ctx, 31, 0x2276B4u);
    ctx->pc = 0x2276B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2276ACu;
    // 0x2276b0: 0x24c6e180  addiu       $a2, $a2, -0x1E80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x2276ACu, 0x2276B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2276B4u;
label_2276b4:
    // 0x2276b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2276b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2276b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2276B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2276BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2276B8u;
        // 0x2276bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2276B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2276C0u;
}
