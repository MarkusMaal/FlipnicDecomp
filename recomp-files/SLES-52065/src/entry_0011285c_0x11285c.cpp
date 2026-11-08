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

// Function: entry_0011285c
// Address: 0x11285c - 0x112864
void entry_0011285c_0x11285c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011285c_0x11285c");
#endif

    ctx->pc = 0x11285cu;

    // 0x11285c: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x11285cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x112860: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x112860u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x112864u;
}
