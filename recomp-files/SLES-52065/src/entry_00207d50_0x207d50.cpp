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

// Function: entry_00207d50
// Address: 0x207d50 - 0x207d68
void entry_00207d50_0x207d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00207d50_0x207d50");
#endif

    ctx->pc = 0x207d50u;

    // 0x207d50: 0x5482000f  bnel        $a0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x207D50u;
    {
        const bool branch_taken_0x207d50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x207d50) {
            ctx->pc = 0x207D54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207D50u;
            // 0x207d54: 0x31a38  dsll        $v1, $v1, 8 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x207D90u;
            return;
        }
    }
    ctx->pc = 0x207D58u;
    // 0x207d58: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x207D58u;
    {
        const bool branch_taken_0x207d58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x207D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207D58u;
        // 0x207d5c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207d58) {
            ctx->pc = 0x207D68u;
            return;
        }
    }
    ctx->pc = 0x207D60u;
    // 0x207d60: 0x3e00008  jr          $ra
    ctx->pc = 0x207D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207D60u;
        // 0x207d64: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207D60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x207D68u;
}
