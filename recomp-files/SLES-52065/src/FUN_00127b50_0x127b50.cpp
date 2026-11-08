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

// Function: FUN_00127b50
// Address: 0x127b50 - 0x127b58
void FUN_00127b50_0x127b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00127b50_0x127b50");
#endif

    ctx->pc = 0x127b50u;

    // 0x127b50: 0x8049794  j           func_125E50
    ctx->pc = 0x127B50u;
    ctx->pc = 0x127B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127B50u;
    // 0x127b54: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125E50u;
    FUN_00125e50_0x125e50(rdram, ctx, runtime); return;
    ctx->pc = 0x127B58u;
}
