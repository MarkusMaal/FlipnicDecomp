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

// Function: entry_001e6b28
// Address: 0x1e6b28 - 0x1e6b40
void entry_001e6b28_0x1e6b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e6b28_0x1e6b28");
#endif

    ctx->pc = 0x1e6b28u;

    // 0x1e6b28: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x1e6b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1e6b2c: 0x80c40000  lb          $a0, 0x0($a2)
    ctx->pc = 0x1e6b2cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1e6b30: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1e6b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1e6b34: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1e6b34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1e6b38: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x1e6b38u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1e6b3c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1e6b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->pc = 0x1e6b40u;
}
