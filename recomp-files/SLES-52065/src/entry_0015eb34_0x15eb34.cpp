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

// Function: entry_0015eb34
// Address: 0x15eb34 - 0x15eb44
void entry_0015eb34_0x15eb34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015eb34_0x15eb34");
#endif

    ctx->pc = 0x15eb34u;

    // 0x15eb34: 0x0  nop
    ctx->pc = 0x15eb34u;
    // NOP
    // 0x15eb38: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x15eb38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x15eb3c: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x15eb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x15eb40: 0xa06201d1  sb          $v0, 0x1D1($v1)
    ctx->pc = 0x15eb40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 465), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x15eb44u;
}
