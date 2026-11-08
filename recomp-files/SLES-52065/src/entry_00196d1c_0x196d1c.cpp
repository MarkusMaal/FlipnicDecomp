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

// Function: entry_00196d1c
// Address: 0x196d1c - 0x196d30
void entry_00196d1c_0x196d1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00196d1c_0x196d1c");
#endif

    ctx->pc = 0x196d1cu;

    // 0x196d1c: 0x0  nop
    ctx->pc = 0x196d1cu;
    // NOP
    // 0x196d20: 0x8ea30340  lw          $v1, 0x340($s5)
    ctx->pc = 0x196d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 832)));
    // 0x196d24: 0x16230002  bne         $s1, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x196D24u;
    {
        const bool branch_taken_0x196d24 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x196d24) {
            ctx->pc = 0x196D30u;
            return;
        }
    }
    ctx->pc = 0x196D2Cu;
    // 0x196d2c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x196d2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x196d30u;
}
