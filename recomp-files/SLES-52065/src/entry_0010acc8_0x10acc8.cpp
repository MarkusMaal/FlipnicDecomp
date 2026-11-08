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

// Function: entry_0010acc8
// Address: 0x10acc8 - 0x10acd4
void entry_0010acc8_0x10acc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010acc8_0x10acc8");
#endif

    ctx->pc = 0x10acc8u;

    // 0x10acc8: 0x8e022314  lw          $v0, 0x2314($s0)
    ctx->pc = 0x10acc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8980)));
    // 0x10accc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x10acccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x10acd0: 0xae022314  sw          $v0, 0x2314($s0)
    ctx->pc = 0x10acd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8980), GPR_U32(ctx, 2));
    ctx->pc = 0x10acd4u;
}
