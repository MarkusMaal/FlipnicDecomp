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

// Function: entry_00201e34
// Address: 0x201e34 - 0x201e58
void entry_00201e34_0x201e34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00201e34_0x201e34");
#endif

    ctx->pc = 0x201e34u;

label_201e34:
    // 0x201e34: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x201e34u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x201e38: 0x0  nop
    ctx->pc = 0x201e38u;
    // NOP
    // 0x201e3c: 0x0  nop
    ctx->pc = 0x201e3cu;
    // NOP
    // 0x201e40: 0x0  nop
    ctx->pc = 0x201e40u;
    // NOP
    // 0x201e44: 0x0  nop
    ctx->pc = 0x201e44u;
    // NOP
    // 0x201e48: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x201E48u;
    {
        const bool branch_taken_0x201e48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x201e48) {
            ctx->pc = 0x201E4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201E48u;
            // 0x201e4c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x201E34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_201e34;
        }
    }
    ctx->pc = 0x201E50u;
    // 0x201e50: 0x3e00008  jr          $ra
    ctx->pc = 0x201E50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201E50u;
        // 0x201e54: 0x871023  subu        $v0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201E50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201E58u;
}
