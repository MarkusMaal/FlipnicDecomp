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

// Function: entry_001e27dc
// Address: 0x1e27dc - 0x1e27e0
void entry_001e27dc_0x1e27dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e27dc_0x1e27dc");
#endif

    ctx->pc = 0x1e27dcu;

    // 0x1e27dc: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x1e27dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x1e27e0u;
}
