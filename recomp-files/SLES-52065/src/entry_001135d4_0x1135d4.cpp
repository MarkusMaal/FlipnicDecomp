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

// Function: entry_001135d4
// Address: 0x1135d4 - 0x1135e0
void entry_001135d4_0x1135d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001135d4_0x1135d4");
#endif

    ctx->pc = 0x1135d4u;

    // 0x1135d4: 0x0  nop
    ctx->pc = 0x1135d4u;
    // NOP
    // 0x1135d8: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x1135d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x1135dc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1135dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x1135e0u;
}
