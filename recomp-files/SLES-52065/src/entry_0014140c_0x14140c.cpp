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

// Function: entry_0014140c
// Address: 0x14140c - 0x14141c
void entry_0014140c_0x14140c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014140c_0x14140c");
#endif

    ctx->pc = 0x14140cu;

    // 0x14140c: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x14140cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x141410: 0x276082b  sltu        $at, $s3, $s6
    ctx->pc = 0x141410u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x141414: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x141414u;
    {
        const bool branch_taken_0x141414 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x141414) {
            ctx->pc = 0x141438u;
            return;
        }
    }
    ctx->pc = 0x14141Cu;
}
