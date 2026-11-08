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

// Function: entry_001e60c4
// Address: 0x1e60c4 - 0x1e60c8
void entry_001e60c4_0x1e60c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e60c4_0x1e60c4");
#endif

    ctx->pc = 0x1e60c4u;

    // 0x1e60c4: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x1e60c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    ctx->pc = 0x1e60c8u;
}
