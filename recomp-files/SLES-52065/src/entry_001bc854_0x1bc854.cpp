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

// Function: entry_001bc854
// Address: 0x1bc854 - 0x1bc85c
void entry_001bc854_0x1bc854(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bc854_0x1bc854");
#endif

    ctx->pc = 0x1bc854u;

    // 0x1bc854: 0x0  nop
    ctx->pc = 0x1bc854u;
    // NOP
    // 0x1bc858: 0x26440002  addiu       $a0, $s2, 0x2
    ctx->pc = 0x1bc858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    ctx->pc = 0x1bc85cu;
}
