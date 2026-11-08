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

// Function: define_SOCCER_MAN
// Address: 0x2276c0 - 0x227710
void define_SOCCER_MAN_0x2276c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("define_SOCCER_MAN_0x2276c0");
#endif

    switch (ctx->pc) {
        case 0x2276ecu: goto label_2276ec;
        case 0x227704u: goto label_227704;
        default: break;
    }

    ctx->pc = 0x2276c0u;

    // 0x2276c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2276c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2276c4: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2276c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2276c8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2276c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2276cc: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x2276ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x2276d0: 0x3c07001b  lui         $a3, 0x1B
    ctx->pc = 0x2276d0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)27 << 16));
    // 0x2276d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2276d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2276d8: 0x2484e1d0  addiu       $a0, $a0, -0x1E30
    ctx->pc = 0x2276d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959568));
    // 0x2276dc: 0x24a5d6d0  addiu       $a1, $a1, -0x2930
    ctx->pc = 0x2276dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956752));
    // 0x2276e0: 0x24c60b58  addiu       $a2, $a2, 0xB58
    ctx->pc = 0x2276e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2904));
    // 0x2276e4: 0xc064028  jal         func_1900A0
    ctx->pc = 0x2276E4u;
    SET_GPR_U32(ctx, 31, 0x2276ECu);
    ctx->pc = 0x2276E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2276E4u;
    // 0x2276e8: 0x24e7dfa0  addiu       $a3, $a3, -0x2060 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294959008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1900A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1900A0u, 0x2276E4u, 0x2276ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2276ECu;
label_2276ec:
    // 0x2276ec: 0x3c050019  lui         $a1, 0x19
    ctx->pc = 0x2276ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25 << 16));
    // 0x2276f0: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x2276f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x2276f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2276f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2276f8: 0x24a50190  addiu       $a1, $a1, 0x190
    ctx->pc = 0x2276f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 400));
    // 0x2276fc: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x2276FCu;
    SET_GPR_U32(ctx, 31, 0x227704u);
    ctx->pc = 0x227700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2276FCu;
    // 0x227700: 0x24c6e1c0  addiu       $a2, $a2, -0x1E40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x2276FCu, 0x227704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227704u;
label_227704:
    // 0x227704: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x227704u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x227708: 0x3e00008  jr          $ra
    ctx->pc = 0x227708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22770Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227708u;
        // 0x22770c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227708u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227710u;
}
