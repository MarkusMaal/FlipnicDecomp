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

// Function: entry_00205e28
// Address: 0x205e28 - 0x205e30
void entry_00205e28_0x205e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00205e28_0x205e28");
#endif

    ctx->pc = 0x205e28u;

    // 0x205e28: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x205e28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x205e2c: 0x0  nop
    ctx->pc = 0x205e2cu;
    // NOP
    ctx->pc = 0x205e30u;
}
