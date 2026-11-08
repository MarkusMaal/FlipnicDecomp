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

// Function: entry_00173cdc
// Address: 0x173cdc - 0x173ce4
void entry_00173cdc_0x173cdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00173cdc_0x173cdc");
#endif

    ctx->pc = 0x173cdcu;

    // 0x173cdc: 0x0  nop
    ctx->pc = 0x173cdcu;
    // NOP
    // 0x173ce0: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x173ce0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    ctx->pc = 0x173ce4u;
}
