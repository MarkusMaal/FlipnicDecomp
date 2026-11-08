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

// Function: entry_001598e8
// Address: 0x1598e8 - 0x1598ec
void entry_001598e8_0x1598e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001598e8_0x1598e8");
#endif

    ctx->pc = 0x1598e8u;

    // 0x1598e8: 0x8e2802e8  lw          $t0, 0x2E8($s1)
    ctx->pc = 0x1598e8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 744)));
    ctx->pc = 0x1598ecu;
}
