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

// Function: entry_001ddf7c
// Address: 0x1ddf7c - 0x1ddf88
void entry_001ddf7c_0x1ddf7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ddf7c_0x1ddf7c");
#endif

    ctx->pc = 0x1ddf7cu;

    // 0x1ddf7c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1ddf7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1ddf80: 0xae36001c  sw          $s6, 0x1C($s1)
    ctx->pc = 0x1ddf80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 22));
    // 0x1ddf84: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1ddf84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x1ddf88u;
}
