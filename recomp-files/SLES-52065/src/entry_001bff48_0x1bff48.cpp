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

// Function: entry_001bff48
// Address: 0x1bff48 - 0x1bff54
void entry_001bff48_0x1bff48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bff48_0x1bff48");
#endif

    ctx->pc = 0x1bff48u;

    // 0x1bff48: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1bff48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1bff4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bff4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bff50: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1bff50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->pc = 0x1bff54u;
}
