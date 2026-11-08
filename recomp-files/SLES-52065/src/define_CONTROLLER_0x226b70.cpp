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

// Function: define_CONTROLLER
// Address: 0x226b70 - 0x226bd8
void define_CONTROLLER_0x226b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("define_CONTROLLER_0x226b70");
#endif

    switch (ctx->pc) {
        case 0x226bb4u: goto label_226bb4;
        case 0x226bccu: goto label_226bcc;
        default: break;
    }

    ctx->pc = 0x226b70u;

    // 0x226b70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x226b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x226b74: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x226b74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x226b78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x226b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x226b7c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x226b7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x226b80: 0x7c20d6e0  sq          $zero, -0x2920($at)
    ctx->pc = 0x226b80u;
    do { __m128i _value = (GPR_VEC(ctx, 0)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x36D6E0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x36D6E0u, _value); } while (0);
    // 0x226b84: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x226b84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x226b88: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x226b88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x226b8c: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x226b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x226b90: 0x7c20d6f0  sq          $zero, -0x2910($at)
    ctx->pc = 0x226b90u;
    do { __m128i _value = (GPR_VEC(ctx, 0)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x36D6F0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x36D6F0u, _value); } while (0);
    // 0x226b94: 0x3c070019  lui         $a3, 0x19
    ctx->pc = 0x226b94u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)25 << 16));
    // 0x226b98: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x226b98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x226b9c: 0x2484d720  addiu       $a0, $a0, -0x28E0
    ctx->pc = 0x226b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956832));
    // 0x226ba0: 0x24a5d6d0  addiu       $a1, $a1, -0x2930
    ctx->pc = 0x226ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956752));
    // 0x226ba4: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x226ba4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x226ba8: 0x24e75e50  addiu       $a3, $a3, 0x5E50
    ctx->pc = 0x226ba8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 24144));
    // 0x226bac: 0xc064028  jal         func_1900A0
    ctx->pc = 0x226BACu;
    SET_GPR_U32(ctx, 31, 0x226BB4u);
    ctx->pc = 0x226BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226BACu;
    // 0x226bb0: 0x7c20d700  sq          $zero, -0x2900($at) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 1), 4294956800), GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1900A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1900A0u, 0x226BACu, 0x226BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226BB4u;
label_226bb4:
    // 0x226bb4: 0x3c050019  lui         $a1, 0x19
    ctx->pc = 0x226bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25 << 16));
    // 0x226bb8: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x226bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x226bbc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x226bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226bc0: 0x24a50190  addiu       $a1, $a1, 0x190
    ctx->pc = 0x226bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 400));
    // 0x226bc4: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x226BC4u;
    SET_GPR_U32(ctx, 31, 0x226BCCu);
    ctx->pc = 0x226BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226BC4u;
    // 0x226bc8: 0x24c6d710  addiu       $a2, $a2, -0x28F0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x226BC4u, 0x226BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226BCCu;
label_226bcc:
    // 0x226bcc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x226bccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226bd0: 0x3e00008  jr          $ra
    ctx->pc = 0x226BD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226BD0u;
        // 0x226bd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226BD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226BD8u;
}
