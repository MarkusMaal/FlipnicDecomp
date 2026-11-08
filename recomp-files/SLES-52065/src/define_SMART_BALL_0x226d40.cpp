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

// Function: define_SMART_BALL
// Address: 0x226d40 - 0x226d90
void define_SMART_BALL_0x226d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("define_SMART_BALL_0x226d40");
#endif

    switch (ctx->pc) {
        case 0x226d6cu: goto label_226d6c;
        case 0x226d84u: goto label_226d84;
        default: break;
    }

    ctx->pc = 0x226d40u;

    // 0x226d40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x226d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x226d44: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x226d44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x226d48: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x226d48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x226d4c: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x226d4cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x226d50: 0x3c07001a  lui         $a3, 0x1A
    ctx->pc = 0x226d50u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)26 << 16));
    // 0x226d54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x226d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x226d58: 0x2484d8a0  addiu       $a0, $a0, -0x2760
    ctx->pc = 0x226d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957216));
    // 0x226d5c: 0x24a5d6d0  addiu       $a1, $a1, -0x2930
    ctx->pc = 0x226d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956752));
    // 0x226d60: 0x24c60158  addiu       $a2, $a2, 0x158
    ctx->pc = 0x226d60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 344));
    // 0x226d64: 0xc064028  jal         func_1900A0
    ctx->pc = 0x226D64u;
    SET_GPR_U32(ctx, 31, 0x226D6Cu);
    ctx->pc = 0x226D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226D64u;
    // 0x226d68: 0x24e79ca0  addiu       $a3, $a3, -0x6360 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294941856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1900A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1900A0u, 0x226D64u, 0x226D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226D6Cu;
label_226d6c:
    // 0x226d6c: 0x3c050019  lui         $a1, 0x19
    ctx->pc = 0x226d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25 << 16));
    // 0x226d70: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x226d70u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x226d74: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x226d74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226d78: 0x24a50190  addiu       $a1, $a1, 0x190
    ctx->pc = 0x226d78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 400));
    // 0x226d7c: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x226D7Cu;
    SET_GPR_U32(ctx, 31, 0x226D84u);
    ctx->pc = 0x226D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226D7Cu;
    // 0x226d80: 0x24c6d890  addiu       $a2, $a2, -0x2770 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x226D7Cu, 0x226D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226D84u;
label_226d84:
    // 0x226d84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x226d84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226d88: 0x3e00008  jr          $ra
    ctx->pc = 0x226D88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226D88u;
        // 0x226d8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226D88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226D90u;
}
