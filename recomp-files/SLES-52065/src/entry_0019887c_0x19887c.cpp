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

// Function: entry_0019887c
// Address: 0x19887c - 0x198888
void entry_0019887c_0x19887c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019887c_0x19887c");
#endif

    ctx->pc = 0x19887cu;

    // 0x19887c: 0x0  nop
    ctx->pc = 0x19887cu;
    // NOP
    // 0x198880: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x198880u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x198884: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x198884u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x198888u;
}
