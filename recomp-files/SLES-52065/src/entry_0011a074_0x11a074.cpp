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

// Function: entry_0011a074
// Address: 0x11a074 - 0x11a084
void entry_0011a074_0x11a074(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a074_0x11a074");
#endif

    ctx->pc = 0x11a074u;

    // 0x11a074: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11A074u;
    {
        const bool branch_taken_0x11a074 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x11a074) {
            ctx->pc = 0x11A084u;
            return;
        }
    }
    ctx->pc = 0x11A07Cu;
    // 0x11a07c: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x11a07cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x11a080: 0x2429023  subu        $s2, $s2, $v0
    ctx->pc = 0x11a080u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    ctx->pc = 0x11a084u;
}
