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

// Function: entry_001dfd68
// Address: 0x1dfd68 - 0x1dfd70
void entry_001dfd68_0x1dfd68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dfd68_0x1dfd68");
#endif

    ctx->pc = 0x1dfd68u;

    // 0x1dfd68: 0x8e430060  lw          $v1, 0x60($s2)
    ctx->pc = 0x1dfd68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x1dfd6c: 0x0  nop
    ctx->pc = 0x1dfd6cu;
    // NOP
    ctx->pc = 0x1dfd70u;
}
