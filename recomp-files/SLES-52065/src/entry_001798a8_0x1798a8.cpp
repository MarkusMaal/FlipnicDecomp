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

// Function: entry_001798a8
// Address: 0x1798a8 - 0x1798b4
void entry_001798a8_0x1798a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001798a8_0x1798a8");
#endif

    ctx->pc = 0x1798a8u;

    // 0x1798a8: 0xe5082a  slt         $at, $a3, $a1
    ctx->pc = 0x1798a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1798ac: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1798ACu;
    {
        const bool branch_taken_0x1798ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1798ac) {
            ctx->pc = 0x1798D0u;
            return;
        }
    }
    ctx->pc = 0x1798B4u;
}
