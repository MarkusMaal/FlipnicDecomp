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

// Function: entry_00110f04
// Address: 0x110f04 - 0x110f0c
void entry_00110f04_0x110f04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110f04_0x110f04");
#endif

    ctx->pc = 0x110f04u;

    // 0x110f04: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x110f04u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x110f08: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x110f08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->pc = 0x110f0cu;
}
