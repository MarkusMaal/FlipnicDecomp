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

// Function: entry_0021ad08
// Address: 0x21ad08 - 0x21ad30
void entry_0021ad08_0x21ad08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021ad08_0x21ad08");
#endif

    ctx->pc = 0x21ad08u;

label_21ad08:
    // 0x21ad08: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x21ad08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x21ad0c: 0xe52021  addu        $a0, $a3, $a1
    ctx->pc = 0x21ad0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x21ad10: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x21ad10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21ad14: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x21ad14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x21ad18: 0x28a20026  slti        $v0, $a1, 0x26
    ctx->pc = 0x21ad18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)38) ? 1 : 0);
    // 0x21ad1c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x21ad1cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x21ad20: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x21AD20u;
    {
        const bool branch_taken_0x21ad20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21ad20) {
            ctx->pc = 0x21AD08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21ad08;
        }
    }
    ctx->pc = 0x21AD28u;
    // 0x21ad28: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x21AD28u;
    {
        const bool branch_taken_0x21ad28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AD28u;
        // 0x21ad2c: 0xdd034700  ld          $v1, 0x4700($t0) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 8), 18176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ad28) {
            ctx->pc = 0x21AD34u;
            return;
        }
    }
    ctx->pc = 0x21AD30u;
}
