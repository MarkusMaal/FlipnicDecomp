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

// Function: FUN_001ef3e8
// Address: 0x1ef3e8 - 0x1ef414
void FUN_001ef3e8_0x1ef3e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ef3e8_0x1ef3e8");
#endif

    switch (ctx->pc) {
        case 0x1ef3f8u: goto label_1ef3f8;
        case 0x1ef404u: goto label_1ef404;
        default: break;
    }

    ctx->pc = 0x1ef3e8u;

    // 0x1ef3e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ef3e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ef3ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ef3ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ef3f0: 0xc07bce6  jal         func_1EF398
    ctx->pc = 0x1EF3F0u;
    SET_GPR_U32(ctx, 31, 0x1EF3F8u);
    ctx->pc = 0x1EF398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF398u, 0x1EF3F0u, 0x1EF3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF3F8u;
label_1ef3f8:
    // 0x1ef3f8: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1ef3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1ef3fc: 0xc07ad98  jal         func_1EB660
    ctx->pc = 0x1EF3FCu;
    SET_GPR_U32(ctx, 31, 0x1EF404u);
    ctx->pc = 0x1EF400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF3FCu;
    // 0x1ef400: 0x8c44a464  lw          $a0, -0x5B9C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943844)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB660u, 0x1EF3FCu, 0x1EF404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF404u;
label_1ef404:
    // 0x1ef404: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ef404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ef408: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ef408u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef40c: 0x3e00008  jr          $ra
    ctx->pc = 0x1EF40Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EF410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF40Cu;
        // 0x1ef410: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF40Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EF414u;
}
