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
// Address: 0x1aaf98 - 0x1aaf9c
void caseD_1_0x1aaf98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x1aaf98");
#endif

    ctx->pc = 0x1aaf98u;

    // 0x1aaf98: 0xa28006d8  sb          $zero, 0x6D8($s4)
    ctx->pc = 0x1aaf98u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1752), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1aaf9cu;
}
