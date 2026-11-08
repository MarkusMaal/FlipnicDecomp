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

// Function: entry_001d97c8
// Address: 0x1d97c8 - 0x1d97d8
void entry_001d97c8_0x1d97c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d97c8_0x1d97c8");
#endif

    ctx->pc = 0x1d97c8u;

    // 0x1d97c8: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1d97c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d97cc: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1D97CCu;
    {
        const bool branch_taken_0x1d97cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D97D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D97CCu;
        // 0x1d97d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d97cc) {
            ctx->pc = 0x1D9838u;
            return;
        }
    }
    ctx->pc = 0x1D97D4u;
    // 0x1d97d4: 0x0  nop
    ctx->pc = 0x1d97d4u;
    // NOP
    ctx->pc = 0x1d97d8u;
}
