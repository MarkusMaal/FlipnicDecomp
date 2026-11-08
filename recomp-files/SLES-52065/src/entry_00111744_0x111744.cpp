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

// Function: entry_00111744
// Address: 0x111744 - 0x111750
void entry_00111744_0x111744(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111744_0x111744");
#endif

    ctx->pc = 0x111744u;

    // 0x111744: 0x0  nop
    ctx->pc = 0x111744u;
    // NOP
    // 0x111748: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x111748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x11174c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x11174cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    ctx->pc = 0x111750u;
}
