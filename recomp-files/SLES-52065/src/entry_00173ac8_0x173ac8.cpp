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

// Function: entry_00173ac8
// Address: 0x173ac8 - 0x173ae4
void entry_00173ac8_0x173ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00173ac8_0x173ac8");
#endif

    ctx->pc = 0x173ac8u;

    // 0x173ac8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x173ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x173acc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x173accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x173ad0: 0x84420004  lh          $v0, 0x4($v0)
    ctx->pc = 0x173ad0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x173ad4: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x173AD4u;
    {
        const bool branch_taken_0x173ad4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x173ad4) {
            ctx->pc = 0x173AE4u;
            return;
        }
    }
    ctx->pc = 0x173ADCu;
    // 0x173adc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x173ADCu;
    {
        const bool branch_taken_0x173adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x173adc) {
            ctx->pc = 0x173AE8u;
            return;
        }
    }
    ctx->pc = 0x173AE4u;
}
