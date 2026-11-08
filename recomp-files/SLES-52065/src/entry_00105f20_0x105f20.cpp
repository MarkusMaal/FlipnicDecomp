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

// Function: entry_00105f20
// Address: 0x105f20 - 0x105f24
void entry_00105f20_0x105f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00105f20_0x105f20");
#endif

    ctx->pc = 0x105f20u;

    // 0x105f20: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x105f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    ctx->pc = 0x105f24u;
}
