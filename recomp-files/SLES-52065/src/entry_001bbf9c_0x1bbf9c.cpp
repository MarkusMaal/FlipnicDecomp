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

// Function: entry_001bbf9c
// Address: 0x1bbf9c - 0x1bbfa4
void entry_001bbf9c_0x1bbf9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bbf9c_0x1bbf9c");
#endif

    ctx->pc = 0x1bbf9cu;

    // 0x1bbf9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bbf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bbfa0: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1bbfa0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x1bbfa4u;
}
