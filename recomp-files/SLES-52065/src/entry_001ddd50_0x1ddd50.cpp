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

// Function: entry_001ddd50
// Address: 0x1ddd50 - 0x1ddd5c
void entry_001ddd50_0x1ddd50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ddd50_0x1ddd50");
#endif

    ctx->pc = 0x1ddd50u;

    // 0x1ddd50: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x1ddd50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1ddd54: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1ddd54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1ddd58: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1ddd58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    ctx->pc = 0x1ddd5cu;
}
