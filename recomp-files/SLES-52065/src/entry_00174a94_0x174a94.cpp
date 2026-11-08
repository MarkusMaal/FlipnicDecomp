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

// Function: entry_00174a94
// Address: 0x174a94 - 0x174ab4
void entry_00174a94_0x174a94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174a94_0x174a94");
#endif

    switch (ctx->pc) {
        case 0x174ab0u: goto label_174ab0;
        default: break;
    }

    ctx->pc = 0x174a94u;

    // 0x174a94: 0x8e0200dc  lw          $v0, 0xDC($s0)
    ctx->pc = 0x174a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x174a98: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x174A98u;
    {
        const bool branch_taken_0x174a98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x174A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174A98u;
        // 0x174a9c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174a98) {
            ctx->pc = 0x174AB4u;
            return;
        }
    }
    ctx->pc = 0x174AA0u;
    // 0x174aa0: 0xae0200d8  sw          $v0, 0xD8($s0)
    ctx->pc = 0x174aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 2));
    // 0x174aa4: 0x8e0200d8  lw          $v0, 0xD8($s0)
    ctx->pc = 0x174aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x174aa8: 0xc040168  jal         func_1005A0
    ctx->pc = 0x174AA8u;
    SET_GPR_U32(ctx, 31, 0x174AB0u);
    ctx->pc = 0x174AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174AA8u;
    // 0x174aac: 0x22100  sll         $a0, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x174AA8u, 0x174AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174AB0u;
label_174ab0:
    // 0x174ab0: 0xae0200dc  sw          $v0, 0xDC($s0)
    ctx->pc = 0x174ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 2));
    ctx->pc = 0x174ab4u;
}
