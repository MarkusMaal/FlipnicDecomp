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

// Function: entry_001e4af0
// Address: 0x1e4af0 - 0x1e4b14
void entry_001e4af0_0x1e4af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e4af0_0x1e4af0");
#endif

    ctx->pc = 0x1e4af0u;

    // 0x1e4af0: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1e4af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1e4af4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e4af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e4af8: 0xa0530000  sb          $s3, 0x0($v0)
    ctx->pc = 0x1e4af8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 19));
    // 0x1e4afc: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x1e4afcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1e4b00: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1e4b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e4b04: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1e4b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e4b08: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1e4b08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1e4b0c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1e4b0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e4b10: 0x0  nop
    ctx->pc = 0x1e4b10u;
    // NOP
    ctx->pc = 0x1e4b14u;
}
