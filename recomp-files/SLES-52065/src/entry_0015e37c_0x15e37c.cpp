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

// Function: entry_0015e37c
// Address: 0x15e37c - 0x15e388
void entry_0015e37c_0x15e37c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015e37c_0x15e37c");
#endif

    ctx->pc = 0x15e37cu;

    // 0x15e37c: 0x0  nop
    ctx->pc = 0x15e37cu;
    // NOP
    // 0x15e380: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x15e380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x15e384: 0xa482022a  sh          $v0, 0x22A($a0)
    ctx->pc = 0x15e384u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 554), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x15e388u;
}
