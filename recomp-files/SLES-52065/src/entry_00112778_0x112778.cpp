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

// Function: entry_00112778
// Address: 0x112778 - 0x112798
void entry_00112778_0x112778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112778_0x112778");
#endif

    ctx->pc = 0x112778u;

    // 0x112778: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x112778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x11277c: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x11277cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x112780: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x112780u;
    {
        const bool branch_taken_0x112780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x112780) {
            ctx->pc = 0x112750u;
            return;
        }
    }
    ctx->pc = 0x112788u;
    // 0x112788: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x112788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11278c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11278cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x112790: 0x10000110  b           . + 4 + (0x110 << 2)
    ctx->pc = 0x112790u;
    {
        const bool branch_taken_0x112790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112790u;
        // 0x112794: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112790) {
            ctx->pc = 0x112BD4u;
            return;
        }
    }
    ctx->pc = 0x112798u;
}
