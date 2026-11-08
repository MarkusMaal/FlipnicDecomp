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

// Function: entry_001ed210
// Address: 0x1ed210 - 0x1ed218
void entry_001ed210_0x1ed210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ed210_0x1ed210");
#endif

    ctx->pc = 0x1ed210u;

    // 0x1ed210: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1ed210u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1ed214: 0x0  nop
    ctx->pc = 0x1ed214u;
    // NOP
    ctx->pc = 0x1ed218u;
}
