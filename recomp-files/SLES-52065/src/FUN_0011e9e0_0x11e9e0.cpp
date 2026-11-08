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

// Function: FUN_0011e9e0
// Address: 0x11e9e0 - 0x11ea20
void FUN_0011e9e0_0x11e9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0011e9e0_0x11e9e0");
#endif

    switch (ctx->pc) {
        case 0x11ea14u: goto label_11ea14;
        default: break;
    }

    ctx->pc = 0x11e9e0u;

    // 0x11e9e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11e9e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11e9e4: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x11e9e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e9e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11e9e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11e9ec: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x11e9ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e9f0: 0xffab0000  sd          $t3, 0x0($sp)
    ctx->pc = 0x11e9f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 11));
    // 0x11e9f4: 0x24060400  addiu       $a2, $zero, 0x400
    ctx->pc = 0x11e9f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x11e9f8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x11e9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11e9fc: 0x120582d  daddu       $t3, $t1, $zero
    ctx->pc = 0x11e9fcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ea00: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x11ea00u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ea04: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x11ea04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ea08: 0x60502d  daddu       $t2, $v1, $zero
    ctx->pc = 0x11ea08u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ea0c: 0xc047a88  jal         func_11EA20
    ctx->pc = 0x11EA0Cu;
    SET_GPR_U32(ctx, 31, 0x11EA14u);
    ctx->pc = 0x11EA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EA0Cu;
    // 0x11ea10: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EA20u, 0x11EA0Cu, 0x11EA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EA14u;
label_11ea14:
    // 0x11ea14: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11ea14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11ea18: 0x3e00008  jr          $ra
    ctx->pc = 0x11EA18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11EA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EA18u;
        // 0x11ea1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11EA18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11EA20u;
}
