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
// Address: 0x19fe68 - 0x19fe6c
void caseD_0_0x19fe68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x19fe68");
#endif

    ctx->pc = 0x19fe68u;

    // 0x19fe68: 0xac860320  sw          $a2, 0x320($a0)
    ctx->pc = 0x19fe68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 800), GPR_U32(ctx, 6));
    ctx->pc = 0x19fe6cu;
}
