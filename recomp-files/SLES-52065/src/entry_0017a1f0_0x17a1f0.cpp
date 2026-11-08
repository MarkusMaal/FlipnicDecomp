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

// Function: entry_0017a1f0
// Address: 0x17a1f0 - 0x17a1f4
void entry_0017a1f0_0x17a1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a1f0_0x17a1f0");
#endif

    ctx->pc = 0x17a1f0u;

    // 0x17a1f0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x17a1f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    ctx->pc = 0x17a1f4u;
}
