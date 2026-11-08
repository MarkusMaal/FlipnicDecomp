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

// Function: entry_001d7cb0
// Address: 0x1d7cb0 - 0x1d7cc0
void entry_001d7cb0_0x1d7cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d7cb0_0x1d7cb0");
#endif

    ctx->pc = 0x1d7cb0u;

    // 0x1d7cb0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1d7cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7cb4: 0x8074d20  j           func_1D3480
    ctx->pc = 0x1D7CB4u;
    ctx->pc = 0x1D7CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7CB4u;
    // 0x1d7cb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3480u;
    FUN_001d3480_0x1d3480(rdram, ctx, runtime); return;
    ctx->pc = 0x1D7CBCu;
    // 0x1d7cbc: 0x0  nop
    ctx->pc = 0x1d7cbcu;
    // NOP
    ctx->pc = 0x1d7cc0u;
}
