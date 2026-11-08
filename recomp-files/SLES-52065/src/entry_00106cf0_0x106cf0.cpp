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

// Function: entry_00106cf0
// Address: 0x106cf0 - 0x106d00
void entry_00106cf0_0x106cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106cf0_0x106cf0");
#endif

    ctx->pc = 0x106cf0u;

    // 0x106cf0: 0x80566b8  j           func_159AE0
    ctx->pc = 0x106CF0u;
    ctx->pc = 0x159AE0u;
    FUN_00159ae0_0x159ae0(rdram, ctx, runtime); return;
    ctx->pc = 0x106CF8u;
    // 0x106cf8: 0x0  nop
    ctx->pc = 0x106cf8u;
    // NOP
    // 0x106cfc: 0x0  nop
    ctx->pc = 0x106cfcu;
    // NOP
    ctx->pc = 0x106d00u;
}
