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

// Function: entry_00152204
// Address: 0x152204 - 0x15220c
void entry_00152204_0x152204(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00152204_0x152204");
#endif

    ctx->pc = 0x152204u;

    // 0x152204: 0x0  nop
    ctx->pc = 0x152204u;
    // NOP
    // 0x152208: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x152208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    ctx->pc = 0x15220cu;
}
