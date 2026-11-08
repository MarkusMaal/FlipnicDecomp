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

// Function: entry_0021a498
// Address: 0x21a498 - 0x21a4ac
void entry_0021a498_0x21a498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021a498_0x21a498");
#endif

    ctx->pc = 0x21a498u;

    // 0x21a498: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x21a498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21a49c: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21A49Cu;
    {
        const bool branch_taken_0x21a49c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x21A4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A49Cu;
        // 0x21a4a0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a49c) {
            ctx->pc = 0x21A4ACu;
            return;
        }
    }
    ctx->pc = 0x21A4A4u;
    // 0x21a4a4: 0x3e00008  jr          $ra
    ctx->pc = 0x21A4A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21A4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A4A4u;
        // 0x21a4a8: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21A4A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21A4ACu;
}
