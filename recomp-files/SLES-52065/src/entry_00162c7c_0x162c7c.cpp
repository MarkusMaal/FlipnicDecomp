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

// Function: entry_00162c7c
// Address: 0x162c7c - 0x162c80
void entry_00162c7c_0x162c7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00162c7c_0x162c7c");
#endif

    ctx->pc = 0x162c7cu;

    // 0x162c7c: 0x27a20220  addiu       $v0, $sp, 0x220
    ctx->pc = 0x162c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    ctx->pc = 0x162c80u;
}
