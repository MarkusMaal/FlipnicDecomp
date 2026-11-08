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

// Function: entry_001d7c08
// Address: 0x1d7c08 - 0x1d7c18
void entry_001d7c08_0x1d7c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d7c08_0x1d7c08");
#endif

    ctx->pc = 0x1d7c08u;

    // 0x1d7c08: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d7c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7c0c: 0x8074d20  j           func_1D3480
    ctx->pc = 0x1D7C0Cu;
    ctx->pc = 0x1D7C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7C0Cu;
    // 0x1d7c10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3480u;
    FUN_001d3480_0x1d3480(rdram, ctx, runtime); return;
    ctx->pc = 0x1D7C14u;
    // 0x1d7c14: 0x0  nop
    ctx->pc = 0x1d7c14u;
    // NOP
    ctx->pc = 0x1d7c18u;
}
