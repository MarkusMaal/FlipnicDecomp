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

// Function: entry_001e3a88
// Address: 0x1e3a88 - 0x1e3aac
void entry_001e3a88_0x1e3a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e3a88_0x1e3a88");
#endif

    ctx->pc = 0x1e3a88u;

    // 0x1e3a88: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1e3a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1e3a8c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e3a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e3a90: 0xa0530000  sb          $s3, 0x0($v0)
    ctx->pc = 0x1e3a90u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 19));
    // 0x1e3a94: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x1e3a94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1e3a98: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1e3a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e3a9c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1e3a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e3aa0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1e3aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1e3aa4: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1e3aa4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e3aa8: 0x0  nop
    ctx->pc = 0x1e3aa8u;
    // NOP
    ctx->pc = 0x1e3aacu;
}
