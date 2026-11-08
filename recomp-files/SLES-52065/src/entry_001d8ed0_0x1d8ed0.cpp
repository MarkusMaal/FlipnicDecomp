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

// Function: entry_001d8ed0
// Address: 0x1d8ed0 - 0x1d8ed4
void entry_001d8ed0_0x1d8ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d8ed0_0x1d8ed0");
#endif

    ctx->pc = 0x1d8ed0u;

    // 0x1d8ed0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1d8ed0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->pc = 0x1d8ed4u;
}
