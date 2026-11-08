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

// Function: entry_001105b4
// Address: 0x1105b4 - 0x1105c8
void entry_001105b4_0x1105b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001105b4_0x1105b4");
#endif

    ctx->pc = 0x1105b4u;

    // 0x1105b4: 0x0  nop
    ctx->pc = 0x1105b4u;
    // NOP
    // 0x1105b8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1105b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1105bc: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1105bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1105c0: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x1105C0u;
    {
        const bool branch_taken_0x1105c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1105c0) {
            ctx->pc = 0x110564u;
            return;
        }
    }
    ctx->pc = 0x1105C8u;
}
