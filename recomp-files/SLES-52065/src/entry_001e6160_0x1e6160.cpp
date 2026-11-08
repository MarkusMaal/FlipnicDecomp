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

// Function: entry_001e6160
// Address: 0x1e6160 - 0x1e6190
void entry_001e6160_0x1e6160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e6160_0x1e6160");
#endif

    ctx->pc = 0x1e6160u;

    // 0x1e6160: 0x27a20048  addiu       $v0, $sp, 0x48
    ctx->pc = 0x1e6160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x1e6164: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x1e6164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1e6168: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x1e6168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1e616c: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x1e616cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e6170: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e6170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e6174: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1e6174u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1e6178: 0x8e440024  lw          $a0, 0x24($s2)
    ctx->pc = 0x1e6178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1e617c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1e617cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e6180: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1e6180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e6184: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1e6184u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1e6188: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1e6188u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e618c: 0x0  nop
    ctx->pc = 0x1e618cu;
    // NOP
    ctx->pc = 0x1e6190u;
}
