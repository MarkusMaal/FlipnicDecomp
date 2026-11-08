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

// Function: entry_001fad54
// Address: 0x1fad54 - 0x1fad58
void entry_001fad54_0x1fad54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fad54_0x1fad54");
#endif

    ctx->pc = 0x1fad54u;

    // 0x1fad54: 0x24c5ffff  addiu       $a1, $a2, -0x1
    ctx->pc = 0x1fad54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    ctx->pc = 0x1fad58u;
}
