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

// Function: entry_0018ac18
// Address: 0x18ac18 - 0x18ac1c
void entry_0018ac18_0x18ac18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ac18_0x18ac18");
#endif

    ctx->pc = 0x18ac18u;

    // 0x18ac18: 0xaf9280dc  sw          $s2, -0x7F24($gp)
    ctx->pc = 0x18ac18u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934748), GPR_U32(ctx, 18));
    ctx->pc = 0x18ac1cu;
}
