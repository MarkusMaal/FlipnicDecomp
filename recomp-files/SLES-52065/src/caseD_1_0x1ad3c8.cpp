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
// Address: 0x1ad3c8 - 0x1ad3cc
void caseD_1_0x1ad3c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x1ad3c8");
#endif

    ctx->pc = 0x1ad3c8u;

    // 0x1ad3c8: 0xa22006c0  sb          $zero, 0x6C0($s1)
    ctx->pc = 0x1ad3c8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1728), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1ad3ccu;
}
