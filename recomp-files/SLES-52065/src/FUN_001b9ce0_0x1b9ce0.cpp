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

// Function: FUN_001b9ce0
// Address: 0x1b9ce0 - 0x1b9cec
void FUN_001b9ce0_0x1b9ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b9ce0_0x1b9ce0");
#endif

    ctx->pc = 0x1b9ce0u;

    // 0x1b9ce0: 0xac800070  sw          $zero, 0x70($a0)
    ctx->pc = 0x1b9ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 0));
    // 0x1b9ce4: 0x807d38e  j           func_1F4E38
    ctx->pc = 0x1B9CE4u;
    ctx->pc = 0x1B9CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9CE4u;
    // 0x1b9ce8: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    MemCopy128_0x1f4e38(rdram, ctx, runtime); return;
    ctx->pc = 0x1B9CECu;
}
