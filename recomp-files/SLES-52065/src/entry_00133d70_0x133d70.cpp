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

// Function: entry_00133d70
// Address: 0x133d70 - 0x133d78
void entry_00133d70_0x133d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00133d70_0x133d70");
#endif

    ctx->pc = 0x133d70u;

    // 0x133d70: 0x8fb102f8  lw          $s1, 0x2F8($sp)
    ctx->pc = 0x133d70u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 760)));
    // 0x133d74: 0x0  nop
    ctx->pc = 0x133d74u;
    // NOP
    ctx->pc = 0x133d78u;
}
