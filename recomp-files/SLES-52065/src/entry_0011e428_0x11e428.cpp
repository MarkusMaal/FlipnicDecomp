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

// Function: entry_0011e428
// Address: 0x11e428 - 0x11e42c
void entry_0011e428_0x11e428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e428_0x11e428");
#endif

    ctx->pc = 0x11e428u;

    // 0x11e428: 0x8e510100  lw          $s1, 0x100($s2)
    ctx->pc = 0x11e428u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 256)));
    ctx->pc = 0x11e42cu;
}
