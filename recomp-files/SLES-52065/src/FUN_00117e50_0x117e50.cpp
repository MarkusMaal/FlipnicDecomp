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

// Function: FUN_00117e50
// Address: 0x117e50 - 0x117e7c
void FUN_00117e50_0x117e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00117e50_0x117e50");
#endif

    switch (ctx->pc) {
        case 0x117e60u: goto label_117e60;
        case 0x117e70u: goto label_117e70;
        default: break;
    }

    ctx->pc = 0x117e50u;

    // 0x117e50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x117e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x117e54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x117e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x117e58: 0xc047a3c  jal         func_11E8F0
    ctx->pc = 0x117E58u;
    SET_GPR_U32(ctx, 31, 0x117E60u);
    ctx->pc = 0x11E8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E8F0u, 0x117E58u, 0x117E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117E60u;
label_117e60:
    // 0x117e60: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x117e60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x117e64: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x117e64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117e68: 0xc046b28  jal         func_11ACA0
    ctx->pc = 0x117E68u;
    SET_GPR_U32(ctx, 31, 0x117E70u);
    ctx->pc = 0x117E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117E68u;
    // 0x117e6c: 0x24a5d980  addiu       $a1, $a1, -0x2680 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ACA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ACA0u, 0x117E68u, 0x117E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117E70u;
label_117e70:
    // 0x117e70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x117e70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117e74: 0x3e00008  jr          $ra
    ctx->pc = 0x117E74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117E74u;
        // 0x117e78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117E74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117E7Cu;
}
