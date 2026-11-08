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

// Function: entry_0015d4b0
// Address: 0x15d4b0 - 0x15d4bc
void entry_0015d4b0_0x15d4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015d4b0_0x15d4b0");
#endif

    ctx->pc = 0x15d4b0u;

    // 0x15d4b0: 0x84e50006  lh          $a1, 0x6($a3)
    ctx->pc = 0x15d4b0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x15d4b4: 0x0  nop
    ctx->pc = 0x15d4b4u;
    // NOP
    // 0x15d4b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15d4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x15d4bcu;
}
