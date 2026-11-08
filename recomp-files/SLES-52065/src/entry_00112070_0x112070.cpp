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

// Function: entry_00112070
// Address: 0x112070 - 0x112090
void entry_00112070_0x112070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112070_0x112070");
#endif

    ctx->pc = 0x112070u;

    // 0x112070: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x112070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x112074: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x112074u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x112078: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x112078u;
    {
        const bool branch_taken_0x112078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x112078) {
            ctx->pc = 0x112048u;
            return;
        }
    }
    ctx->pc = 0x112080u;
    // 0x112080: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x112080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x112084: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x112084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x112088: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x112088u;
    {
        const bool branch_taken_0x112088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11208Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112088u;
        // 0x11208c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112088) {
            ctx->pc = 0x112334u;
            return;
        }
    }
    ctx->pc = 0x112090u;
}
