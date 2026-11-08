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

// Function: entry_00190b94
// Address: 0x190b94 - 0x190bb8
void entry_00190b94_0x190b94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00190b94_0x190b94");
#endif

    ctx->pc = 0x190b94u;

label_190b94:
    // 0x190b94: 0xa61021  addu        $v0, $a1, $a2
    ctx->pc = 0x190b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x190b98: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x190b98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x190b9c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x190B9Cu;
    {
        const bool branch_taken_0x190b9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x190BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190B9Cu;
        // 0x190ba0: 0xe61021  addu        $v0, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190b9c) {
            ctx->pc = 0x190BB8u;
            return;
        }
    }
    ctx->pc = 0x190BA4u;
    // 0x190ba4: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x190ba4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x190ba8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x190ba8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x190bac: 0x28c20010  slti        $v0, $a2, 0x10
    ctx->pc = 0x190bacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x190bb0: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x190BB0u;
    {
        const bool branch_taken_0x190bb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x190bb0) {
            ctx->pc = 0x190B94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_190b94;
        }
    }
    ctx->pc = 0x190BB8u;
}
