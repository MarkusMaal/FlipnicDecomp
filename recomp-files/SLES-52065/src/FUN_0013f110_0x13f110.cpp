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

// Function: FUN_0013f110
// Address: 0x13f110 - 0x13f13c
void FUN_0013f110_0x13f110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013f110_0x13f110");
#endif

    ctx->pc = 0x13f110u;

    // 0x13f110: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x13f110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x13f114: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x13f114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13f118: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x13f118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x13f11c: 0xa3102b  sltu        $v0, $a1, $v1
    ctx->pc = 0x13f11cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x13f120: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x13F120u;
    {
        const bool branch_taken_0x13f120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13f120) {
            ctx->pc = 0x13F12Cu;
            goto label_13f12c;
        }
    }
    ctx->pc = 0x13F128u;
    // 0x13f128: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x13f128u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_13f12c:
    // 0x13f12c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x13f12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x13f130: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x13f130u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x13f134: 0x3e00008  jr          $ra
    ctx->pc = 0x13F134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F134u;
        // 0x13f138: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F134u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13F13Cu;
}
