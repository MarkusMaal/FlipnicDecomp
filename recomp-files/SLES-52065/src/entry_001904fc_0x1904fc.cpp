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

// Function: entry_001904fc
// Address: 0x1904fc - 0x190518
void entry_001904fc_0x1904fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001904fc_0x1904fc");
#endif

    ctx->pc = 0x1904fcu;

    // 0x1904fc: 0x0  nop
    ctx->pc = 0x1904fcu;
    // NOP
    // 0x190500: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x190500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x190504: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x190504u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x190508: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x190508u;
    {
        const bool branch_taken_0x190508 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19050Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190508u;
        // 0x19050c: 0x1061821  addu        $v1, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190508) {
            ctx->pc = 0x1904B8u;
            return;
        }
    }
    ctx->pc = 0x190510u;
    // 0x190510: 0x3e00008  jr          $ra
    ctx->pc = 0x190510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190518u;
}
