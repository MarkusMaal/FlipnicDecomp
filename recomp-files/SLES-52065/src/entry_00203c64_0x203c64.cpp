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

// Function: entry_00203c64
// Address: 0x203c64 - 0x203c68
void entry_00203c64_0x203c64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203c64_0x203c64");
#endif

    ctx->pc = 0x203c64u;

    // 0x203c64: 0x8fa301ec  lw          $v1, 0x1EC($sp)
    ctx->pc = 0x203c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    ctx->pc = 0x203c68u;
}
