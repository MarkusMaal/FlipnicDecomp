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

// Function: entry_001e5998
// Address: 0x1e5998 - 0x1e59a0
void entry_001e5998_0x1e5998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e5998_0x1e5998");
#endif

    ctx->pc = 0x1e5998u;

    // 0x1e5998: 0x93a2006f  lbu         $v0, 0x6F($sp)
    ctx->pc = 0x1e5998u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 111)));
    // 0x1e599c: 0x0  nop
    ctx->pc = 0x1e599cu;
    // NOP
    ctx->pc = 0x1e59a0u;
}
