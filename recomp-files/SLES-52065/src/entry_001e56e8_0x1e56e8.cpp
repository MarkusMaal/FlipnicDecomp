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

// Function: entry_001e56e8
// Address: 0x1e56e8 - 0x1e5714
void entry_001e56e8_0x1e56e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e56e8_0x1e56e8");
#endif

    ctx->pc = 0x1e56e8u;

    // 0x1e56e8: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x1e56e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1e56ec: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x1e56ecu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e56f0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e56f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e56f4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1e56f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1e56f8: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1e56f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1e56fc: 0x8e440024  lw          $a0, 0x24($s2)
    ctx->pc = 0x1e56fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1e5700: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1e5700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e5704: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1e5704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e5708: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1e5708u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1e570c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1e570cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e5710: 0x0  nop
    ctx->pc = 0x1e5710u;
    // NOP
    ctx->pc = 0x1e5714u;
}
