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

// Function: define_special_bumper_events
// Address: 0x226fa0 - 0x227068
void define_special_bumper_events_0x226fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("define_special_bumper_events_0x226fa0");
#endif

    switch (ctx->pc) {
        case 0x226fccu: goto label_226fcc;
        case 0x226fe4u: goto label_226fe4;
        case 0x227008u: goto label_227008;
        case 0x227020u: goto label_227020;
        case 0x227044u: goto label_227044;
        case 0x22705cu: goto label_22705c;
        default: break;
    }

    ctx->pc = 0x226fa0u;

    // 0x226fa0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x226fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x226fa4: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x226fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x226fa8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x226fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x226fac: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x226facu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x226fb0: 0x3c07001a  lui         $a3, 0x1A
    ctx->pc = 0x226fb0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)26 << 16));
    // 0x226fb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x226fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x226fb8: 0x2484db20  addiu       $a0, $a0, -0x24E0
    ctx->pc = 0x226fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957856));
    // 0x226fbc: 0x24a5d6d0  addiu       $a1, $a1, -0x2930
    ctx->pc = 0x226fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956752));
    // 0x226fc0: 0x24c60250  addiu       $a2, $a2, 0x250
    ctx->pc = 0x226fc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 592));
    // 0x226fc4: 0xc064028  jal         func_1900A0
    ctx->pc = 0x226FC4u;
    SET_GPR_U32(ctx, 31, 0x226FCCu);
    ctx->pc = 0x226FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226FC4u;
    // 0x226fc8: 0x24e7d800  addiu       $a3, $a3, -0x2800 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294957056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1900A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1900A0u, 0x226FC4u, 0x226FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226FCCu;
label_226fcc:
    // 0x226fcc: 0x3c050019  lui         $a1, 0x19
    ctx->pc = 0x226fccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25 << 16));
    // 0x226fd0: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x226fd0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x226fd4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x226fd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226fd8: 0x24a50190  addiu       $a1, $a1, 0x190
    ctx->pc = 0x226fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 400));
    // 0x226fdc: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x226FDCu;
    SET_GPR_U32(ctx, 31, 0x226FE4u);
    ctx->pc = 0x226FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226FDCu;
    // 0x226fe0: 0x24c6db10  addiu       $a2, $a2, -0x24F0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x226FDCu, 0x226FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226FE4u;
label_226fe4:
    // 0x226fe4: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x226fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x226fe8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x226fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x226fec: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x226fecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x226ff0: 0x3c07001a  lui         $a3, 0x1A
    ctx->pc = 0x226ff0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)26 << 16));
    // 0x226ff4: 0x2484db60  addiu       $a0, $a0, -0x24A0
    ctx->pc = 0x226ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957920));
    // 0x226ff8: 0x24a5d6d0  addiu       $a1, $a1, -0x2930
    ctx->pc = 0x226ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956752));
    // 0x226ffc: 0x24c60268  addiu       $a2, $a2, 0x268
    ctx->pc = 0x226ffcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 616));
    // 0x227000: 0xc064028  jal         func_1900A0
    ctx->pc = 0x227000u;
    SET_GPR_U32(ctx, 31, 0x227008u);
    ctx->pc = 0x227004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227000u;
    // 0x227004: 0x24e7e270  addiu       $a3, $a3, -0x1D90 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294959728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1900A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1900A0u, 0x227000u, 0x227008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227008u;
label_227008:
    // 0x227008: 0x3c050019  lui         $a1, 0x19
    ctx->pc = 0x227008u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25 << 16));
    // 0x22700c: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x22700cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x227010: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x227010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227014: 0x24a50190  addiu       $a1, $a1, 0x190
    ctx->pc = 0x227014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 400));
    // 0x227018: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x227018u;
    SET_GPR_U32(ctx, 31, 0x227020u);
    ctx->pc = 0x22701Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227018u;
    // 0x22701c: 0x24c6db50  addiu       $a2, $a2, -0x24B0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x227018u, 0x227020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227020u;
label_227020:
    // 0x227020: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x227020u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x227024: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x227024u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x227028: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x227028u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x22702c: 0x3c07001a  lui         $a3, 0x1A
    ctx->pc = 0x22702cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)26 << 16));
    // 0x227030: 0x2484dba0  addiu       $a0, $a0, -0x2460
    ctx->pc = 0x227030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957984));
    // 0x227034: 0x24a5d6d0  addiu       $a1, $a1, -0x2930
    ctx->pc = 0x227034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956752));
    // 0x227038: 0x24c60278  addiu       $a2, $a2, 0x278
    ctx->pc = 0x227038u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 632));
    // 0x22703c: 0xc064028  jal         func_1900A0
    ctx->pc = 0x22703Cu;
    SET_GPR_U32(ctx, 31, 0x227044u);
    ctx->pc = 0x227040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22703Cu;
    // 0x227040: 0x24e7e810  addiu       $a3, $a3, -0x17F0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294961168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1900A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1900A0u, 0x22703Cu, 0x227044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227044u;
label_227044:
    // 0x227044: 0x3c050019  lui         $a1, 0x19
    ctx->pc = 0x227044u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25 << 16));
    // 0x227048: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x227048u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x22704c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x22704cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227050: 0x24a50190  addiu       $a1, $a1, 0x190
    ctx->pc = 0x227050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 400));
    // 0x227054: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x227054u;
    SET_GPR_U32(ctx, 31, 0x22705Cu);
    ctx->pc = 0x227058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227054u;
    // 0x227058: 0x24c6db90  addiu       $a2, $a2, -0x2470 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x227054u, 0x22705Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22705Cu;
label_22705c:
    // 0x22705c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22705cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x227060: 0x3e00008  jr          $ra
    ctx->pc = 0x227060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227060u;
        // 0x227064: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227060u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227068u;
}
