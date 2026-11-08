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

// Function: entry_001e0d70
// Address: 0x1e0d70 - 0x1e0d7c
void entry_001e0d70_0x1e0d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e0d70_0x1e0d70");
#endif

    ctx->pc = 0x1e0d70u;

    // 0x1e0d70: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1e0d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e0d74: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x1e0d74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x1e0d78: 0xac820018  sw          $v0, 0x18($a0)
    ctx->pc = 0x1e0d78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
    ctx->pc = 0x1e0d7cu;
}
