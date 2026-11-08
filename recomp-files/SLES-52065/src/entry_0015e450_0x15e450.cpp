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

// Function: entry_0015e450
// Address: 0x15e450 - 0x15e45c
void entry_0015e450_0x15e450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015e450_0x15e450");
#endif

    ctx->pc = 0x15e450u;

    // 0x15e450: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x15e450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x15e454: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15e454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15e458: 0xac4327a4  sw          $v1, 0x27A4($v0)
    ctx->pc = 0x15e458u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10148), GPR_U32(ctx, 3));
    ctx->pc = 0x15e45cu;
}
