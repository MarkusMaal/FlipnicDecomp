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

// Function: entry_001b9810
// Address: 0x1b9810 - 0x1b9818
void entry_001b9810_0x1b9810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b9810_0x1b9810");
#endif

    ctx->pc = 0x1b9810u;

    // 0x1b9810: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1b9810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1b9814: 0xae030074  sw          $v1, 0x74($s0)
    ctx->pc = 0x1b9814u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 3));
    ctx->pc = 0x1b9818u;
}
