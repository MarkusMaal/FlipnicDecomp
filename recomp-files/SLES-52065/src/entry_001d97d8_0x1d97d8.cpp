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

// Function: entry_001d97d8
// Address: 0x1d97d8 - 0x1d97f0
void entry_001d97d8_0x1d97d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d97d8_0x1d97d8");
#endif

    ctx->pc = 0x1d97d8u;

    // 0x1d97d8: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1d97d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1d97dc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1d97dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1d97e0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d97e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d97e4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d97e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d97e8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1D97E8u;
    {
        const bool branch_taken_0x1d97e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D97ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D97E8u;
        // 0x1d97ec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d97e8) {
            ctx->pc = 0x1D9840u;
            return;
        }
    }
    ctx->pc = 0x1D97F0u;
}
