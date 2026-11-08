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

// Function: entry_001e9594
// Address: 0x1e9594 - 0x1e9598
void entry_001e9594_0x1e9594(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e9594_0x1e9594");
#endif

    ctx->pc = 0x1e9594u;

    // 0x1e9594: 0x8f380004  lw          $t8, 0x4($t9)
    ctx->pc = 0x1e9594u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 4)));
    ctx->pc = 0x1e9598u;
}
