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

// Function: entry_001ea5fc
// Address: 0x1ea5fc - 0x1ea610
void entry_001ea5fc_0x1ea5fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ea5fc_0x1ea5fc");
#endif

    ctx->pc = 0x1ea5fcu;

    // 0x1ea5fc: 0x8e830018  lw          $v1, 0x18($s4)
    ctx->pc = 0x1ea5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x1ea600: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x1ea600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x1ea604: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1ea604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ea608: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1ea608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ea60c: 0x0  nop
    ctx->pc = 0x1ea60cu;
    // NOP
    ctx->pc = 0x1ea610u;
}
