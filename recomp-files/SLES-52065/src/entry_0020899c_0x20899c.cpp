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

// Function: entry_0020899c
// Address: 0x20899c - 0x2089a0
void entry_0020899c_0x20899c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020899c_0x20899c");
#endif

    ctx->pc = 0x20899cu;

    // 0x20899c: 0x3c03ff80  lui         $v1, 0xFF80
    ctx->pc = 0x20899cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65408 << 16));
    ctx->pc = 0x2089a0u;
}
