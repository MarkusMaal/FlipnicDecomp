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

// Function: entry_001f7e58
// Address: 0x1f7e58 - 0x1f7e60
void entry_001f7e58_0x1f7e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f7e58_0x1f7e58");
#endif

    ctx->pc = 0x1f7e58u;

    // 0x1f7e58: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1f7e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f7e5c: 0x0  nop
    ctx->pc = 0x1f7e5cu;
    // NOP
    ctx->pc = 0x1f7e60u;
}
