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

// Function: FUN_00127cb0
// Address: 0x127cb0 - 0x127cb8
void FUN_00127cb0_0x127cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00127cb0_0x127cb0");
#endif

    ctx->pc = 0x127cb0u;

    // 0x127cb0: 0x804a3e0  j           func_128F80
    ctx->pc = 0x127CB0u;
    ctx->pc = 0x127CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127CB0u;
    // 0x127cb4: 0x8c840018  lw          $a0, 0x18($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128F80u;
    FUN_00128f80_0x128f80(rdram, ctx, runtime); return;
    ctx->pc = 0x127CB8u;
}
