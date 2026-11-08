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

// Function: entry_00141d60
// Address: 0x141d60 - 0x141d74
void entry_00141d60_0x141d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141d60_0x141d60");
#endif

    ctx->pc = 0x141d60u;

    // 0x141d60: 0x293182b  sltu        $v1, $s4, $s3
    ctx->pc = 0x141d60u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x141d64: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x141D64u;
    {
        const bool branch_taken_0x141d64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x141d64) {
            ctx->pc = 0x141D34u;
            return;
        }
    }
    ctx->pc = 0x141D6Cu;
    // 0x141d6c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x141D6Cu;
    {
        const bool branch_taken_0x141d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x141d6c) {
            ctx->pc = 0x141DB8u;
            return;
        }
    }
    ctx->pc = 0x141D74u;
}
