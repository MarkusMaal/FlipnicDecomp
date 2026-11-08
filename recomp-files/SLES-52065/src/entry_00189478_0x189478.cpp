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

// Function: entry_00189478
// Address: 0x189478 - 0x189484
void entry_00189478_0x189478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189478_0x189478");
#endif

    ctx->pc = 0x189478u;

    // 0x189478: 0xd1082a  slt         $at, $a2, $s1
    ctx->pc = 0x189478u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x18947c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x18947Cu;
    {
        const bool branch_taken_0x18947c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x18947c) {
            ctx->pc = 0x1894A0u;
            return;
        }
    }
    ctx->pc = 0x189484u;
}
