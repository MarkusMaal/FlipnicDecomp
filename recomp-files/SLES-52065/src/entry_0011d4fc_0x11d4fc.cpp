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

// Function: entry_0011d4fc
// Address: 0x11d4fc - 0x11d508
void entry_0011d4fc_0x11d4fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d4fc_0x11d4fc");
#endif

    ctx->pc = 0x11d4fcu;

    // 0x11d4fc: 0x0  nop
    ctx->pc = 0x11d4fcu;
    // NOP
    // 0x11d500: 0x8e820038  lw          $v0, 0x38($s4)
    ctx->pc = 0x11d500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
    // 0x11d504: 0xac620038  sw          $v0, 0x38($v1)
    ctx->pc = 0x11d504u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 2));
    ctx->pc = 0x11d508u;
}
