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

// Function: default
// Address: 0x1a6db4 - 0x1a6dbc
void ps2_default_0x1a6db4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2_default_0x1a6db4");
#endif

    ctx->pc = 0x1a6db4u;

    // 0x1a6db4: 0x92020018  lbu         $v0, 0x18($s0)
    ctx->pc = 0x1a6db4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1a6db8: 0x0  nop
    ctx->pc = 0x1a6db8u;
    // NOP
    ctx->pc = 0x1a6dbcu;
}
