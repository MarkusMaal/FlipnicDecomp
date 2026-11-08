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

// Function: entry_0015e3b0
// Address: 0x15e3b0 - 0x15e3b8
void entry_0015e3b0_0x15e3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015e3b0_0x15e3b0");
#endif

    ctx->pc = 0x15e3b0u;

    // 0x15e3b0: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x15e3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x15e3b4: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x15e3b4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x15e3b8u;
}
