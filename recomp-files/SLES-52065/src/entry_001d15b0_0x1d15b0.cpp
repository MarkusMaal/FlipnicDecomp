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

// Function: entry_001d15b0
// Address: 0x1d15b0 - 0x1d15c0
void entry_001d15b0_0x1d15b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d15b0_0x1d15b0");
#endif

    ctx->pc = 0x1d15b0u;

    // 0x1d15b0: 0x8c840018  lw          $a0, 0x18($a0)
    ctx->pc = 0x1d15b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1d15b4: 0x806d8ac  j           func_1B62B0
    ctx->pc = 0x1D15B4u;
    ctx->pc = 0x1D15B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D15B4u;
    // 0x1d15b8: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B62B0u;
    FUN_001b62b0_0x1b62b0(rdram, ctx, runtime); return;
    ctx->pc = 0x1D15BCu;
    // 0x1d15bc: 0x0  nop
    ctx->pc = 0x1d15bcu;
    // NOP
    ctx->pc = 0x1d15c0u;
}
