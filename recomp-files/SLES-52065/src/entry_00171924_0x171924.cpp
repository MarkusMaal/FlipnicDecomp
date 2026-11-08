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

// Function: entry_00171924
// Address: 0x171924 - 0x17192c
void entry_00171924_0x171924(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171924_0x171924");
#endif

    ctx->pc = 0x171924u;

    // 0x171924: 0x0  nop
    ctx->pc = 0x171924u;
    // NOP
    // 0x171928: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x171928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    ctx->pc = 0x17192cu;
}
