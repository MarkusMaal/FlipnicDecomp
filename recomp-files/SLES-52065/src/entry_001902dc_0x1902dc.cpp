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

// Function: entry_001902dc
// Address: 0x1902dc - 0x190304
void entry_001902dc_0x1902dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001902dc_0x1902dc");
#endif

    ctx->pc = 0x1902dcu;

label_1902dc:
    // 0x1902dc: 0xc72021  addu        $a0, $a2, $a3
    ctx->pc = 0x1902dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1902e0: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x1902e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1902e4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1902E4u;
    {
        const bool branch_taken_0x1902e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1902e4) {
            ctx->pc = 0x190304u;
            return;
        }
    }
    ctx->pc = 0x1902ECu;
    // 0x1902ec: 0x90850000  lbu         $a1, 0x0($a0)
    ctx->pc = 0x1902ecu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1902f0: 0x1072021  addu        $a0, $t0, $a3
    ctx->pc = 0x1902f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x1902f4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1902f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1902f8: 0x28e30010  slti        $v1, $a3, 0x10
    ctx->pc = 0x1902f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1902fc: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1902FCu;
    {
        const bool branch_taken_0x1902fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x190300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1902FCu;
        // 0x190300: 0xa0850000  sb          $a1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1902fc) {
            ctx->pc = 0x1902DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1902dc;
        }
    }
    ctx->pc = 0x190304u;
}
