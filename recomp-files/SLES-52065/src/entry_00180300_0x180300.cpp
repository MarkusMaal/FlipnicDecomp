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

// Function: entry_00180300
// Address: 0x180300 - 0x180308
void entry_00180300_0x180300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00180300_0x180300");
#endif

    ctx->pc = 0x180300u;

    // 0x180300: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x180300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x180304: 0xaf82865c  sw          $v0, -0x79A4($gp)
    ctx->pc = 0x180304u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936156), GPR_U32(ctx, 2));
    ctx->pc = 0x180308u;
}
