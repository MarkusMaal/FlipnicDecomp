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

// Function: entry_00153700
// Address: 0x153700 - 0x153704
void entry_00153700_0x153700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00153700_0x153700");
#endif

    ctx->pc = 0x153700u;

    // 0x153700: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x153700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    ctx->pc = 0x153704u;
}
