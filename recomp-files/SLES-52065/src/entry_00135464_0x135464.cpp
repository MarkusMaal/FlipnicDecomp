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

// Function: entry_00135464
// Address: 0x135464 - 0x135470
void entry_00135464_0x135464(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00135464_0x135464");
#endif

    ctx->pc = 0x135464u;

    // 0x135464: 0x8f82853c  lw          $v0, -0x7AC4($gp)
    ctx->pc = 0x135464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935868)));
    // 0x135468: 0x2442fef0  addiu       $v0, $v0, -0x110
    ctx->pc = 0x135468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967024));
    // 0x13546c: 0xaf82853c  sw          $v0, -0x7AC4($gp)
    ctx->pc = 0x13546cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935868), GPR_U32(ctx, 2));
    ctx->pc = 0x135470u;
}
