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

// Function: entry_001a49b0
// Address: 0x1a49b0 - 0x1a49b8
void entry_001a49b0_0x1a49b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a49b0_0x1a49b0");
#endif

    ctx->pc = 0x1a49b0u;

    // 0x1a49b0: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1a49b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1a49b4: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1a49b4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    ctx->pc = 0x1a49b8u;
}
