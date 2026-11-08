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

// Function: FUN_001d2e80
// Address: 0x1d2e80 - 0x1d2eac
void FUN_001d2e80_0x1d2e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d2e80_0x1d2e80");
#endif

    switch (ctx->pc) {
        case 0x1d2e9cu: goto label_1d2e9c;
        default: break;
    }

    ctx->pc = 0x1d2e80u;

    // 0x1d2e80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d2e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d2e84: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1d2e84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2e88: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d2e88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d2e8c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d2e8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2e90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d2e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d2e94: 0xc0762f0  jal         func_1D8BC0
    ctx->pc = 0x1D2E94u;
    SET_GPR_U32(ctx, 31, 0x1D2E9Cu);
    ctx->pc = 0x1D2E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2E94u;
    // 0x1d2e98: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8BC0u, 0x1D2E94u, 0x1D2E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2E9Cu;
label_1d2e9c:
    // 0x1d2e9c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d2e9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2ea0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d2ea0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d2ea4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D2EA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D2EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2EA4u;
        // 0x1d2ea8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2EA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D2EACu;
}
