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

// Function: entry_001f7b8c
// Address: 0x1f7b8c - 0x1f7b98
void entry_001f7b8c_0x1f7b8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f7b8c_0x1f7b8c");
#endif

    ctx->pc = 0x1f7b8cu;

    // 0x1f7b8c: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1f7b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x1f7b90: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1f7b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f7b94: 0x0  nop
    ctx->pc = 0x1f7b94u;
    // NOP
    ctx->pc = 0x1f7b98u;
}
