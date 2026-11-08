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

// Function: entry_00116e90
// Address: 0x116e90 - 0x116e98
void entry_00116e90_0x116e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116e90_0x116e90");
#endif

    ctx->pc = 0x116e90u;

    // 0x116e90: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x116e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x116e94: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x116e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    ctx->pc = 0x116e98u;
}
