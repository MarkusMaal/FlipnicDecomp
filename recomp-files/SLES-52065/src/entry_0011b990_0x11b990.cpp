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

// Function: entry_0011b990
// Address: 0x11b990 - 0x11b9a0
void entry_0011b990_0x11b990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b990_0x11b990");
#endif

    ctx->pc = 0x11b990u;

    // 0x11b990: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11B990u;
    {
        const bool branch_taken_0x11b990 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x11b990) {
            ctx->pc = 0x11B9A0u;
            return;
        }
    }
    ctx->pc = 0x11B998u;
    // 0x11b998: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x11b998u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x11b99c: 0x2228823  subu        $s1, $s1, $v0
    ctx->pc = 0x11b99cu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->pc = 0x11b9a0u;
}
