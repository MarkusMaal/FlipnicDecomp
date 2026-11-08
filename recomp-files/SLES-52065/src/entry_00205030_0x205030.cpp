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

// Function: entry_00205030
// Address: 0x205030 - 0x205038
void entry_00205030_0x205030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00205030_0x205030");
#endif

    ctx->pc = 0x205030u;

    // 0x205030: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x205030u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x205034: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x205034u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x205038u;
}
