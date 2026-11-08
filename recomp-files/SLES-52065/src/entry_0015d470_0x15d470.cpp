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

// Function: entry_0015d470
// Address: 0x15d470 - 0x15d478
void entry_0015d470_0x15d470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015d470_0x15d470");
#endif

    ctx->pc = 0x15d470u;

    // 0x15d470: 0x84e60004  lh          $a2, 0x4($a3)
    ctx->pc = 0x15d470u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x15d474: 0x0  nop
    ctx->pc = 0x15d474u;
    // NOP
    ctx->pc = 0x15d478u;
}
