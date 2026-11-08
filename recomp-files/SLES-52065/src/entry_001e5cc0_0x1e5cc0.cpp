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

// Function: entry_001e5cc0
// Address: 0x1e5cc0 - 0x1e5cf0
void entry_001e5cc0_0x1e5cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e5cc0_0x1e5cc0");
#endif

    ctx->pc = 0x1e5cc0u;

    // 0x1e5cc0: 0x27a20048  addiu       $v0, $sp, 0x48
    ctx->pc = 0x1e5cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x1e5cc4: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x1e5cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1e5cc8: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x1e5cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1e5ccc: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x1e5cccu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e5cd0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e5cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e5cd4: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1e5cd4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1e5cd8: 0x8e440024  lw          $a0, 0x24($s2)
    ctx->pc = 0x1e5cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1e5cdc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1e5cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e5ce0: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1e5ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e5ce4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1e5ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1e5ce8: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1e5ce8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e5cec: 0x0  nop
    ctx->pc = 0x1e5cecu;
    // NOP
    ctx->pc = 0x1e5cf0u;
}
