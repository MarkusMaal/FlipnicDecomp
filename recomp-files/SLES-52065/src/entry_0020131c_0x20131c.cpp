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

// Function: entry_0020131c
// Address: 0x20131c - 0x201328
void entry_0020131c_0x20131c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020131c_0x20131c");
#endif

    ctx->pc = 0x20131cu;

    // 0x20131c: 0x2442007c  addiu       $v0, $v0, 0x7C
    ctx->pc = 0x20131cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 124));
    // 0x201320: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x201320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x201324: 0x0  nop
    ctx->pc = 0x201324u;
    // NOP
    ctx->pc = 0x201328u;
}
