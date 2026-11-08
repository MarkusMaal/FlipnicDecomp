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

// Function: entry_0017e2b0
// Address: 0x17e2b0 - 0x17e2b8
void entry_0017e2b0_0x17e2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e2b0_0x17e2b0");
#endif

    ctx->pc = 0x17e2b0u;

    // 0x17e2b0: 0x8c4200e4  lw          $v0, 0xE4($v0)
    ctx->pc = 0x17e2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 228)));
    // 0x17e2b4: 0x0  nop
    ctx->pc = 0x17e2b4u;
    // NOP
    ctx->pc = 0x17e2b8u;
}
