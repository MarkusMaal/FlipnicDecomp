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

// Function: FUN_0012d7c0
// Address: 0x12d7c0 - 0x12d7c8
void FUN_0012d7c0_0x12d7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012d7c0_0x12d7c0");
#endif

    ctx->pc = 0x12d7c0u;

    // 0x12d7c0: 0x804b5f4  j           func_12D7D0
    ctx->pc = 0x12D7C0u;
    ctx->pc = 0x12D7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D7C0u;
    // 0x12d7c4: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D7D0u;
    FUN_0012d7d0_0x12d7d0(rdram, ctx, runtime); return;
    ctx->pc = 0x12D7C8u;
}
