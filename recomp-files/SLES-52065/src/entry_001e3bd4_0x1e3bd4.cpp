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

// Function: entry_001e3bd4
// Address: 0x1e3bd4 - 0x1e3bfc
void entry_001e3bd4_0x1e3bd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e3bd4_0x1e3bd4");
#endif

    ctx->pc = 0x1e3bd4u;

    // 0x1e3bd4: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1e3bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1e3bd8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e3bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e3bdc: 0xa0520000  sb          $s2, 0x0($v0)
    ctx->pc = 0x1e3bdcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 18));
    // 0x1e3be0: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x1e3be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1e3be4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1e3be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e3be8: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1e3be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e3bec: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1e3becu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1e3bf0: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1e3bf0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e3bf4: 0x0  nop
    ctx->pc = 0x1e3bf4u;
    // NOP
    // 0x1e3bf8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e3bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x1e3bfcu;
}
