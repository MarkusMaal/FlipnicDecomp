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

// Function: entry_001f0230
// Address: 0x1f0230 - 0x1f0250
void entry_001f0230_0x1f0230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f0230_0x1f0230");
#endif

    ctx->pc = 0x1f0230u;

label_1f0230:
    // 0x1f0230: 0x2251021  addu        $v0, $s1, $a1
    ctx->pc = 0x1f0230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x1f0234: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x1f0234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1f0238: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1f0238u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f023c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1f023cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1f0240: 0xb0102a  slt         $v0, $a1, $s0
    ctx->pc = 0x1f0240u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1f0244: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1f0244u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f0248: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1F0248u;
    {
        const bool branch_taken_0x1f0248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0248) {
            ctx->pc = 0x1F0230u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f0230;
        }
    }
    ctx->pc = 0x1F0250u;
}
