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

// Function: entry_00111644
// Address: 0x111644 - 0x111650
void entry_00111644_0x111644(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111644_0x111644");
#endif

    ctx->pc = 0x111644u;

    // 0x111644: 0x0  nop
    ctx->pc = 0x111644u;
    // NOP
    // 0x111648: 0x26940002  addiu       $s4, $s4, 0x2
    ctx->pc = 0x111648u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
    // 0x11164c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x11164cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->pc = 0x111650u;
}
