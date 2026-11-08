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

// Function: entry_0020650c
// Address: 0x20650c - 0x206510
void entry_0020650c_0x20650c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020650c_0x20650c");
#endif

    ctx->pc = 0x20650cu;

    // 0x20650c: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x20650cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    ctx->pc = 0x206510u;
}
