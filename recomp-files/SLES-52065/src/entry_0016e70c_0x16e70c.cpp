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

// Function: entry_0016e70c
// Address: 0x16e70c - 0x16e720
void entry_0016e70c_0x16e70c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e70c_0x16e70c");
#endif

    ctx->pc = 0x16e70cu;

    // 0x16e70c: 0x0  nop
    ctx->pc = 0x16e70cu;
    // NOP
    // 0x16e710: 0x86230214  lh          $v1, 0x214($s1)
    ctx->pc = 0x16e710u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 532)));
    // 0x16e714: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x16e714u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x16e718: 0x1460ffb8  bnez        $v1, . + 4 + (-0x48 << 2)
    ctx->pc = 0x16E718u;
    {
        const bool branch_taken_0x16e718 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16e718) {
            ctx->pc = 0x16E5FCu;
            return;
        }
    }
    ctx->pc = 0x16E720u;
}
