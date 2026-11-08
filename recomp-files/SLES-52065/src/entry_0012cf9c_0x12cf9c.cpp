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

// Function: entry_0012cf9c
// Address: 0x12cf9c - 0x12cfa0
void entry_0012cf9c_0x12cf9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012cf9c_0x12cf9c");
#endif

    ctx->pc = 0x12cf9cu;

    // 0x12cf9c: 0x10082a  slt         $at, $zero, $s0
    ctx->pc = 0x12cf9cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    ctx->pc = 0x12cfa0u;
}
