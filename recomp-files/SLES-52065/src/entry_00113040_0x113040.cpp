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

// Function: entry_00113040
// Address: 0x113040 - 0x11304c
void entry_00113040_0x113040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113040_0x113040");
#endif

    ctx->pc = 0x113040u;

    // 0x113040: 0xe5182a  slt         $v1, $a3, $a1
    ctx->pc = 0x113040u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x113044: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x113044u;
    {
        const bool branch_taken_0x113044 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x113044) {
            ctx->pc = 0x112FFCu;
            return;
        }
    }
    ctx->pc = 0x11304Cu;
}
