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

// Function: entry_00116f0c
// Address: 0x116f0c - 0x116f24
void entry_00116f0c_0x116f0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116f0c_0x116f0c");
#endif

    ctx->pc = 0x116f0cu;

    // 0x116f0c: 0x0  nop
    ctx->pc = 0x116f0cu;
    // NOP
    // 0x116f10: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x116f10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x116f14: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x116F14u;
    {
        const bool branch_taken_0x116f14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x116F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116F14u;
        // 0x116f18: 0x304600ff  andi        $a2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x116f14) {
            ctx->pc = 0x116EE4u;
            return;
        }
    }
    ctx->pc = 0x116F1Cu;
    // 0x116f1c: 0x3e00008  jr          $ra
    ctx->pc = 0x116F1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116F1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x116F24u;
}
