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

// Function: entry_001ee878
// Address: 0x1ee878 - 0x1ee87c
void entry_001ee878_0x1ee878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ee878_0x1ee878");
#endif

    ctx->pc = 0x1ee878u;

    // 0x1ee878: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x1ee878u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    ctx->pc = 0x1ee87cu;
}
