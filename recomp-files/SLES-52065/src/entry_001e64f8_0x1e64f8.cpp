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

// Function: entry_001e64f8
// Address: 0x1e64f8 - 0x1e6500
void entry_001e64f8_0x1e64f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e64f8_0x1e64f8");
#endif

    ctx->pc = 0x1e64f8u;

    // 0x1e64f8: 0x97a2006e  lhu         $v0, 0x6E($sp)
    ctx->pc = 0x1e64f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 110)));
    // 0x1e64fc: 0x0  nop
    ctx->pc = 0x1e64fcu;
    // NOP
    ctx->pc = 0x1e6500u;
}
