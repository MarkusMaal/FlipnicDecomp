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

// Function: entry_0017e870
// Address: 0x17e870 - 0x17e878
void entry_0017e870_0x17e870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e870_0x17e870");
#endif

    ctx->pc = 0x17e870u;

    // 0x17e870: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x17e870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17e874: 0x0  nop
    ctx->pc = 0x17e874u;
    // NOP
    ctx->pc = 0x17e878u;
}
