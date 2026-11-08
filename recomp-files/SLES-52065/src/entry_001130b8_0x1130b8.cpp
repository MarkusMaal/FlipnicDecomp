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

// Function: entry_001130b8
// Address: 0x1130b8 - 0x1130c0
void entry_001130b8_0x1130b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001130b8_0x1130b8");
#endif

    ctx->pc = 0x1130b8u;

    // 0x1130b8: 0x26940002  addiu       $s4, $s4, 0x2
    ctx->pc = 0x1130b8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
    // 0x1130bc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1130bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x1130c0u;
}
