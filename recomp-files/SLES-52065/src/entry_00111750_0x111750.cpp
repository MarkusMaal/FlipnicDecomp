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

// Function: entry_00111750
// Address: 0x111750 - 0x11176c
void entry_00111750_0x111750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111750_0x111750");
#endif

    ctx->pc = 0x111750u;

    // 0x111750: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x111750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x111754: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x111754u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x111758: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x111758u;
    {
        const bool branch_taken_0x111758 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x111758) {
            ctx->pc = 0x1116F8u;
            return;
        }
    }
    ctx->pc = 0x111760u;
    // 0x111760: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x111760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x111764: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x111764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x111768: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x111768u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x11176cu;
}
