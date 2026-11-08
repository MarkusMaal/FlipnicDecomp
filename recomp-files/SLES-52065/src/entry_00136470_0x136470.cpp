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

// Function: entry_00136470
// Address: 0x136470 - 0x136480
void entry_00136470_0x136470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136470_0x136470");
#endif

    ctx->pc = 0x136470u;

    // 0x136470: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x136470u;
    {
        const bool branch_taken_0x136470 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x136470) {
            ctx->pc = 0x136480u;
            return;
        }
    }
    ctx->pc = 0x136478u;
    // 0x136478: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x136478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x13647c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x13647cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x136480u;
}
