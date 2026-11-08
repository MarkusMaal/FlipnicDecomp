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

// Function: entry_001dea88
// Address: 0x1dea88 - 0x1dea94
void entry_001dea88_0x1dea88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dea88_0x1dea88");
#endif

    ctx->pc = 0x1dea88u;

    // 0x1dea88: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1dea88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dea8c: 0x240c0040  addiu       $t4, $zero, 0x40
    ctx->pc = 0x1dea8cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1dea90: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x1dea90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    ctx->pc = 0x1dea94u;
}
