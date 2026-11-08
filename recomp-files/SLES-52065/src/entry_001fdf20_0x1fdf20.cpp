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

// Function: entry_001fdf20
// Address: 0x1fdf20 - 0x1fdf24
void entry_001fdf20_0x1fdf20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fdf20_0x1fdf20");
#endif

    ctx->pc = 0x1fdf20u;

    // 0x1fdf20: 0x34c20800  ori         $v0, $a2, 0x800
    ctx->pc = 0x1fdf20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2048);
    ctx->pc = 0x1fdf24u;
}
