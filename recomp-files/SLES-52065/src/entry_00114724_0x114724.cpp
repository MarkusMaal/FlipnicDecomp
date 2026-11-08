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

// Function: entry_00114724
// Address: 0x114724 - 0x114728
void entry_00114724_0x114724(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114724_0x114724");
#endif

    ctx->pc = 0x114724u;

    // 0x114724: 0x3c023db8  lui         $v0, 0x3DB8
    ctx->pc = 0x114724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15800 << 16));
    ctx->pc = 0x114728u;
}
