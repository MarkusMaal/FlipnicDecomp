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

// Function: entry_00205d88
// Address: 0x205d88 - 0x205db4
void entry_00205d88_0x205d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00205d88_0x205d88");
#endif

    ctx->pc = 0x205d88u;

label_205d88:
    // 0x205d88: 0xa0490000  sb          $t1, 0x0($v0)
    ctx->pc = 0x205d88u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 9));
    // 0x205d8c: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x205d8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x205d90: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x205d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x205d94: 0x0  nop
    ctx->pc = 0x205d94u;
    // NOP
    // 0x205d98: 0x0  nop
    ctx->pc = 0x205d98u;
    // NOP
    // 0x205d9c: 0x501fffa  bgez        $t0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x205D9Cu;
    {
        const bool branch_taken_0x205d9c = (GPR_S32(ctx, 8) >= 0);
        if (branch_taken_0x205d9c) {
            ctx->pc = 0x205D88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_205d88;
        }
    }
    ctx->pc = 0x205DA4u;
    // 0x205da4: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x205DA4u;
    {
        const bool branch_taken_0x205da4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x205DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205DA4u;
        // 0x205da8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205da4) {
            ctx->pc = 0x205DB4u;
            return;
        }
    }
    ctx->pc = 0x205DACu;
    // 0x205dac: 0x3e00008  jr          $ra
    ctx->pc = 0x205DACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205DACu;
        // 0x205db0: 0x24a2ffff  addiu       $v0, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205DACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205DB4u;
}
