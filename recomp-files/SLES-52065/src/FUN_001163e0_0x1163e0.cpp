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

// Function: FUN_001163e0
// Address: 0x1163e0 - 0x116420
void FUN_001163e0_0x1163e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001163e0_0x1163e0");
#endif

    switch (ctx->pc) {
        case 0x1163f0u: goto label_1163f0;
        case 0x1163f8u: goto label_1163f8;
        case 0x116400u: goto label_116400;
        case 0x116408u: goto label_116408;
        case 0x116410u: goto label_116410;
        default: break;
    }

    ctx->pc = 0x1163e0u;

    // 0x1163e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1163e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1163e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1163e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1163e8: 0xc07b79a  jal         func_1EDE68
    ctx->pc = 0x1163E8u;
    SET_GPR_U32(ctx, 31, 0x1163F0u);
    ctx->pc = 0x1163ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1163E8u;
    // 0x1163ec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDE68u, 0x1163E8u, 0x1163F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1163F0u;
label_1163f0:
    // 0x1163f0: 0xc07bde2  jal         func_1EF788
    ctx->pc = 0x1163F0u;
    SET_GPR_U32(ctx, 31, 0x1163F8u);
    ctx->pc = 0x1EF788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF788u, 0x1163F0u, 0x1163F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1163F8u;
label_1163f8:
    // 0x1163f8: 0xc045c84  jal         func_117210
    ctx->pc = 0x1163F8u;
    SET_GPR_U32(ctx, 31, 0x116400u);
    ctx->pc = 0x117210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117210u, 0x1163F8u, 0x116400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116400u;
label_116400:
    // 0x116400: 0xc0802aa  jal         func_200AA8
    ctx->pc = 0x116400u;
    SET_GPR_U32(ctx, 31, 0x116408u);
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x116400u, 0x116408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116408u;
label_116408:
    // 0x116408: 0xc04592c  jal         func_1164B0
    ctx->pc = 0x116408u;
    SET_GPR_U32(ctx, 31, 0x116410u);
    ctx->pc = 0x11640Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116408u;
    // 0x11640c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1164B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1164B0u, 0x116408u, 0x116410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116410u;
label_116410:
    // 0x116410: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x116410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x116414: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x116414u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116418: 0x3e00008  jr          $ra
    ctx->pc = 0x116418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11641Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116418u;
        // 0x11641c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x116420u;
}
