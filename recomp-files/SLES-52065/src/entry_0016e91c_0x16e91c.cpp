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

// Function: entry_0016e91c
// Address: 0x16e91c - 0x16e928
void entry_0016e91c_0x16e91c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e91c_0x16e91c");
#endif

    ctx->pc = 0x16e91cu;

    // 0x16e91c: 0x0  nop
    ctx->pc = 0x16e91cu;
    // NOP
    // 0x16e920: 0x26520090  addiu       $s2, $s2, 0x90
    ctx->pc = 0x16e920u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    // 0x16e924: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x16e924u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x16e928u;
}
