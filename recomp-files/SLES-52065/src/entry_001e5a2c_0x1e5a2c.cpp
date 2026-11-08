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

// Function: entry_001e5a2c
// Address: 0x1e5a2c - 0x1e5a48
void entry_001e5a2c_0x1e5a2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e5a2c_0x1e5a2c");
#endif

    ctx->pc = 0x1e5a2cu;

    // 0x1e5a2c: 0x8e840024  lw          $a0, 0x24($s4)
    ctx->pc = 0x1e5a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x1e5a30: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1e5a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e5a34: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1e5a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e5a38: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1e5a38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1e5a3c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1e5a3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e5a40: 0x0  nop
    ctx->pc = 0x1e5a40u;
    // NOP
    // 0x1e5a44: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e5a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x1e5a48u;
}
