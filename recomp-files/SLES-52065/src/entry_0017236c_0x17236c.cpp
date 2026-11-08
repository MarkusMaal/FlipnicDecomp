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

// Function: entry_0017236c
// Address: 0x17236c - 0x172370
void entry_0017236c_0x17236c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017236c_0x17236c");
#endif

    ctx->pc = 0x17236cu;

    // 0x17236c: 0x26220088  addiu       $v0, $s1, 0x88
    ctx->pc = 0x17236cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 136));
    ctx->pc = 0x172370u;
}
