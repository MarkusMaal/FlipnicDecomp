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

// Function: entry_001311fc
// Address: 0x1311fc - 0x131224
void entry_001311fc_0x1311fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001311fc_0x1311fc");
#endif

    ctx->pc = 0x1311fcu;

label_1311fc:
    // 0x1311fc: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x1311fcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x131200: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x131200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x131204: 0x80c20001  lb          $v0, 0x1($a2)
    ctx->pc = 0x131204u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x131208: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x131208u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x13120c: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x13120cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x131210: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x131210u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x131214: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x131214u;
    {
        const bool branch_taken_0x131214 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x131218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131214u;
        // 0x131218: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131214) {
            ctx->pc = 0x1311FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1311fc;
        }
    }
    ctx->pc = 0x13121Cu;
    // 0x13121c: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x13121cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x131220: 0xace20040  sw          $v0, 0x40($a3)
    ctx->pc = 0x131220u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 64), GPR_U32(ctx, 2));
    ctx->pc = 0x131224u;
}
