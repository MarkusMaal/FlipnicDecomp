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

// Function: entry_00116e48
// Address: 0x116e48 - 0x116e50
void entry_00116e48_0x116e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116e48_0x116e48");
#endif

    ctx->pc = 0x116e48u;

    // 0x116e48: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x116e48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x116e4c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x116e4cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    ctx->pc = 0x116e50u;
}
