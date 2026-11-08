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

// Function: entry_001bb6f0
// Address: 0x1bb6f0 - 0x1bb714
void entry_001bb6f0_0x1bb6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bb6f0_0x1bb6f0");
#endif

    switch (ctx->pc) {
        case 0x1bb6f8u: goto label_1bb6f8;
        default: break;
    }

    ctx->pc = 0x1bb6f0u;

    // 0x1bb6f0: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1BB6F0u;
    SET_GPR_U32(ctx, 31, 0x1BB6F8u);
    ctx->pc = 0x1BB6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB6F0u;
    // 0x1bb6f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1BB6F0u, 0x1BB6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB6F8u;
label_1bb6f8:
    // 0x1bb6f8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1bb6f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bb6fc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1bb6fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bb700: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1bb700u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bb704: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bb704u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bb708: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bb708u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bb70c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB70Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB70Cu;
        // 0x1bb710: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB70Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BB714u;
}
