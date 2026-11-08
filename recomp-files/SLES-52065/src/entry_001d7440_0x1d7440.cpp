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

// Function: entry_001d7440
// Address: 0x1d7440 - 0x1d744c
void entry_001d7440_0x1d7440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d7440_0x1d7440");
#endif

    ctx->pc = 0x1d7440u;

    // 0x1d7440: 0x2683ffe8  addiu       $v1, $s4, -0x18
    ctx->pc = 0x1d7440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967272));
    // 0x1d7444: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d7444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7448: 0x622804  sllv        $a1, $v0, $v1
    ctx->pc = 0x1d7448u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    ctx->pc = 0x1d744cu;
}
