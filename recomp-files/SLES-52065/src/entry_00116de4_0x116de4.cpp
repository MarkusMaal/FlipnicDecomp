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

// Function: entry_00116de4
// Address: 0x116de4 - 0x116df0
void entry_00116de4_0x116de4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116de4_0x116de4");
#endif

    ctx->pc = 0x116de4u;

    // 0x116de4: 0x0  nop
    ctx->pc = 0x116de4u;
    // NOP
    // 0x116de8: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x116de8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x116dec: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x116decu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    ctx->pc = 0x116df0u;
}
