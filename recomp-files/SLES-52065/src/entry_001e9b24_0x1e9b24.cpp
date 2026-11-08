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

// Function: entry_001e9b24
// Address: 0x1e9b24 - 0x1e9b30
void entry_001e9b24_0x1e9b24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e9b24_0x1e9b24");
#endif

    ctx->pc = 0x1e9b24u;

    // 0x1e9b24: 0x0  nop
    ctx->pc = 0x1e9b24u;
    // NOP
    // 0x1e9b28: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1e9b28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1e9b2c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1e9b2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x1e9b30u;
}
