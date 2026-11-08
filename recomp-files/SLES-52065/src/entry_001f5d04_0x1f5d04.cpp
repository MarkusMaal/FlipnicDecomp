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

// Function: entry_001f5d04
// Address: 0x1f5d04 - 0x1f5d18
void entry_001f5d04_0x1f5d04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f5d04_0x1f5d04");
#endif

    ctx->pc = 0x1f5d04u;

    // 0x1f5d04: 0x3c170039  lui         $s7, 0x39
    ctx->pc = 0x1f5d04u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)57 << 16));
    // 0x1f5d08: 0x24160005  addiu       $s6, $zero, 0x5
    ctx->pc = 0x1f5d08u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1f5d0c: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x1f5d0cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f5d10: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1f5d10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f5d14: 0x0  nop
    ctx->pc = 0x1f5d14u;
    // NOP
    ctx->pc = 0x1f5d18u;
}
