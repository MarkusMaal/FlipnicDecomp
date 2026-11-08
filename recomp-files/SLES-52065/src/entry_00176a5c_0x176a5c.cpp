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

// Function: entry_00176a5c
// Address: 0x176a5c - 0x176a68
void entry_00176a5c_0x176a5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00176a5c_0x176a5c");
#endif

    ctx->pc = 0x176a5cu;

    // 0x176a5c: 0x0  nop
    ctx->pc = 0x176a5cu;
    // NOP
    // 0x176a60: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x176a60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x176a64: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x176a64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x176a68u;
}
