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

// Function: define_VOICE_EVENT
// Address: 0x2271a0 - 0x2271f0
void define_VOICE_EVENT_0x2271a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("define_VOICE_EVENT_0x2271a0");
#endif

    switch (ctx->pc) {
        case 0x2271ccu: goto label_2271cc;
        case 0x2271e4u: goto label_2271e4;
        default: break;
    }

    ctx->pc = 0x2271a0u;

    // 0x2271a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2271a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2271a4: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2271a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2271a8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2271a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2271ac: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x2271acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x2271b0: 0x3c07001a  lui         $a3, 0x1A
    ctx->pc = 0x2271b0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)26 << 16));
    // 0x2271b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2271b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2271b8: 0x2484dd00  addiu       $a0, $a0, -0x2300
    ctx->pc = 0x2271b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958336));
    // 0x2271bc: 0x24a5d6d0  addiu       $a1, $a1, -0x2930
    ctx->pc = 0x2271bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956752));
    // 0x2271c0: 0x24c60450  addiu       $a2, $a2, 0x450
    ctx->pc = 0x2271c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1104));
    // 0x2271c4: 0xc064028  jal         func_1900A0
    ctx->pc = 0x2271C4u;
    SET_GPR_U32(ctx, 31, 0x2271CCu);
    ctx->pc = 0x2271C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2271C4u;
    // 0x2271c8: 0x24e72590  addiu       $a3, $a3, 0x2590 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1900A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1900A0u, 0x2271C4u, 0x2271CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2271CCu;
label_2271cc:
    // 0x2271cc: 0x3c050019  lui         $a1, 0x19
    ctx->pc = 0x2271ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25 << 16));
    // 0x2271d0: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x2271d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x2271d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2271d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2271d8: 0x24a50190  addiu       $a1, $a1, 0x190
    ctx->pc = 0x2271d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 400));
    // 0x2271dc: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x2271DCu;
    SET_GPR_U32(ctx, 31, 0x2271E4u);
    ctx->pc = 0x2271E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2271DCu;
    // 0x2271e0: 0x24c6dcf0  addiu       $a2, $a2, -0x2310 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x2271DCu, 0x2271E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2271E4u;
label_2271e4:
    // 0x2271e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2271e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2271e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2271E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2271ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2271E8u;
        // 0x2271ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2271E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2271F0u;
}
