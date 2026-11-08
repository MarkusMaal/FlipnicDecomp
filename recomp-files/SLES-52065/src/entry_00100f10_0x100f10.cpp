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

// Function: entry_00100f10
// Address: 0x100f10 - 0x100f30
void entry_00100f10_0x100f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100f10_0x100f10");
#endif

    ctx->pc = 0x100f10u;

label_100f10:
    // 0x100f10: 0x8f848218  lw          $a0, -0x7DE8($gp)
    ctx->pc = 0x100f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x100f14: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x100f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x100f18: 0x71102a  slt         $v0, $v1, $s1
    ctx->pc = 0x100f18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x100f1c: 0x8c842c1c  lw          $a0, 0x2C1C($a0)
    ctx->pc = 0x100f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11292)));
    // 0x100f20: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x100f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x100f24: 0xa0850042  sb          $a1, 0x42($a0)
    ctx->pc = 0x100f24u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 66), (uint8_t)GPR_U32(ctx, 5));
    // 0x100f28: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x100F28u;
    {
        const bool branch_taken_0x100f28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x100F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100F28u;
        // 0x100f2c: 0x24c60050  addiu       $a2, $a2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100f28) {
            ctx->pc = 0x100F10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_100f10;
        }
    }
    ctx->pc = 0x100F30u;
}
