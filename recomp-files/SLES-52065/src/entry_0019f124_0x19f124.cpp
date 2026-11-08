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

// Function: entry_0019f124
// Address: 0x19f124 - 0x19f128
void entry_0019f124_0x19f124(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f124_0x19f124");
#endif

    ctx->pc = 0x19f124u;

    // 0x19f124: 0xac600320  sw          $zero, 0x320($v1)
    ctx->pc = 0x19f124u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 800), GPR_U32(ctx, 0));
    ctx->pc = 0x19f128u;
}
