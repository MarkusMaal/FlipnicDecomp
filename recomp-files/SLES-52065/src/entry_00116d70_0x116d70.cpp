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

// Function: entry_00116d70
// Address: 0x116d70 - 0x116d78
void entry_00116d70_0x116d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116d70_0x116d70");
#endif

    ctx->pc = 0x116d70u;

    // 0x116d70: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x116d70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x116d74: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x116d74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    ctx->pc = 0x116d78u;
}
