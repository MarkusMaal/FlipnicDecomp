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

// Function: entry_00182210
// Address: 0x182210 - 0x18222c
void entry_00182210_0x182210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00182210_0x182210");
#endif

    switch (ctx->pc) {
        case 0x182218u: goto label_182218;
        default: break;
    }

    ctx->pc = 0x182210u;

label_182210:
    // 0x182210: 0xc04c178  jal         func_1305E0
    ctx->pc = 0x182210u;
    SET_GPR_U32(ctx, 31, 0x182218u);
    ctx->pc = 0x182214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182210u;
    // 0x182214: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1305E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1305E0u, 0x182210u, 0x182218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182218u;
label_182218:
    // 0x182218: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x182218u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x18221c: 0x0  nop
    ctx->pc = 0x18221cu;
    // NOP
    // 0x182220: 0x0  nop
    ctx->pc = 0x182220u;
    // NOP
    // 0x182224: 0x1630fffa  bne         $s1, $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x182224u;
    {
        const bool branch_taken_0x182224 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        if (branch_taken_0x182224) {
            ctx->pc = 0x182210u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_182210;
        }
    }
    ctx->pc = 0x18222Cu;
}
