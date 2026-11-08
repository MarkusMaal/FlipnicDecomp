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

// Function: entry_00195080
// Address: 0x195080 - 0x19508c
void entry_00195080_0x195080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195080_0x195080");
#endif

    ctx->pc = 0x195080u;

    // 0x195080: 0x28a30010  slti        $v1, $a1, 0x10
    ctx->pc = 0x195080u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x195084: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x195084u;
    {
        const bool branch_taken_0x195084 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x195084) {
            ctx->pc = 0x195060u;
            return;
        }
    }
    ctx->pc = 0x19508Cu;
}
