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

// Function: entry_0019b21c
// Address: 0x19b21c - 0x19b228
void entry_0019b21c_0x19b21c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b21c_0x19b21c");
#endif

    ctx->pc = 0x19b21cu;

    // 0x19b21c: 0x0  nop
    ctx->pc = 0x19b21cu;
    // NOP
    // 0x19b220: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x19b220u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x19b224: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x19b224u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->pc = 0x19b228u;
}
