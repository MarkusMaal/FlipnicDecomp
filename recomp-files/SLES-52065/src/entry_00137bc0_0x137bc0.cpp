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

// Function: entry_00137bc0
// Address: 0x137bc0 - 0x137bf0
void entry_00137bc0_0x137bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137bc0_0x137bc0");
#endif

    ctx->pc = 0x137bc0u;

label_137bc0:
    // 0x137bc0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x137bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x137bc4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x137bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x137bc8: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x137bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x137bcc: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x137bccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x137bd0: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x137bd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x137bd4: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x137bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x137bd8: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x137BD8u;
    {
        const bool branch_taken_0x137bd8 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x137BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137BD8u;
        // 0x137bdc: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137bd8) {
            ctx->pc = 0x137BC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_137bc0;
        }
    }
    ctx->pc = 0x137BE0u;
    // 0x137be0: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x137be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x137be4: 0x26520060  addiu       $s2, $s2, 0x60
    ctx->pc = 0x137be4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x137be8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x137be8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x137bec: 0xace20050  sw          $v0, 0x50($a3)
    ctx->pc = 0x137becu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 80), GPR_U32(ctx, 2));
    ctx->pc = 0x137bf0u;
}
