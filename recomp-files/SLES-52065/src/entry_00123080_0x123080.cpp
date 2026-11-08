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

// Function: entry_00123080
// Address: 0x123080 - 0x12308c
void entry_00123080_0x123080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00123080_0x123080");
#endif

    ctx->pc = 0x123080u;

    // 0x123080: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x123080u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x123084: 0x0  nop
    ctx->pc = 0x123084u;
    // NOP
    // 0x123088: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x123088u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    ctx->pc = 0x12308cu;
}
