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

// Function: entry_001f3878
// Address: 0x1f3878 - 0x1f3898
void entry_001f3878_0x1f3878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f3878_0x1f3878");
#endif

    ctx->pc = 0x1f3878u;

label_1f3878:
    // 0x1f3878: 0x2543fdc0  addiu       $v1, $t2, -0x240
    ctx->pc = 0x1f3878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4294966720));
    // 0x1f387c: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1f387cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1f3880: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1f3880u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1f3884: 0xa0640018  sb          $a0, 0x18($v1)
    ctx->pc = 0x1f3884u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 24), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f3888: 0x2291021  addu        $v0, $s1, $t1
    ctx->pc = 0x1f3888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 9)));
    // 0x1f388c: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x1f388cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f3890: 0x5460fff9  bnel        $v1, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1F3890u;
    {
        const bool branch_taken_0x1f3890 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f3890) {
            ctx->pc = 0x1F3894u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F3890u;
            // 0x1f3894: 0x90440000  lbu         $a0, 0x0($v0) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F3878u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f3878;
        }
    }
    ctx->pc = 0x1F3898u;
}
