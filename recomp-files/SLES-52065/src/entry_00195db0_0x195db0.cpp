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

// Function: entry_00195db0
// Address: 0x195db0 - 0x195dc0
void entry_00195db0_0x195db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195db0_0x195db0");
#endif

    ctx->pc = 0x195db0u;

    // 0x195db0: 0x8065014  j           func_194050
    ctx->pc = 0x195DB0u;
    ctx->pc = 0x194050u;
    FUN_00194050_0x194050(rdram, ctx, runtime); return;
    ctx->pc = 0x195DB8u;
    // 0x195db8: 0x0  nop
    ctx->pc = 0x195db8u;
    // NOP
    // 0x195dbc: 0x0  nop
    ctx->pc = 0x195dbcu;
    // NOP
    ctx->pc = 0x195dc0u;
}
