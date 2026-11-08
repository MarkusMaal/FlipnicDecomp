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

// Function: entry_001e4c74
// Address: 0x1e4c74 - 0x1e4c9c
void entry_001e4c74_0x1e4c74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e4c74_0x1e4c74");
#endif

    ctx->pc = 0x1e4c74u;

    // 0x1e4c74: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1e4c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1e4c78: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e4c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e4c7c: 0xa0520000  sb          $s2, 0x0($v0)
    ctx->pc = 0x1e4c7cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 18));
    // 0x1e4c80: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x1e4c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1e4c84: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1e4c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e4c88: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1e4c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e4c8c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1e4c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1e4c90: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1e4c90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e4c94: 0x0  nop
    ctx->pc = 0x1e4c94u;
    // NOP
    // 0x1e4c98: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e4c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x1e4c9cu;
}
