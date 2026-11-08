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

// Function: FUN_0012a9a0
// Address: 0x12a9a0 - 0x12a9d0
void FUN_0012a9a0_0x12a9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012a9a0_0x12a9a0");
#endif

    ctx->pc = 0x12a9a0u;

    // 0x12a9a0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x12a9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x12a9a4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12A9A4u;
    {
        const bool branch_taken_0x12a9a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A9A4u;
        // 0x12a9a8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a9a4) {
            ctx->pc = 0x12A9B4u;
            goto label_12a9b4;
        }
    }
    ctx->pc = 0x12A9ACu;
    // 0x12a9ac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x12A9ACu;
    {
        const bool branch_taken_0x12a9ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a9ac) {
            ctx->pc = 0x12A9C8u;
            goto label_12a9c8;
        }
    }
    ctx->pc = 0x12A9B4u;
label_12a9b4:
    // 0x12a9b4: 0x8c830148  lw          $v1, 0x148($a0)
    ctx->pc = 0x12a9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x12a9b8: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x12a9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x12a9bc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x12a9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12a9c0: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x12a9c0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12a9c4: 0x0  nop
    ctx->pc = 0x12a9c4u;
    // NOP
label_12a9c8:
    // 0x12a9c8: 0x3e00008  jr          $ra
    ctx->pc = 0x12A9C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12A9C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12A9D0u;
}
