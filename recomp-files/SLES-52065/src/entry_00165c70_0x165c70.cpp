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

// Function: entry_00165c70
// Address: 0x165c70 - 0x165c80
void entry_00165c70_0x165c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165c70_0x165c70");
#endif

    ctx->pc = 0x165c70u;

    // 0x165c70: 0x8059990  j           func_166640
    ctx->pc = 0x165C70u;
    ctx->pc = 0x166640u;
    FUN_00166640_0x166640(rdram, ctx, runtime); return;
    ctx->pc = 0x165C78u;
    // 0x165c78: 0x0  nop
    ctx->pc = 0x165c78u;
    // NOP
    // 0x165c7c: 0x0  nop
    ctx->pc = 0x165c7cu;
    // NOP
    ctx->pc = 0x165c80u;
}
