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

// Function: entry_001aa83c
// Address: 0x1aa83c - 0x1aa848
void entry_001aa83c_0x1aa83c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa83c_0x1aa83c");
#endif

    ctx->pc = 0x1aa83cu;

    // 0x1aa83c: 0x0  nop
    ctx->pc = 0x1aa83cu;
    // NOP
    // 0x1aa840: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x1aa840u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x1aa844: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1aa844u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x1aa848u;
}
