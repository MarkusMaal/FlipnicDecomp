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

// Function: entry_0011155c
// Address: 0x11155c - 0x111568
void entry_0011155c_0x11155c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011155c_0x11155c");
#endif

    ctx->pc = 0x11155cu;

    // 0x11155c: 0x0  nop
    ctx->pc = 0x11155cu;
    // NOP
    // 0x111560: 0x254a0002  addiu       $t2, $t2, 0x2
    ctx->pc = 0x111560u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
    // 0x111564: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x111564u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    ctx->pc = 0x111568u;
}
