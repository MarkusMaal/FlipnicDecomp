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

// Function: entry_0011fdf4
// Address: 0x11fdf4 - 0x11fdf8
void entry_0011fdf4_0x11fdf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011fdf4_0x11fdf4");
#endif

    ctx->pc = 0x11fdf4u;

    // 0x11fdf4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x11fdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x11fdf8u;
}
