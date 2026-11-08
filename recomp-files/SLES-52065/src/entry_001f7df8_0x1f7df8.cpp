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

// Function: entry_001f7df8
// Address: 0x1f7df8 - 0x1f7e00
void entry_001f7df8_0x1f7df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f7df8_0x1f7df8");
#endif

    ctx->pc = 0x1f7df8u;

    // 0x1f7df8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1f7df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f7dfc: 0x0  nop
    ctx->pc = 0x1f7dfcu;
    // NOP
    ctx->pc = 0x1f7e00u;
}
