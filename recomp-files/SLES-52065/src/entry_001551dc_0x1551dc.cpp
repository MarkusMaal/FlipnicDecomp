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

// Function: entry_001551dc
// Address: 0x1551dc - 0x1551e4
void entry_001551dc_0x1551dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001551dc_0x1551dc");
#endif

    ctx->pc = 0x1551dcu;

    // 0x1551dc: 0x0  nop
    ctx->pc = 0x1551dcu;
    // NOP
    // 0x1551e0: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x1551e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    ctx->pc = 0x1551e4u;
}
