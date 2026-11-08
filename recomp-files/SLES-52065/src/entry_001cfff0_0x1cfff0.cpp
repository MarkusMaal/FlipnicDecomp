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

// Function: entry_001cfff0
// Address: 0x1cfff0 - 0x1d0000
void entry_001cfff0_0x1cfff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cfff0_0x1cfff0");
#endif

    ctx->pc = 0x1cfff0u;

    // 0x1cfff0: 0x8073ee8  j           func_1CFBA0
    ctx->pc = 0x1CFFF0u;
    ctx->pc = 0x1CFFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFFF0u;
    // 0x1cfff4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFBA0u;
    FUN_001cfba0_0x1cfba0(rdram, ctx, runtime); return;
    ctx->pc = 0x1CFFF8u;
    // 0x1cfff8: 0x0  nop
    ctx->pc = 0x1cfff8u;
    // NOP
    // 0x1cfffc: 0x0  nop
    ctx->pc = 0x1cfffcu;
    // NOP
    ctx->pc = 0x1d0000u;
}
