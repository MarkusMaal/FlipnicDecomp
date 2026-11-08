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

// Function: define_CAST_EVENT_FONT_EVENT
// Address: 0x2270c0 - 0x22714c
void define_CAST_EVENT_FONT_EVENT_0x2270c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("define_CAST_EVENT_FONT_EVENT_0x2270c0");
#endif

    switch (ctx->pc) {
        case 0x2270ecu: goto label_2270ec;
        case 0x227104u: goto label_227104;
        case 0x227128u: goto label_227128;
        case 0x227140u: goto label_227140;
        default: break;
    }

    ctx->pc = 0x2270c0u;

    // 0x2270c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2270c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2270c4: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2270c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2270c8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2270c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2270cc: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x2270ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x2270d0: 0x3c07001a  lui         $a3, 0x1A
    ctx->pc = 0x2270d0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)26 << 16));
    // 0x2270d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2270d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2270d8: 0x2484dc40  addiu       $a0, $a0, -0x23C0
    ctx->pc = 0x2270d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958144));
    // 0x2270dc: 0x24a5d6d0  addiu       $a1, $a1, -0x2930
    ctx->pc = 0x2270dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956752));
    // 0x2270e0: 0x24c60398  addiu       $a2, $a2, 0x398
    ctx->pc = 0x2270e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 920));
    // 0x2270e4: 0xc064028  jal         func_1900A0
    ctx->pc = 0x2270E4u;
    SET_GPR_U32(ctx, 31, 0x2270ECu);
    ctx->pc = 0x2270E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2270E4u;
    // 0x2270e8: 0x24e70330  addiu       $a3, $a3, 0x330 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1900A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1900A0u, 0x2270E4u, 0x2270ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2270ECu;
label_2270ec:
    // 0x2270ec: 0x3c050019  lui         $a1, 0x19
    ctx->pc = 0x2270ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25 << 16));
    // 0x2270f0: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x2270f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x2270f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2270f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2270f8: 0x24a50190  addiu       $a1, $a1, 0x190
    ctx->pc = 0x2270f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 400));
    // 0x2270fc: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x2270FCu;
    SET_GPR_U32(ctx, 31, 0x227104u);
    ctx->pc = 0x227100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2270FCu;
    // 0x227100: 0x24c6dc30  addiu       $a2, $a2, -0x23D0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x2270FCu, 0x227104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227104u;
label_227104:
    // 0x227104: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x227104u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x227108: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x227108u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x22710c: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x22710cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x227110: 0x3c07001a  lui         $a3, 0x1A
    ctx->pc = 0x227110u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)26 << 16));
    // 0x227114: 0x2484dc80  addiu       $a0, $a0, -0x2380
    ctx->pc = 0x227114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958208));
    // 0x227118: 0x24a5d6d0  addiu       $a1, $a1, -0x2930
    ctx->pc = 0x227118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956752));
    // 0x22711c: 0x24c603a8  addiu       $a2, $a2, 0x3A8
    ctx->pc = 0x22711cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 936));
    // 0x227120: 0xc064028  jal         func_1900A0
    ctx->pc = 0x227120u;
    SET_GPR_U32(ctx, 31, 0x227128u);
    ctx->pc = 0x227124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227120u;
    // 0x227124: 0x24e708c0  addiu       $a3, $a3, 0x8C0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1900A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1900A0u, 0x227120u, 0x227128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227128u;
label_227128:
    // 0x227128: 0x3c050019  lui         $a1, 0x19
    ctx->pc = 0x227128u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25 << 16));
    // 0x22712c: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x22712cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x227130: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x227130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227134: 0x24a50190  addiu       $a1, $a1, 0x190
    ctx->pc = 0x227134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 400));
    // 0x227138: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x227138u;
    SET_GPR_U32(ctx, 31, 0x227140u);
    ctx->pc = 0x22713Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227138u;
    // 0x22713c: 0x24c6dc70  addiu       $a2, $a2, -0x2390 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x227138u, 0x227140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227140u;
label_227140:
    // 0x227140: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x227140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x227144: 0x3e00008  jr          $ra
    ctx->pc = 0x227144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227144u;
        // 0x227148: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227144u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22714Cu;
}
