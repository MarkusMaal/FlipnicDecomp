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

// Function: entry_0015eb58
// Address: 0x15eb58 - 0x15eb60
void entry_0015eb58_0x15eb58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015eb58_0x15eb58");
#endif

    ctx->pc = 0x15eb58u;

    // 0x15eb58: 0x26f70050  addiu       $s7, $s7, 0x50
    ctx->pc = 0x15eb58u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 80));
    // 0x15eb5c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x15eb5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x15eb60u;
}
