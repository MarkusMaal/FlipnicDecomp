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

// Function: entry_001c94dc
// Address: 0x1c94dc - 0x1c950c
void entry_001c94dc_0x1c94dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c94dc_0x1c94dc");
#endif

    switch (ctx->pc) {
        case 0x1c94e8u: goto label_1c94e8;
        case 0x1c94f8u: goto label_1c94f8;
        default: break;
    }

    ctx->pc = 0x1c94dcu;

    // 0x1c94dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c94dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c94e0: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C94E0u;
    SET_GPR_U32(ctx, 31, 0x1C94E8u);
    ctx->pc = 0x1C94E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C94E0u;
    // 0x1c94e4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C94E0u, 0x1C94E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C94E8u;
label_1c94e8:
    // 0x1c94e8: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c94e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c94ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c94ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c94f0: 0xc06e738  jal         func_1B9CE0
    ctx->pc = 0x1C94F0u;
    SET_GPR_U32(ctx, 31, 0x1C94F8u);
    ctx->pc = 0x1C94F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C94F0u;
    // 0x1c94f4: 0x24a56110  addiu       $a1, $a1, 0x6110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9CE0u, 0x1C94F0u, 0x1C94F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C94F8u;
label_1c94f8:
    // 0x1c94f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c94f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c94fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c94fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c9500: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c9500u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c9504: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9504u;
        // 0x1c9508: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C950Cu;
}
