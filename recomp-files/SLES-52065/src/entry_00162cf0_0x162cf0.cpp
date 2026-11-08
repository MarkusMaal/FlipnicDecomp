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

// Function: entry_00162cf0
// Address: 0x162cf0 - 0x162cf4
void entry_00162cf0_0x162cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00162cf0_0x162cf0");
#endif

    ctx->pc = 0x162cf0u;

    // 0x162cf0: 0x27a20230  addiu       $v0, $sp, 0x230
    ctx->pc = 0x162cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    ctx->pc = 0x162cf4u;
}
