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

// Function: entry_002024fc
// Address: 0x2024fc - 0x202500
void entry_002024fc_0x2024fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002024fc_0x2024fc");
#endif

    ctx->pc = 0x2024fcu;

    // 0x2024fc: 0x24020065  addiu       $v0, $zero, 0x65
    ctx->pc = 0x2024fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    ctx->pc = 0x202500u;
}
