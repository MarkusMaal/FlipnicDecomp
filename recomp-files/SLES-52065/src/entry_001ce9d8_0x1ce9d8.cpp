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

// Function: entry_001ce9d8
// Address: 0x1ce9d8 - 0x1ce9e0
void entry_001ce9d8_0x1ce9d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ce9d8_0x1ce9d8");
#endif

    ctx->pc = 0x1ce9d8u;

    // 0x1ce9d8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ce9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ce9dc: 0xae020068  sw          $v0, 0x68($s0)
    ctx->pc = 0x1ce9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
    ctx->pc = 0x1ce9e0u;
}
