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

// Function: entry_00110e94
// Address: 0x110e94 - 0x110ea0
void entry_00110e94_0x110e94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110e94_0x110e94");
#endif

    ctx->pc = 0x110e94u;

    // 0x110e94: 0x0  nop
    ctx->pc = 0x110e94u;
    // NOP
    // 0x110e98: 0x254a0002  addiu       $t2, $t2, 0x2
    ctx->pc = 0x110e98u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
    // 0x110e9c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x110e9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    ctx->pc = 0x110ea0u;
}
