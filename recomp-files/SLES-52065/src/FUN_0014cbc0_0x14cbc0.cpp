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

// Function: FUN_0014cbc0
// Address: 0x14cbc0 - 0x14cbc8
void FUN_0014cbc0_0x14cbc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0014cbc0_0x14cbc0");
#endif

    ctx->pc = 0x14cbc0u;

    // 0x14cbc0: 0x80522fc  j           func_148BF0
    ctx->pc = 0x14CBC0u;
    ctx->pc = 0x14CBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CBC0u;
    // 0x14cbc4: 0x8c8400b0  lw          $a0, 0xB0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 176)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148BF0u;
    FUN_00148bf0_0x148bf0(rdram, ctx, runtime); return;
    ctx->pc = 0x14CBC8u;
}
