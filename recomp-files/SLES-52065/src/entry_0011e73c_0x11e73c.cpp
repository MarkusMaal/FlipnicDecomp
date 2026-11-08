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

// Function: entry_0011e73c
// Address: 0x11e73c - 0x11e740
void entry_0011e73c_0x11e73c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e73c_0x11e73c");
#endif

    ctx->pc = 0x11e73cu;

    // 0x11e73c: 0x24110040  addiu       $s1, $zero, 0x40
    ctx->pc = 0x11e73cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->pc = 0x11e740u;
}
