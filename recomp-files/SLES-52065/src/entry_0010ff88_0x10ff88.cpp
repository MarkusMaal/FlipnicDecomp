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

// Function: entry_0010ff88
// Address: 0x10ff88 - 0x10ffac
void entry_0010ff88_0x10ff88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ff88_0x10ff88");
#endif

    ctx->pc = 0x10ff88u;

    // 0x10ff88: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x10ff88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x10ff8c: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x10ff8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x10ff90: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x10FF90u;
    {
        const bool branch_taken_0x10ff90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10ff90) {
            ctx->pc = 0x10FF30u;
            return;
        }
    }
    ctx->pc = 0x10FF98u;
    // 0x10ff98: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x10ff98u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
    // 0x10ff9c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x10ff9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10ffa0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10ffa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x10ffa4: 0x100000bf  b           . + 4 + (0xBF << 2)
    ctx->pc = 0x10FFA4u;
    {
        const bool branch_taken_0x10ffa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FFA4u;
        // 0x10ffa8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ffa4) {
            ctx->pc = 0x1102A4u;
            return;
        }
    }
    ctx->pc = 0x10FFACu;
}
