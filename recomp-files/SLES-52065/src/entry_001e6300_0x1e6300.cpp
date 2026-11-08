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

// Function: entry_001e6300
// Address: 0x1e6300 - 0x1e630c
void entry_001e6300_0x1e6300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e6300_0x1e6300");
#endif

    ctx->pc = 0x1e6300u;

    // 0x1e6300: 0x97a20068  lhu         $v0, 0x68($sp)
    ctx->pc = 0x1e6300u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1e6304: 0xafb20078  sw          $s2, 0x78($sp)
    ctx->pc = 0x1e6304u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 18));
    // 0x1e6308: 0xa7a2007e  sh          $v0, 0x7E($sp)
    ctx->pc = 0x1e6308u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 126), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1e630cu;
}
