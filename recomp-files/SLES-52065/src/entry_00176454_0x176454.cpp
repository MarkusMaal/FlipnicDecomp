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

// Function: entry_00176454
// Address: 0x176454 - 0x17645c
void entry_00176454_0x176454(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00176454_0x176454");
#endif

    ctx->pc = 0x176454u;

    // 0x176454: 0x0  nop
    ctx->pc = 0x176454u;
    // NOP
    // 0x176458: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x176458u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    ctx->pc = 0x17645cu;
}
