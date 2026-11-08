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

// Function: caseD_fffffffe
// Address: 0x192324 - 0x19232c
void caseD_fffffffe_0x192324(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_fffffffe_0x192324");
#endif

    ctx->pc = 0x192324u;

    // 0x192324: 0x0  nop
    ctx->pc = 0x192324u;
    // NOP
    // 0x192328: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x192328u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x19232cu;
}
