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

// Function: entry_001ad86c
// Address: 0x1ad86c - 0x1ad880
void entry_001ad86c_0x1ad86c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ad86c_0x1ad86c");
#endif

    ctx->pc = 0x1ad86cu;

    // 0x1ad86c: 0x8e2307f8  lw          $v1, 0x7F8($s1)
    ctx->pc = 0x1ad86cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2040)));
    // 0x1ad870: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AD870u;
    {
        const bool branch_taken_0x1ad870 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad870) {
            ctx->pc = 0x1AD880u;
            return;
        }
    }
    ctx->pc = 0x1AD878u;
    // 0x1ad878: 0x1000008d  b           . + 4 + (0x8D << 2)
    ctx->pc = 0x1AD878u;
    {
        const bool branch_taken_0x1ad878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad878) {
            ctx->pc = 0x1ADAB0u;
            return;
        }
    }
    ctx->pc = 0x1AD880u;
}
