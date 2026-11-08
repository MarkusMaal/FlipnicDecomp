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

// Function: entry_001f1c10
// Address: 0x1f1c10 - 0x1f1c38
void entry_001f1c10_0x1f1c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f1c10_0x1f1c10");
#endif

    ctx->pc = 0x1f1c10u;

label_1f1c10:
    // 0x1f1c10: 0x2c51021  addu        $v0, $s6, $a1
    ctx->pc = 0x1f1c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
    // 0x1f1c14: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x1f1c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1f1c18: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1f1c18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f1c1c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1f1c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1f1c20: 0xb1102a  slt         $v0, $a1, $s1
    ctx->pc = 0x1f1c20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1f1c24: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1f1c24u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f1c28: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1F1C28u;
    {
        const bool branch_taken_0x1f1c28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1c28) {
            ctx->pc = 0x1F1C10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f1c10;
        }
    }
    ctx->pc = 0x1F1C30u;
    // 0x1f1c30: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F1C30u;
    {
        const bool branch_taken_0x1f1c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1C30u;
        // 0x1f1c34: 0xae510c10  sw          $s1, 0xC10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3088), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1c30) {
            ctx->pc = 0x1F1C48u;
            return;
        }
    }
    ctx->pc = 0x1F1C38u;
}
