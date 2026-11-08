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

// Function: entry_001239a8
// Address: 0x1239a8 - 0x1239c8
void entry_001239a8_0x1239a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001239a8_0x1239a8");
#endif

    ctx->pc = 0x1239a8u;

    // 0x1239a8: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x1239a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1239ac: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x1239acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1239b0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1239b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1239b4: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x1239b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x1239b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1239b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1239bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1239bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1239c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1239C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1239C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1239C0u;
        // 0x1239c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1239C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1239C8u;
}
