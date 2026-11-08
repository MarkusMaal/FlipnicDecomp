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

// Function: entry_0015fabc
// Address: 0x15fabc - 0x15fac4
void entry_0015fabc_0x15fabc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015fabc_0x15fabc");
#endif

    ctx->pc = 0x15fabcu;

    // 0x15fabc: 0x0  nop
    ctx->pc = 0x15fabcu;
    // NOP
    // 0x15fac0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x15fac0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    ctx->pc = 0x15fac4u;
}
