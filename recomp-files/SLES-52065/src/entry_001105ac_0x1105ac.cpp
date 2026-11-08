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

// Function: entry_001105ac
// Address: 0x1105ac - 0x1105b4
void entry_001105ac_0x1105ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001105ac_0x1105ac");
#endif

    ctx->pc = 0x1105acu;

    // 0x1105ac: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x1105acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x1105b0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1105b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x1105b4u;
}
