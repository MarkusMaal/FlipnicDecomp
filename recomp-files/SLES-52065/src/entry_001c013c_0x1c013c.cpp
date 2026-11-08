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

// Function: entry_001c013c
// Address: 0x1c013c - 0x1c0148
void entry_001c013c_0x1c013c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c013c_0x1c013c");
#endif

    ctx->pc = 0x1c013cu;

    // 0x1c013c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1c013cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1c0140: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c0140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c0144: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1c0144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->pc = 0x1c0148u;
}
