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

// Function: entry_001113ec
// Address: 0x1113ec - 0x1113f8
void entry_001113ec_0x1113ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001113ec_0x1113ec");
#endif

    ctx->pc = 0x1113ecu;

    // 0x1113ec: 0x0  nop
    ctx->pc = 0x1113ecu;
    // NOP
    // 0x1113f0: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x1113f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x1113f4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1113f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x1113f8u;
}
