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

// Function: entry_00116e04
// Address: 0x116e04 - 0x116e14
void entry_00116e04_0x116e04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116e04_0x116e04");
#endif

    ctx->pc = 0x116e04u;

    // 0x116e04: 0x0  nop
    ctx->pc = 0x116e04u;
    // NOP
    // 0x116e08: 0xa0a60000  sb          $a2, 0x0($a1)
    ctx->pc = 0x116e08u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x116e0c: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x116e0cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x116e10: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x116e10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->pc = 0x116e14u;
}
