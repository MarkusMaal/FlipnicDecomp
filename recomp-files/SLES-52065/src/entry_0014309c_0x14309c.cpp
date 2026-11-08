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

// Function: entry_0014309c
// Address: 0x14309c - 0x1430a8
void entry_0014309c_0x14309c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014309c_0x14309c");
#endif

    ctx->pc = 0x14309cu;

    // 0x14309c: 0x0  nop
    ctx->pc = 0x14309cu;
    // NOP
    // 0x1430a0: 0x26b50020  addiu       $s5, $s5, 0x20
    ctx->pc = 0x1430a0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x1430a4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1430a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x1430a8u;
}
