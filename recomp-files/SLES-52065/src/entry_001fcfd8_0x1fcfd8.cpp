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

// Function: entry_001fcfd8
// Address: 0x1fcfd8 - 0x1fcfdc
void entry_001fcfd8_0x1fcfd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fcfd8_0x1fcfd8");
#endif

    ctx->pc = 0x1fcfd8u;

    // 0x1fcfd8: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x1fcfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    ctx->pc = 0x1fcfdcu;
}
