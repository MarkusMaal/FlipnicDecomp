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

// Function: entry_001ea310
// Address: 0x1ea310 - 0x1ea324
void entry_001ea310_0x1ea310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ea310_0x1ea310");
#endif

    ctx->pc = 0x1ea310u;

    // 0x1ea310: 0x8e830018  lw          $v1, 0x18($s4)
    ctx->pc = 0x1ea310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x1ea314: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1ea314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1ea318: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1ea318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ea31c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1ea31cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ea320: 0x0  nop
    ctx->pc = 0x1ea320u;
    // NOP
    ctx->pc = 0x1ea324u;
}
