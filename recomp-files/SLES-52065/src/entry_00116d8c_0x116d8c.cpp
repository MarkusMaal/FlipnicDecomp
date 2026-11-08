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

// Function: entry_00116d8c
// Address: 0x116d8c - 0x116d9c
void entry_00116d8c_0x116d8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116d8c_0x116d8c");
#endif

    ctx->pc = 0x116d8cu;

    // 0x116d8c: 0x0  nop
    ctx->pc = 0x116d8cu;
    // NOP
    // 0x116d90: 0xa0e60000  sb          $a2, 0x0($a3)
    ctx->pc = 0x116d90u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x116d94: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x116d94u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x116d98: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x116d98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    ctx->pc = 0x116d9cu;
}
