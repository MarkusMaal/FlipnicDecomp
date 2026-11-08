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

// Function: entry_0020289c
// Address: 0x20289c - 0x2028a4
void entry_0020289c_0x20289c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020289c_0x20289c");
#endif

    ctx->pc = 0x20289cu;

    // 0x20289c: 0x3c120022  lui         $s2, 0x22
    ctx->pc = 0x20289cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)34 << 16));
    // 0x2028a0: 0x26445060  addiu       $a0, $s2, 0x5060
    ctx->pc = 0x2028a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 20576));
    ctx->pc = 0x2028a4u;
}
