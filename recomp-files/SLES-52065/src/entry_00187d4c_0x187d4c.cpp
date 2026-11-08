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

// Function: entry_00187d4c
// Address: 0x187d4c - 0x187d54
void entry_00187d4c_0x187d4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187d4c_0x187d4c");
#endif

    ctx->pc = 0x187d4cu;

    // 0x187d4c: 0x0  nop
    ctx->pc = 0x187d4cu;
    // NOP
    // 0x187d50: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x187d50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->pc = 0x187d54u;
}
