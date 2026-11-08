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

// Function: entry_0013c2c8
// Address: 0x13c2c8 - 0x13c2cc
void entry_0013c2c8_0x13c2c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c2c8_0x13c2c8");
#endif

    ctx->pc = 0x13c2c8u;

    // 0x13c2c8: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x13c2c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    ctx->pc = 0x13c2ccu;
}
