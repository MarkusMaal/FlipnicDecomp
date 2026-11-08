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

// Function: entry_001909f0
// Address: 0x1909f0 - 0x190a00
void entry_001909f0_0x1909f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001909f0_0x1909f0");
#endif

    ctx->pc = 0x1909f0u;

    // 0x1909f0: 0x8063f8c  j           func_18FE30
    ctx->pc = 0x1909F0u;
    ctx->pc = 0x1909F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1909F0u;
    // 0x1909f4: 0x24840210  addiu       $a0, $a0, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FE30u;
    FUN_0018fe30_0x18fe30(rdram, ctx, runtime); return;
    ctx->pc = 0x1909F8u;
    // 0x1909f8: 0x0  nop
    ctx->pc = 0x1909f8u;
    // NOP
    // 0x1909fc: 0x0  nop
    ctx->pc = 0x1909fcu;
    // NOP
    ctx->pc = 0x190a00u;
}
