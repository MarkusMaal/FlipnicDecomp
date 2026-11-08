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

// Function: entry_00101344
// Address: 0x101344 - 0x10134c
void entry_00101344_0x101344(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101344_0x101344");
#endif

    ctx->pc = 0x101344u;

    // 0x101344: 0x0  nop
    ctx->pc = 0x101344u;
    // NOP
    // 0x101348: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x101348u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x10134cu;
}
