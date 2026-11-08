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

// Function: entry_0011eff0
// Address: 0x11eff0 - 0x11eff4
void entry_0011eff0_0x11eff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011eff0_0x11eff0");
#endif

    ctx->pc = 0x11eff0u;

    // 0x11eff0: 0x8e630098  lw          $v1, 0x98($s3)
    ctx->pc = 0x11eff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 152)));
    ctx->pc = 0x11eff4u;
}
