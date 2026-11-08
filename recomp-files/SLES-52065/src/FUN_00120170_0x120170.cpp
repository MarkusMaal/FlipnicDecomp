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

// Function: FUN_00120170
// Address: 0x120170 - 0x120178
void FUN_00120170_0x120170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00120170_0x120170");
#endif

    ctx->pc = 0x120170u;

    // 0x120170: 0x804814c  j           func_120530
    ctx->pc = 0x120170u;
    ctx->pc = 0x120174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120170u;
    // 0x120174: 0x8ca50020  lw          $a1, 0x20($a1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120530u;
    FUN_00120530_0x120530(rdram, ctx, runtime); return;
    ctx->pc = 0x120178u;
}
