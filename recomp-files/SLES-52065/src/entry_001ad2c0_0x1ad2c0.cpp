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

// Function: entry_001ad2c0
// Address: 0x1ad2c0 - 0x1ad2e8
void entry_001ad2c0_0x1ad2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ad2c0_0x1ad2c0");
#endif

    switch (ctx->pc) {
        case 0x1ad2d0u: goto label_1ad2d0;
        default: break;
    }

    ctx->pc = 0x1ad2c0u;

    // 0x1ad2c0: 0x8e450028  lw          $a1, 0x28($s2)
    ctx->pc = 0x1ad2c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x1ad2c4: 0x8e460024  lw          $a2, 0x24($s2)
    ctx->pc = 0x1ad2c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1ad2c8: 0xc057040  jal         func_15C100
    ctx->pc = 0x1AD2C8u;
    SET_GPR_U32(ctx, 31, 0x1AD2D0u);
    ctx->pc = 0x1AD2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD2C8u;
    // 0x1ad2cc: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x1AD2C8u, 0x1AD2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD2D0u;
label_1ad2d0:
    // 0x1ad2d0: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x1ad2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1ad2d4: 0x2352021  addu        $a0, $s1, $s5
    ctx->pc = 0x1ad2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
    // 0x1ad2d8: 0x26b50020  addiu       $s5, $s5, 0x20
    ctx->pc = 0x1ad2d8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x1ad2dc: 0xac830674  sw          $v1, 0x674($a0)
    ctx->pc = 0x1ad2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1652), GPR_U32(ctx, 3));
    // 0x1ad2e0: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1AD2E0u;
    {
        const bool branch_taken_0x1ad2e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD2E0u;
        // 0x1ad2e4: 0xac820678  sw          $v0, 0x678($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1656), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad2e0) {
            ctx->pc = 0x1AD36Cu;
            return;
        }
    }
    ctx->pc = 0x1AD2E8u;
}
