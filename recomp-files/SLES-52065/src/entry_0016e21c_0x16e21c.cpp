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

// Function: entry_0016e21c
// Address: 0x16e21c - 0x16e220
void entry_0016e21c_0x16e21c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e21c_0x16e21c");
#endif

    ctx->pc = 0x16e21cu;

    // 0x16e21c: 0x240200c0  addiu       $v0, $zero, 0xC0
    ctx->pc = 0x16e21cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    ctx->pc = 0x16e220u;
}
