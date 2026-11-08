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

// Function: entry_001a4074
// Address: 0x1a4074 - 0x1a4080
void entry_001a4074_0x1a4074(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4074_0x1a4074");
#endif

    ctx->pc = 0x1a4074u;

    // 0x1a4074: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1a4074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1a4078: 0xac40093c  sw          $zero, 0x93C($v0)
    ctx->pc = 0x1a4078u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2364), GPR_U32(ctx, 0));
    // 0x1a407c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1a407cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    ctx->pc = 0x1a4080u;
}
