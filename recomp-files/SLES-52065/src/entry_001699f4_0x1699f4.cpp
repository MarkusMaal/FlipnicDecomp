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

// Function: entry_001699f4
// Address: 0x1699f4 - 0x1699f8
void entry_001699f4_0x1699f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001699f4_0x1699f4");
#endif

    ctx->pc = 0x1699f4u;

    // 0x1699f4: 0xac8501d4  sw          $a1, 0x1D4($a0)
    ctx->pc = 0x1699f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 468), GPR_U32(ctx, 5));
    ctx->pc = 0x1699f8u;
}
