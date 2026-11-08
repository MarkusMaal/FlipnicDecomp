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

// Function: entry_0012c4e4
// Address: 0x12c4e4 - 0x12c4f0
void entry_0012c4e4_0x12c4e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012c4e4_0x12c4e4");
#endif

    ctx->pc = 0x12c4e4u;

    // 0x12c4e4: 0x82420066  lb          $v0, 0x66($s2)
    ctx->pc = 0x12c4e4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 102)));
    // 0x12c4e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12c4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12c4ec: 0xa2420066  sb          $v0, 0x66($s2)
    ctx->pc = 0x12c4ecu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 102), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x12c4f0u;
}
