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

// Function: define_BAGATELLE_MAN
// Address: 0x227620 - 0x227670
void define_BAGATELLE_MAN_0x227620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("define_BAGATELLE_MAN_0x227620");
#endif

    switch (ctx->pc) {
        case 0x22764cu: goto label_22764c;
        case 0x227664u: goto label_227664;
        default: break;
    }

    ctx->pc = 0x227620u;

    // 0x227620: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x227620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x227624: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x227624u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x227628: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x227628u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x22762c: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x22762cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x227630: 0x3c07001b  lui         $a3, 0x1B
    ctx->pc = 0x227630u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)27 << 16));
    // 0x227634: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x227634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x227638: 0x2484e150  addiu       $a0, $a0, -0x1EB0
    ctx->pc = 0x227638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959440));
    // 0x22763c: 0x24a5d6d0  addiu       $a1, $a1, -0x2930
    ctx->pc = 0x22763cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956752));
    // 0x227640: 0x24c60a18  addiu       $a2, $a2, 0xA18
    ctx->pc = 0x227640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2584));
    // 0x227644: 0xc064028  jal         func_1900A0
    ctx->pc = 0x227644u;
    SET_GPR_U32(ctx, 31, 0x22764Cu);
    ctx->pc = 0x227648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227644u;
    // 0x227648: 0x24e7bc90  addiu       $a3, $a3, -0x4370 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294950032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1900A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1900A0u, 0x227644u, 0x22764Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22764Cu;
label_22764c:
    // 0x22764c: 0x3c050019  lui         $a1, 0x19
    ctx->pc = 0x22764cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25 << 16));
    // 0x227650: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x227650u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x227654: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x227654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227658: 0x24a50190  addiu       $a1, $a1, 0x190
    ctx->pc = 0x227658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 400));
    // 0x22765c: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x22765Cu;
    SET_GPR_U32(ctx, 31, 0x227664u);
    ctx->pc = 0x227660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22765Cu;
    // 0x227660: 0x24c6e140  addiu       $a2, $a2, -0x1EC0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x22765Cu, 0x227664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227664u;
label_227664:
    // 0x227664: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x227664u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x227668: 0x3e00008  jr          $ra
    ctx->pc = 0x227668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22766Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227668u;
        // 0x22766c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227668u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227670u;
}
