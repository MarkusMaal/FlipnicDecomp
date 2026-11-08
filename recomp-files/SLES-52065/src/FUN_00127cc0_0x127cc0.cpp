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

// Function: FUN_00127cc0
// Address: 0x127cc0 - 0x127cc8
void FUN_00127cc0_0x127cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00127cc0_0x127cc0");
#endif

    ctx->pc = 0x127cc0u;

    // 0x127cc0: 0x804a3cc  j           func_128F30
    ctx->pc = 0x127CC0u;
    ctx->pc = 0x127CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127CC0u;
    // 0x127cc4: 0x8c840018  lw          $a0, 0x18($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128F30u;
    FUN_00128f30_0x128f30(rdram, ctx, runtime); return;
    ctx->pc = 0x127CC8u;
}
