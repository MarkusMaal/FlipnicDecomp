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

// Function: entry_00117734
// Address: 0x117734 - 0x117738
void entry_00117734_0x117734(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117734_0x117734");
#endif

    ctx->pc = 0x117734u;

    // 0x117734: 0x8f83831c  lw          $v1, -0x7CE4($gp)
    ctx->pc = 0x117734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935324)));
    ctx->pc = 0x117738u;
}
