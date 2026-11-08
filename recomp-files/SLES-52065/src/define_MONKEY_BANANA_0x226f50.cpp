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

// Function: define_MONKEY_BANANA
// Address: 0x226f50 - 0x226fa0
void define_MONKEY_BANANA_0x226f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("define_MONKEY_BANANA_0x226f50");
#endif

    switch (ctx->pc) {
        case 0x226f7cu: goto label_226f7c;
        case 0x226f94u: goto label_226f94;
        default: break;
    }

    ctx->pc = 0x226f50u;

    // 0x226f50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x226f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x226f54: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x226f54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x226f58: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x226f58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x226f5c: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x226f5cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x226f60: 0x3c07001a  lui         $a3, 0x1A
    ctx->pc = 0x226f60u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)26 << 16));
    // 0x226f64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x226f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x226f68: 0x2484daa0  addiu       $a0, $a0, -0x2560
    ctx->pc = 0x226f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957728));
    // 0x226f6c: 0x24a5d6d0  addiu       $a1, $a1, -0x2930
    ctx->pc = 0x226f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956752));
    // 0x226f70: 0x24c60240  addiu       $a2, $a2, 0x240
    ctx->pc = 0x226f70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 576));
    // 0x226f74: 0xc064028  jal         func_1900A0
    ctx->pc = 0x226F74u;
    SET_GPR_U32(ctx, 31, 0x226F7Cu);
    ctx->pc = 0x226F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226F74u;
    // 0x226f78: 0x24e7b8a0  addiu       $a3, $a3, -0x4760 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294949024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1900A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1900A0u, 0x226F74u, 0x226F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226F7Cu;
label_226f7c:
    // 0x226f7c: 0x3c050019  lui         $a1, 0x19
    ctx->pc = 0x226f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25 << 16));
    // 0x226f80: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x226f80u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x226f84: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x226f84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226f88: 0x24a50190  addiu       $a1, $a1, 0x190
    ctx->pc = 0x226f88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 400));
    // 0x226f8c: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x226F8Cu;
    SET_GPR_U32(ctx, 31, 0x226F94u);
    ctx->pc = 0x226F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226F8Cu;
    // 0x226f90: 0x24c6da90  addiu       $a2, $a2, -0x2570 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x226F8Cu, 0x226F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226F94u;
label_226f94:
    // 0x226f94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x226f94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226f98: 0x3e00008  jr          $ra
    ctx->pc = 0x226F98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226F98u;
        // 0x226f9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226F98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226FA0u;
}
