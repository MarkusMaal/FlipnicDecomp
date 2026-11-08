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

// Function: entry_00205e30
// Address: 0x205e30 - 0x205e54
void entry_00205e30_0x205e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00205e30_0x205e30");
#endif

    ctx->pc = 0x205e30u;

label_205e30:
    // 0x205e30: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x205e30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x205e34: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x205e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x205e38: 0xe8182a  slt         $v1, $a3, $t0
    ctx->pc = 0x205e38u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x205e3c: 0xa0490000  sb          $t1, 0x0($v0)
    ctx->pc = 0x205e3cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 9));
    // 0x205e40: 0x0  nop
    ctx->pc = 0x205e40u;
    // NOP
    // 0x205e44: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x205E44u;
    {
        const bool branch_taken_0x205e44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x205e44) {
            ctx->pc = 0x205E30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_205e30;
        }
    }
    ctx->pc = 0x205E4Cu;
    // 0x205e4c: 0x1000ffde  b           . + 4 + (-0x22 << 2)
    ctx->pc = 0x205E4Cu;
    {
        const bool branch_taken_0x205e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205E4Cu;
        // 0x205e50: 0x80a80000  lb          $t0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205e4c) {
            ctx->pc = 0x205DC8u;
            return;
        }
    }
    ctx->pc = 0x205E54u;
}
