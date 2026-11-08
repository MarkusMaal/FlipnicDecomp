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

// Function: entry_001e5894
// Address: 0x1e5894 - 0x1e58b0
void entry_001e5894_0x1e5894(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e5894_0x1e5894");
#endif

    ctx->pc = 0x1e5894u;

    // 0x1e5894: 0x8e640024  lw          $a0, 0x24($s3)
    ctx->pc = 0x1e5894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x1e5898: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1e5898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e589c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1e589cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e58a0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1e58a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1e58a4: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1e58a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e58a8: 0x0  nop
    ctx->pc = 0x1e58a8u;
    // NOP
    // 0x1e58ac: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e58acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x1e58b0u;
}
