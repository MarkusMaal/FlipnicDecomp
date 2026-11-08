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

// Function: entry_00100c3c
// Address: 0x100c3c - 0x100c44
void entry_00100c3c_0x100c3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100c3c_0x100c3c");
#endif

    ctx->pc = 0x100c3cu;

    // 0x100c3c: 0x0  nop
    ctx->pc = 0x100c3cu;
    // NOP
    // 0x100c40: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x100c40u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->pc = 0x100c44u;
}
