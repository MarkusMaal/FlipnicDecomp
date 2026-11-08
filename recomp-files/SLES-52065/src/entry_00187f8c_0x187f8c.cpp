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

// Function: entry_00187f8c
// Address: 0x187f8c - 0x187fa0
void entry_00187f8c_0x187f8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187f8c_0x187f8c");
#endif

    ctx->pc = 0x187f8cu;

    // 0x187f8c: 0x0  nop
    ctx->pc = 0x187f8cu;
    // NOP
    // 0x187f90: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x187f90u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x187f94: 0x24c6f9e0  addiu       $a2, $a2, -0x620
    ctx->pc = 0x187f94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965728));
    // 0x187f98: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x187F98u;
    {
        const bool branch_taken_0x187f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187F98u;
        // 0x187f9c: 0x30e500ff  andi        $a1, $a3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x187f98) {
            ctx->pc = 0x187FBCu;
            return;
        }
    }
    ctx->pc = 0x187FA0u;
}
