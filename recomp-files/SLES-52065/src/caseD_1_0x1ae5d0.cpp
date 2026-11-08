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

// Function: caseD_1
// Address: 0x1ae5d0 - 0x1ae5d4
void caseD_1_0x1ae5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x1ae5d0");
#endif

    ctx->pc = 0x1ae5d0u;

    // 0x1ae5d0: 0xa28006b8  sb          $zero, 0x6B8($s4)
    ctx->pc = 0x1ae5d0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1720), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1ae5d4u;
}
