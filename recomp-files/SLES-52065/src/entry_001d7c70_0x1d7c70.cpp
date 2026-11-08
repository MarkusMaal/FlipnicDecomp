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

// Function: entry_001d7c70
// Address: 0x1d7c70 - 0x1d7c80
void entry_001d7c70_0x1d7c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d7c70_0x1d7c70");
#endif

    ctx->pc = 0x1d7c70u;

    // 0x1d7c70: 0x80850002  lb          $a1, 0x2($a0)
    ctx->pc = 0x1d7c70u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1d7c74: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1d7c74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7c78: 0x8074cb8  j           func_1D32E0
    ctx->pc = 0x1D7C78u;
    ctx->pc = 0x1D7C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7C78u;
    // 0x1d7c7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D32E0u;
    FUN_001d32e0_0x1d32e0(rdram, ctx, runtime); return;
    ctx->pc = 0x1D7C80u;
}
