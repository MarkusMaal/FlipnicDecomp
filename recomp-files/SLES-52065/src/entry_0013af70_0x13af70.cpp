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

// Function: entry_0013af70
// Address: 0x13af70 - 0x13af78
void entry_0013af70_0x13af70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013af70_0x13af70");
#endif

    ctx->pc = 0x13af70u;

    // 0x13af70: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x13af70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x13af74: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x13af74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x13af78u;
}
