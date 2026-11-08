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

// Function: FUN_001d2ee8
// Address: 0x1d2ee8 - 0x1d2f14
void FUN_001d2ee8_0x1d2ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d2ee8_0x1d2ee8");
#endif

    switch (ctx->pc) {
        case 0x1d2f04u: goto label_1d2f04;
        default: break;
    }

    ctx->pc = 0x1d2ee8u;

    // 0x1d2ee8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d2ee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d2eec: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x1d2eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1d2ef0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d2ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d2ef4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d2ef4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2ef8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d2ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d2efc: 0xc0762f0  jal         func_1D8BC0
    ctx->pc = 0x1D2EFCu;
    SET_GPR_U32(ctx, 31, 0x1D2F04u);
    ctx->pc = 0x1D2F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2EFCu;
    // 0x1d2f00: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8BC0u, 0x1D2EFCu, 0x1D2F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2F04u;
label_1d2f04:
    // 0x1d2f04: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d2f04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2f08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d2f08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d2f0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D2F0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D2F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2F0Cu;
        // 0x1d2f10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2F0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D2F14u;
}
