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

// Function: FUN_00225f10
// Address: 0x225f10 - 0x225f64
void FUN_00225f10_0x225f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00225f10_0x225f10");
#endif

    switch (ctx->pc) {
        case 0x225f20u: goto label_225f20;
        case 0x225f38u: goto label_225f38;
        case 0x225f40u: goto label_225f40;
        case 0x225f58u: goto label_225f58;
        default: break;
    }

    ctx->pc = 0x225f10u;

    // 0x225f10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x225f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x225f14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x225f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x225f18: 0xc078604  jal         func_1E1810
    ctx->pc = 0x225F18u;
    SET_GPR_U32(ctx, 31, 0x225F20u);
    ctx->pc = 0x225F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225F18u;
    // 0x225f1c: 0x27848404  addiu       $a0, $gp, -0x7BFC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935556));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1810u, 0x225F18u, 0x225F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225F20u;
label_225f20:
    // 0x225f20: 0x3c05001e  lui         $a1, 0x1E
    ctx->pc = 0x225f20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
    // 0x225f24: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x225f24u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x225f28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x225f28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225f2c: 0x24a51b10  addiu       $a1, $a1, 0x1B10
    ctx->pc = 0x225f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6928));
    // 0x225f30: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x225F30u;
    SET_GPR_U32(ctx, 31, 0x225F38u);
    ctx->pc = 0x225F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225F30u;
    // 0x225f34: 0x24c60c58  addiu       $a2, $a2, 0xC58 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x225F30u, 0x225F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225F38u;
label_225f38:
    // 0x225f38: 0xc07874c  jal         func_1E1D30
    ctx->pc = 0x225F38u;
    SET_GPR_U32(ctx, 31, 0x225F40u);
    ctx->pc = 0x225F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225F38u;
    // 0x225f3c: 0x27848408  addiu       $a0, $gp, -0x7BF8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1D30u, 0x225F38u, 0x225F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225F40u;
label_225f40:
    // 0x225f40: 0x3c05001e  lui         $a1, 0x1E
    ctx->pc = 0x225f40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
    // 0x225f44: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x225f44u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x225f48: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x225f48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225f4c: 0x24a52030  addiu       $a1, $a1, 0x2030
    ctx->pc = 0x225f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8240));
    // 0x225f50: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x225F50u;
    SET_GPR_U32(ctx, 31, 0x225F58u);
    ctx->pc = 0x225F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225F50u;
    // 0x225f54: 0x24c60c68  addiu       $a2, $a2, 0xC68 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x225F50u, 0x225F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225F58u;
label_225f58:
    // 0x225f58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x225f58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225f5c: 0x3e00008  jr          $ra
    ctx->pc = 0x225F5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225F5Cu;
        // 0x225f60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225F5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225F64u;
}
