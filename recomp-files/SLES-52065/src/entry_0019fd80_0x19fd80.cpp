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

// Function: entry_0019fd80
// Address: 0x19fd80 - 0x19fd88
void entry_0019fd80_0x19fd80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019fd80_0x19fd80");
#endif

    ctx->pc = 0x19fd80u;

    // 0x19fd80: 0x8c900320  lw          $s0, 0x320($a0)
    ctx->pc = 0x19fd80u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 800)));
    // 0x19fd84: 0x0  nop
    ctx->pc = 0x19fd84u;
    // NOP
    ctx->pc = 0x19fd88u;
}
