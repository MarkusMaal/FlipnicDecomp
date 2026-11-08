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

// Function: entry_001bbb74
// Address: 0x1bbb74 - 0x1bbb78
void entry_001bbb74_0x1bbb74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bbb74_0x1bbb74");
#endif

    ctx->pc = 0x1bbb74u;

    // 0x1bbb74: 0xae950000  sw          $s5, 0x0($s4)
    ctx->pc = 0x1bbb74u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 21));
    ctx->pc = 0x1bbb78u;
}
