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

// Function: entry_00141838
// Address: 0x141838 - 0x141854
void entry_00141838_0x141838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141838_0x141838");
#endif

    switch (ctx->pc) {
        case 0x141844u: goto label_141844;
        default: break;
    }

    ctx->pc = 0x141838u;

label_141838:
    // 0x141838: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x141838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14183c: 0xc050668  jal         func_1419A0
    ctx->pc = 0x14183Cu;
    SET_GPR_U32(ctx, 31, 0x141844u);
    ctx->pc = 0x141840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14183Cu;
    // 0x141840: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1419A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1419A0u, 0x14183Cu, 0x141844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141844u;
label_141844:
    // 0x141844: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x141844u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x141848: 0x0  nop
    ctx->pc = 0x141848u;
    // NOP
    // 0x14184c: 0x1651fffa  bne         $s2, $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x14184Cu;
    {
        const bool branch_taken_0x14184c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 17));
        if (branch_taken_0x14184c) {
            ctx->pc = 0x141838u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_141838;
        }
    }
    ctx->pc = 0x141854u;
}
