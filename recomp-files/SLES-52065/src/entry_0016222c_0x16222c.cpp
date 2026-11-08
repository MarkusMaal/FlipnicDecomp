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

// Function: entry_0016222c
// Address: 0x16222c - 0x162244
void entry_0016222c_0x16222c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016222c_0x16222c");
#endif

    ctx->pc = 0x16222cu;

    // 0x16222c: 0x0  nop
    ctx->pc = 0x16222cu;
    // NOP
    // 0x162230: 0xa4102a  slt         $v0, $a1, $a0
    ctx->pc = 0x162230u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x162234: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x162234u;
    {
        const bool branch_taken_0x162234 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x162238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162234u;
        // 0x162238: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162234) {
            ctx->pc = 0x162200u;
            return;
        }
    }
    ctx->pc = 0x16223Cu;
    // 0x16223c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16223Cu;
    {
        const bool branch_taken_0x16223c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16223Cu;
        // 0x162240: 0x864301f4  lh          $v1, 0x1F4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 500)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16223c) {
            ctx->pc = 0x162250u;
            return;
        }
    }
    ctx->pc = 0x162244u;
}
