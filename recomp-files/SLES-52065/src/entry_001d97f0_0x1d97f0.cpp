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

// Function: entry_001d97f0
// Address: 0x1d97f0 - 0x1d9808
void entry_001d97f0_0x1d97f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d97f0_0x1d97f0");
#endif

    ctx->pc = 0x1d97f0u;

    // 0x1d97f0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1d97f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d97f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d97f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d97f8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1d97f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1d97fc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1D97FCu;
    {
        const bool branch_taken_0x1d97fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D97FCu;
        // 0x1d9800: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d97fc) {
            ctx->pc = 0x1D983Cu;
            return;
        }
    }
    ctx->pc = 0x1D9804u;
    // 0x1d9804: 0x0  nop
    ctx->pc = 0x1d9804u;
    // NOP
    ctx->pc = 0x1d9808u;
}
