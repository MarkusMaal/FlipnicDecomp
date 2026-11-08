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

// Function: entry_00134464
// Address: 0x134464 - 0x134484
void entry_00134464_0x134464(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134464_0x134464");
#endif

    switch (ctx->pc) {
        case 0x134470u: goto label_134470;
        default: break;
    }

    ctx->pc = 0x134464u;

    // 0x134464: 0x8e2400a8  lw          $a0, 0xA8($s1)
    ctx->pc = 0x134464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 168)));
    // 0x134468: 0xc05f494  jal         func_17D250
    ctx->pc = 0x134468u;
    SET_GPR_U32(ctx, 31, 0x134470u);
    ctx->pc = 0x13446Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134468u;
    // 0x13446c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D250u, 0x134468u, 0x134470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134470u;
label_134470:
    // 0x134470: 0x8e2400a4  lw          $a0, 0xA4($s1)
    ctx->pc = 0x134470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
    // 0x134474: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x134474u;
    {
        const bool branch_taken_0x134474 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x134474) {
            ctx->pc = 0x134484u;
            return;
        }
    }
    ctx->pc = 0x13447Cu;
    // 0x13447c: 0xc04c178  jal         func_1305E0
    ctx->pc = 0x13447Cu;
    SET_GPR_U32(ctx, 31, 0x134484u);
    ctx->pc = 0x1305E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1305E0u, 0x13447Cu, 0x134484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134484u;
}
