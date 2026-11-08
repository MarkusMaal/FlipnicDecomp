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

// Function: entry_00187a2c
// Address: 0x187a2c - 0x187a30
void entry_00187a2c_0x187a2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187a2c_0x187a2c");
#endif

    ctx->pc = 0x187a2cu;

    // 0x187a2c: 0xae900004  sw          $s0, 0x4($s4)
    ctx->pc = 0x187a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 16));
    ctx->pc = 0x187a30u;
}
