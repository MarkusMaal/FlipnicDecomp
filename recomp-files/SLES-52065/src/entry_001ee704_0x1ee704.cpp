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

// Function: entry_001ee704
// Address: 0x1ee704 - 0x1ee708
void entry_001ee704_0x1ee704(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ee704_0x1ee704");
#endif

    ctx->pc = 0x1ee704u;

    // 0x1ee704: 0xac45003c  sw          $a1, 0x3C($v0)
    ctx->pc = 0x1ee704u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 5));
    ctx->pc = 0x1ee708u;
}
