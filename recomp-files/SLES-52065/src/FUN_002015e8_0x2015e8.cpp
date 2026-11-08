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

// Function: FUN_002015e8
// Address: 0x2015e8 - 0x20160c
void FUN_002015e8_0x2015e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002015e8_0x2015e8");
#endif

    switch (ctx->pc) {
        case 0x201600u: goto label_201600;
        default: break;
    }

    ctx->pc = 0x2015e8u;

    // 0x2015e8: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x2015e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x2015ec: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2015ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2015f0: 0x8c44d9ac  lw          $a0, -0x2654($v0)
    ctx->pc = 0x2015f0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x21D9ACu));
    // 0x2015f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2015f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2015f8: 0xc0804ba  jal         func_2012E8
    ctx->pc = 0x2015F8u;
    SET_GPR_U32(ctx, 31, 0x201600u);
    ctx->pc = 0x2012E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2012E8u, 0x2015F8u, 0x201600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201600u;
label_201600:
    // 0x201600: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x201600u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201604: 0x3e00008  jr          $ra
    ctx->pc = 0x201604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201604u;
        // 0x201608: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20160Cu;
}
