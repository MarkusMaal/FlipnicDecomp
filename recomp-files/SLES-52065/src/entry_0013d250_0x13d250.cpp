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

// Function: entry_0013d250
// Address: 0x13d250 - 0x13d260
void entry_0013d250_0x13d250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d250_0x13d250");
#endif

    ctx->pc = 0x13d250u;

    // 0x13d250: 0x8050c64  j           func_143190
    ctx->pc = 0x13D250u;
    ctx->pc = 0x13D254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D250u;
    // 0x13d254: 0x248400b0  addiu       $a0, $a0, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143190u;
    entry_00143190_0x143190(rdram, ctx, runtime); return;
    ctx->pc = 0x13D258u;
    // 0x13d258: 0x0  nop
    ctx->pc = 0x13d258u;
    // NOP
    // 0x13d25c: 0x0  nop
    ctx->pc = 0x13d25cu;
    // NOP
    ctx->pc = 0x13d260u;
}
