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

// Function: entry_00150848
// Address: 0x150848 - 0x150854
void entry_00150848_0x150848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00150848_0x150848");
#endif

    ctx->pc = 0x150848u;

    // 0x150848: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x150848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15084c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x15084cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x150850: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x150850u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    ctx->pc = 0x150854u;
}
