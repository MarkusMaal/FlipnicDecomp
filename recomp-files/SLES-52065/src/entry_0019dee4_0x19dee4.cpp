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

// Function: entry_0019dee4
// Address: 0x19dee4 - 0x19def0
void entry_0019dee4_0x19dee4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019dee4_0x19dee4");
#endif

    ctx->pc = 0x19dee4u;

    // 0x19dee4: 0x0  nop
    ctx->pc = 0x19dee4u;
    // NOP
    // 0x19dee8: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x19dee8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x19deec: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x19deecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    ctx->pc = 0x19def0u;
}
