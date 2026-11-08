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

// Function: entry_0012b2c0
// Address: 0x12b2c0 - 0x12b2dc
void entry_0012b2c0_0x12b2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012b2c0_0x12b2c0");
#endif

    ctx->pc = 0x12b2c0u;

label_12b2c0:
    // 0x12b2c0: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x12b2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_12b2c4:
    // 0x12b2c4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_12b2c8:
    if (ctx->pc == 0x12B2C8u) {
        ctx->pc = 0x12B2CCu;
        goto label_12b2cc;
    }
    ctx->pc = 0x12B2C4u;
    {
        const bool branch_taken_0x12b2c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b2c4) {
            ctx->pc = 0x12B2DCu;
            return;
        }
    }
    ctx->pc = 0x12B2CCu;
label_12b2cc:
    // 0x12b2cc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x12b2ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_12b2d0:
    // 0x12b2d0: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x12b2d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_12b2d4:
    // 0x12b2d4: 0x320f809  jalr        $t9
label_12b2d8:
    if (ctx->pc == 0x12B2D8u) {
        ctx->pc = 0x12B2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B2D4u;
        // 0x12b2d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B2DCu;
        goto label_fallthrough_0x12b2d4;
    }
    ctx->pc = 0x12B2D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x12B2DCu);
        ctx->pc = 0x12B2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B2D4u;
        // 0x12b2d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B2D4u, 0x12B2DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x12b2d4:
    ctx->pc = 0x12B2DCu;
}
