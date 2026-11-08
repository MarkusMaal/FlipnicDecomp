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

// Function: entry_001e941c
// Address: 0x1e941c - 0x1e9424
void entry_001e941c_0x1e941c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e941c_0x1e941c");
#endif

    ctx->pc = 0x1e941cu;

    // 0x1e941c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1e941cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1e9420: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e9420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->pc = 0x1e9424u;
}
