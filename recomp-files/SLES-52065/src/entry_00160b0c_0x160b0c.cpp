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

// Function: entry_00160b0c
// Address: 0x160b0c - 0x160b28
void entry_00160b0c_0x160b0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160b0c_0x160b0c");
#endif

    ctx->pc = 0x160b0cu;

label_160b0c:
    // 0x160b0c: 0x8ea4001c  lw          $a0, 0x1C($s5)
    ctx->pc = 0x160b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x160b10: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x160b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x160b14: 0x54182a  slt         $v1, $v0, $s4
    ctx->pc = 0x160b14u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x160b18: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x160b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x160b1c: 0xa0800043  sb          $zero, 0x43($a0)
    ctx->pc = 0x160b1cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 67), (uint8_t)GPR_U32(ctx, 0));
    // 0x160b20: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x160B20u;
    {
        const bool branch_taken_0x160b20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x160B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160B20u;
        // 0x160b24: 0x24a50050  addiu       $a1, $a1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160b20) {
            ctx->pc = 0x160B0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_160b0c;
        }
    }
    ctx->pc = 0x160B28u;
}
