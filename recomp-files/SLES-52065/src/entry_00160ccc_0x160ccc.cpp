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

// Function: entry_00160ccc
// Address: 0x160ccc - 0x160cf8
void entry_00160ccc_0x160ccc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160ccc_0x160ccc");
#endif

    ctx->pc = 0x160cccu;

label_160ccc:
    // 0x160ccc: 0x8ea5001c  lw          $a1, 0x1C($s5)
    ctx->pc = 0x160cccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x160cd0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x160cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x160cd4: 0x74202a  slt         $a0, $v1, $s4
    ctx->pc = 0x160cd4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x160cd8: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x160cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x160cdc: 0x90a5003f  lbu         $a1, 0x3F($a1)
    ctx->pc = 0x160cdcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 63)));
    // 0x160ce0: 0x24e70050  addiu       $a3, $a3, 0x50
    ctx->pc = 0x160ce0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 80));
    // 0x160ce4: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x160ce4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x160ce8: 0x90c50000  lbu         $a1, 0x0($a2)
    ctx->pc = 0x160ce8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x160cec: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x160cecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x160cf0: 0x1480fff6  bnez        $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x160CF0u;
    {
        const bool branch_taken_0x160cf0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x160CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160CF0u;
        // 0x160cf4: 0xa0c50000  sb          $a1, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160cf0) {
            ctx->pc = 0x160CCCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_160ccc;
        }
    }
    ctx->pc = 0x160CF8u;
}
