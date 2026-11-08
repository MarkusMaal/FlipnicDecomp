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

// Function: entry_00195194
// Address: 0x195194 - 0x19519c
void entry_00195194_0x195194(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195194_0x195194");
#endif

    ctx->pc = 0x195194u;

    // 0x195194: 0x0  nop
    ctx->pc = 0x195194u;
    // NOP
    // 0x195198: 0x26120004  addiu       $s2, $s0, 0x4
    ctx->pc = 0x195198u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->pc = 0x19519cu;
}
