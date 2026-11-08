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

// Function: entry_0018ec7c
// Address: 0x18ec7c - 0x18ec94
void entry_0018ec7c_0x18ec7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ec7c_0x18ec7c");
#endif

    ctx->pc = 0x18ec7cu;

    // 0x18ec7c: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x18ec7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x18ec80: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x18ec80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18ec84: 0xa060002e  sb          $zero, 0x2E($v1)
    ctx->pc = 0x18ec84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 46), (uint8_t)GPR_U32(ctx, 0));
    // 0x18ec88: 0x8f8383a0  lw          $v1, -0x7C60($gp)
    ctx->pc = 0x18ec88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935456)));
    // 0x18ec8c: 0xaf80831c  sw          $zero, -0x7CE4($gp)
    ctx->pc = 0x18ec8cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935324), GPR_U32(ctx, 0));
    // 0x18ec90: 0xa0640008  sb          $a0, 0x8($v1)
    ctx->pc = 0x18ec90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 8), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x18ec94u;
}
