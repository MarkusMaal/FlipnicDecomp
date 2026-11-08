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

// Function: entry_001ad36c
// Address: 0x1ad36c - 0x1ad374
void entry_001ad36c_0x1ad36c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ad36c_0x1ad36c");
#endif

    ctx->pc = 0x1ad36cu;

    // 0x1ad36c: 0x0  nop
    ctx->pc = 0x1ad36cu;
    // NOP
    // 0x1ad370: 0x26520040  addiu       $s2, $s2, 0x40
    ctx->pc = 0x1ad370u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    ctx->pc = 0x1ad374u;
}
