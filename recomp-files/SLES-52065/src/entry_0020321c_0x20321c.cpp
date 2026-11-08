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

// Function: entry_0020321c
// Address: 0x20321c - 0x203228
void entry_0020321c_0x20321c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020321c_0x20321c");
#endif

    ctx->pc = 0x20321cu;

    // 0x20321c: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20321Cu;
    {
        const bool branch_taken_0x20321c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x20321c) {
            ctx->pc = 0x20322Cu;
            return;
        }
    }
    ctx->pc = 0x203224u;
    // 0x203224: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x203224u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->pc = 0x203228u;
}
