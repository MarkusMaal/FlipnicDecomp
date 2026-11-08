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

// Function: entry_001ea150
// Address: 0x1ea150 - 0x1ea164
void entry_001ea150_0x1ea150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ea150_0x1ea150");
#endif

    ctx->pc = 0x1ea150u;

    // 0x1ea150: 0x8e840018  lw          $a0, 0x18($s4)
    ctx->pc = 0x1ea150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x1ea154: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x1ea154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1ea158: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1ea158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1ea15c: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x1ea15cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ea160: 0x0  nop
    ctx->pc = 0x1ea160u;
    // NOP
    ctx->pc = 0x1ea164u;
}
