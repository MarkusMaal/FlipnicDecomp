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

// Function: entry_0014316c
// Address: 0x14316c - 0x143174
void entry_0014316c_0x14316c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014316c_0x14316c");
#endif

    ctx->pc = 0x14316cu;

    // 0x14316c: 0x0  nop
    ctx->pc = 0x14316cu;
    // NOP
    // 0x143170: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x143170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x143174u;
}
