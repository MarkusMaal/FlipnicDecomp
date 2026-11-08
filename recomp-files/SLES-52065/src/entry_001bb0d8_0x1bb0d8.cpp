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

// Function: entry_001bb0d8
// Address: 0x1bb0d8 - 0x1bb0e0
void entry_001bb0d8_0x1bb0d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bb0d8_0x1bb0d8");
#endif

    ctx->pc = 0x1bb0d8u;

    // 0x1bb0d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bb0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bb0dc: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1bb0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x1bb0e0u;
}
