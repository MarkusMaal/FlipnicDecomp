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

// Function: entry_001e6368
// Address: 0x1e6368 - 0x1e6370
void entry_001e6368_0x1e6368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e6368_0x1e6368");
#endif

    ctx->pc = 0x1e6368u;

    // 0x1e6368: 0x97a2007e  lhu         $v0, 0x7E($sp)
    ctx->pc = 0x1e6368u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 126)));
    // 0x1e636c: 0x0  nop
    ctx->pc = 0x1e636cu;
    // NOP
    ctx->pc = 0x1e6370u;
}
