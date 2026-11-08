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

// Function: entry_00127d68
// Address: 0x127d68 - 0x127d74
void entry_00127d68_0x127d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00127d68_0x127d68");
#endif

    ctx->pc = 0x127d68u;

    // 0x127d68: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x127d68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x127d6c: 0x1630fff7  bne         $s1, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x127D6Cu;
    {
        const bool branch_taken_0x127d6c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        if (branch_taken_0x127d6c) {
            ctx->pc = 0x127D4Cu;
            return;
        }
    }
    ctx->pc = 0x127D74u;
}
