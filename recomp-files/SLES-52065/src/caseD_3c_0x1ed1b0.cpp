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

// Function: caseD_3c
// Address: 0x1ed1b0 - 0x1ed1b4
void caseD_3c_0x1ed1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3c_0x1ed1b0");
#endif

    ctx->pc = 0x1ed1b0u;

    // 0x1ed1b0: 0x2407006c  addiu       $a3, $zero, 0x6C
    ctx->pc = 0x1ed1b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    ctx->pc = 0x1ed1b4u;
}
