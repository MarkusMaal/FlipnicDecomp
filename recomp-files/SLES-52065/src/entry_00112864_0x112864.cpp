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

// Function: entry_00112864
// Address: 0x112864 - 0x112878
void entry_00112864_0x112864(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112864_0x112864");
#endif

    ctx->pc = 0x112864u;

    // 0x112864: 0x0  nop
    ctx->pc = 0x112864u;
    // NOP
    // 0x112868: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x112868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x11286c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x11286cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x112870: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x112870u;
    {
        const bool branch_taken_0x112870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x112870) {
            ctx->pc = 0x112814u;
            return;
        }
    }
    ctx->pc = 0x112878u;
}
