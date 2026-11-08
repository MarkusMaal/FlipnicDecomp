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

// Function: entry_001c9074
// Address: 0x1c9074 - 0x1c9090
void entry_001c9074_0x1c9074(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c9074_0x1c9074");
#endif

    switch (ctx->pc) {
        case 0x1c907cu: goto label_1c907c;
        default: break;
    }

    ctx->pc = 0x1c9074u;

    // 0x1c9074: 0xc072e84  jal         func_1CBA10
    ctx->pc = 0x1C9074u;
    SET_GPR_U32(ctx, 31, 0x1C907Cu);
    ctx->pc = 0x1C9078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9074u;
    // 0x1c9078: 0x8e04006c  lw          $a0, 0x6C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBA10u, 0x1C9074u, 0x1C907Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C907Cu;
label_1c907c:
    // 0x1c907c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1c907cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c9080: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C9080u;
    {
        const bool branch_taken_0x1c9080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c9080) {
            ctx->pc = 0x1C9090u;
            return;
        }
    }
    ctx->pc = 0x1C9088u;
    // 0x1c9088: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C9088u;
    {
        const bool branch_taken_0x1c9088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C908Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9088u;
        // 0x1c908c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9088) {
            ctx->pc = 0x1C90B0u;
            return;
        }
    }
    ctx->pc = 0x1C9090u;
}
