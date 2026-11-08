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

// Function: entry_001115d4
// Address: 0x1115d4 - 0x1115e8
void entry_001115d4_0x1115d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001115d4_0x1115d4");
#endif

    ctx->pc = 0x1115d4u;

    // 0x1115d4: 0x0  nop
    ctx->pc = 0x1115d4u;
    // NOP
    // 0x1115d8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1115d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1115dc: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x1115dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1115e0: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x1115E0u;
    {
        const bool branch_taken_0x1115e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1115e0) {
            ctx->pc = 0x111584u;
            return;
        }
    }
    ctx->pc = 0x1115E8u;
}
