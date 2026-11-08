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

// Function: entry_00205d7c
// Address: 0x205d7c - 0x205d88
void entry_00205d7c_0x205d7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00205d7c_0x205d7c");
#endif

    ctx->pc = 0x205d7cu;

    // 0x205d7c: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x205d7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x205d80: 0x248200ff  addiu       $v0, $a0, 0xFF
    ctx->pc = 0x205d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 255));
    // 0x205d84: 0x0  nop
    ctx->pc = 0x205d84u;
    // NOP
    ctx->pc = 0x205d88u;
}
