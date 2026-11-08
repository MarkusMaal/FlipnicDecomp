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

// Function: entry_001ffa4c
// Address: 0x1ffa4c - 0x1ffa68
void entry_001ffa4c_0x1ffa4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ffa4c_0x1ffa4c");
#endif

    ctx->pc = 0x1ffa4cu;

label_1ffa4c:
    // 0x1ffa4c: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x1ffa4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1ffa50: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1ffa50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1ffa54: 0x0  nop
    ctx->pc = 0x1ffa54u;
    // NOP
    // 0x1ffa58: 0x0  nop
    ctx->pc = 0x1ffa58u;
    // NOP
    // 0x1ffa5c: 0x0  nop
    ctx->pc = 0x1ffa5cu;
    // NOP
    // 0x1ffa60: 0x14c2fffa  bne         $a2, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1FFA60u;
    {
        const bool branch_taken_0x1ffa60 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FFA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFA60u;
        // 0x1ffa64: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffa60) {
            ctx->pc = 0x1FFA4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ffa4c;
        }
    }
    ctx->pc = 0x1FFA68u;
}
