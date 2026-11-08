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

// Function: entry_001e2480
// Address: 0x1e2480 - 0x1e2494
void entry_001e2480_0x1e2480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e2480_0x1e2480");
#endif

    ctx->pc = 0x1e2480u;

    // 0x1e2480: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1e2480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1e2484: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1e2484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e2488: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1e2488u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1e248c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1e248cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e2490: 0x0  nop
    ctx->pc = 0x1e2490u;
    // NOP
    ctx->pc = 0x1e2494u;
}
