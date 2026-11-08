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

// Function: entry_0012bfdc
// Address: 0x12bfdc - 0x12bfe8
void entry_0012bfdc_0x12bfdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012bfdc_0x12bfdc");
#endif

    ctx->pc = 0x12bfdcu;

    // 0x12bfdc: 0x0  nop
    ctx->pc = 0x12bfdcu;
    // NOP
    // 0x12bfe0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x12BFE0u;
    {
        const bool branch_taken_0x12bfe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BFE0u;
        // 0x12bfe4: 0x53880  sll         $a3, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bfe0) {
            ctx->pc = 0x12C01Cu;
            return;
        }
    }
    ctx->pc = 0x12BFE8u;
}
