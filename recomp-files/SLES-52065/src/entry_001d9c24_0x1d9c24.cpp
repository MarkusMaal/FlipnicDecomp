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

// Function: entry_001d9c24
// Address: 0x1d9c24 - 0x1d9c2c
void entry_001d9c24_0x1d9c24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d9c24_0x1d9c24");
#endif

    ctx->pc = 0x1d9c24u;

    // 0x1d9c24: 0xaec072e0  sw          $zero, 0x72E0($s6)
    ctx->pc = 0x1d9c24u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 29408), GPR_U32(ctx, 0));
    // 0x1d9c28: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1d9c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1d9c2cu;
}
