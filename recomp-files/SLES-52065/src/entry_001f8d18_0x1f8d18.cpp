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

// Function: entry_001f8d18
// Address: 0x1f8d18 - 0x1f8d1c
void entry_001f8d18_0x1f8d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f8d18_0x1f8d18");
#endif

    ctx->pc = 0x1f8d18u;

    // 0x1f8d18: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x1f8d18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
    ctx->pc = 0x1f8d1cu;
}
