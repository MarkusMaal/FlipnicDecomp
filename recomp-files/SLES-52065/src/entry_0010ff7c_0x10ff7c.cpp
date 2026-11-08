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

// Function: entry_0010ff7c
// Address: 0x10ff7c - 0x10ff88
void entry_0010ff7c_0x10ff7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ff7c_0x10ff7c");
#endif

    ctx->pc = 0x10ff7cu;

    // 0x10ff7c: 0x0  nop
    ctx->pc = 0x10ff7cu;
    // NOP
    // 0x10ff80: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x10ff80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x10ff84: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x10ff84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    ctx->pc = 0x10ff88u;
}
