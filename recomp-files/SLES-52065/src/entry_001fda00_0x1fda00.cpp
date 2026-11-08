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

// Function: entry_001fda00
// Address: 0x1fda00 - 0x1fda08
void entry_001fda00_0x1fda00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fda00_0x1fda00");
#endif

    ctx->pc = 0x1fda00u;

    // 0x1fda00: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1fda00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1fda04: 0x8cc8000c  lw          $t0, 0xC($a2)
    ctx->pc = 0x1fda04u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    ctx->pc = 0x1fda08u;
}
