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

// Function: entry_001546c0
// Address: 0x1546c0 - 0x1546c4
void entry_001546c0_0x1546c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001546c0_0x1546c0");
#endif

    ctx->pc = 0x1546c0u;

    // 0x1546c0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1546c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    ctx->pc = 0x1546c4u;
}
