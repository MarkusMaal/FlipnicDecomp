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

// Function: entry_001c4a48
// Address: 0x1c4a48 - 0x1c4a6c
void entry_001c4a48_0x1c4a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c4a48_0x1c4a48");
#endif

    ctx->pc = 0x1c4a48u;

    // 0x1c4a48: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x1c4a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1c4a4c: 0xac620068  sw          $v0, 0x68($v1)
    ctx->pc = 0x1c4a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 2));
    // 0x1c4a50: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x1c4a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1c4a54: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c4a54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c4a58: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c4a58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c4a5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c4a5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c4a60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c4a60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c4a64: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4A64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C4A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4A64u;
        // 0x1c4a68: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4A64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C4A6Cu;
}
