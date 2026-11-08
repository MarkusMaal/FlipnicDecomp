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

// Function: entry_001a5690
// Address: 0x1a5690 - 0x1a56a8
void entry_001a5690_0x1a5690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5690_0x1a5690");
#endif

    ctx->pc = 0x1a5690u;

    // 0x1a5690: 0x8c850680  lw          $a1, 0x680($a0)
    ctx->pc = 0x1a5690u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1664)));
    // 0x1a5694: 0xe5282a  slt         $a1, $a3, $a1
    ctx->pc = 0x1a5694u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1a5698: 0x14a0ffdb  bnez        $a1, . + 4 + (-0x25 << 2)
    ctx->pc = 0x1A5698u;
    {
        const bool branch_taken_0x1a5698 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A569Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5698u;
        // 0x1a569c: 0x834821  addu        $t1, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5698) {
            ctx->pc = 0x1A5608u;
            return;
        }
    }
    ctx->pc = 0x1A56A0u;
    // 0x1a56a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A56A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A56A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A56A8u;
}
