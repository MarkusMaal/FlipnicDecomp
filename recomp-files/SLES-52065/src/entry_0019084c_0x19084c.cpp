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

// Function: entry_0019084c
// Address: 0x19084c - 0x19085c
void entry_0019084c_0x19084c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019084c_0x19084c");
#endif

    ctx->pc = 0x19084cu;

    // 0x19084c: 0x0  nop
    ctx->pc = 0x19084cu;
    // NOP
    // 0x190850: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x190850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x190854: 0xa0601084  sb          $zero, 0x1084($v1)
    ctx->pc = 0x190854u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4228), (uint8_t)GPR_U32(ctx, 0));
    // 0x190858: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x190858u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    ctx->pc = 0x19085cu;
}
