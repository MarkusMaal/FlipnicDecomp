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

// Function: entry_001ef130
// Address: 0x1ef130 - 0x1ef160
void entry_001ef130_0x1ef130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ef130_0x1ef130");
#endif

    ctx->pc = 0x1ef130u;

label_1ef130:
    // 0x1ef130: 0x1462821  addu        $a1, $t2, $a2
    ctx->pc = 0x1ef130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x1ef134: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1ef134u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ef138: 0x1062021  addu        $a0, $t0, $a2
    ctx->pc = 0x1ef138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x1ef13c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1ef13cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1ef140: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x1ef140u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ef144: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1ef144u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ef148: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x1ef148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1ef14c: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x1ef14cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1ef150: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1EF150u;
    {
        const bool branch_taken_0x1ef150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EF154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF150u;
        // 0x1ef154: 0x1261021  addu        $v0, $t1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef150) {
            ctx->pc = 0x1EF130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ef130;
        }
    }
    ctx->pc = 0x1EF158u;
    // 0x1ef158: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x1EF158u;
    {
        const bool branch_taken_0x1ef158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF158u;
        // 0x1ef15c: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef158) {
            ctx->pc = 0x1EF314u;
            return;
        }
    }
    ctx->pc = 0x1EF160u;
}
