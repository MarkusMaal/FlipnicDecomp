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

// Function: entry_001e6bb8
// Address: 0x1e6bb8 - 0x1e6bd0
void entry_001e6bb8_0x1e6bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e6bb8_0x1e6bb8");
#endif

    ctx->pc = 0x1e6bb8u;

    // 0x1e6bb8: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x1e6bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1e6bbc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1e6bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1e6bc0: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x1e6bc0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e6bc4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1e6bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1e6bc8: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x1e6bc8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1e6bcc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1e6bccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->pc = 0x1e6bd0u;
}
