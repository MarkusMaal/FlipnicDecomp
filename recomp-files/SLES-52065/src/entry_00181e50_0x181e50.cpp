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

// Function: entry_00181e50
// Address: 0x181e50 - 0x181e54
void entry_00181e50_0x181e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00181e50_0x181e50");
#endif

    ctx->pc = 0x181e50u;

    // 0x181e50: 0x8f84865c  lw          $a0, -0x79A4($gp)
    ctx->pc = 0x181e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936156)));
    ctx->pc = 0x181e54u;
}
