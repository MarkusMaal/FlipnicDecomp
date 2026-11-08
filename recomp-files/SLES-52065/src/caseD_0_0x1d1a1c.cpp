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

// Function: caseD_0
// Address: 0x1d1a1c - 0x1d1a24
void caseD_0_0x1d1a1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x1d1a1c");
#endif

    ctx->pc = 0x1d1a1cu;

    // 0x1d1a1c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1d1a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d1a20: 0xaca30020  sw          $v1, 0x20($a1)
    ctx->pc = 0x1d1a20u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 3));
    ctx->pc = 0x1d1a24u;
}
