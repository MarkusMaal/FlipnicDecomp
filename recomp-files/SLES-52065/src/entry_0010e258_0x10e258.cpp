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

// Function: entry_0010e258
// Address: 0x10e258 - 0x10e268
void entry_0010e258_0x10e258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e258_0x10e258");
#endif

    ctx->pc = 0x10e258u;

    // 0x10e258: 0x8e030220  lw          $v1, 0x220($s0)
    ctx->pc = 0x10e258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x10e25c: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x10e25cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x10e260: 0x1460ffdf  bnez        $v1, . + 4 + (-0x21 << 2)
    ctx->pc = 0x10E260u;
    {
        const bool branch_taken_0x10e260 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x10e260) {
            ctx->pc = 0x10E1E0u;
            return;
        }
    }
    ctx->pc = 0x10E268u;
}
