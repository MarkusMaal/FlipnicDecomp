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

// Function: entry_001d4ab0
// Address: 0x1d4ab0 - 0x1d4abc
void entry_001d4ab0_0x1d4ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4ab0_0x1d4ab0");
#endif

    ctx->pc = 0x1d4ab0u;

    // 0x1d4ab0: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x1d4ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1d4ab4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1d4ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1d4ab8: 0x8e0202d4  lw          $v0, 0x2D4($s0)
    ctx->pc = 0x1d4ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 724)));
    ctx->pc = 0x1d4abcu;
}
