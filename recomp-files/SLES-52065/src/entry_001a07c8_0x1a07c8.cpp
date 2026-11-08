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

// Function: entry_001a07c8
// Address: 0x1a07c8 - 0x1a07dc
void entry_001a07c8_0x1a07c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a07c8_0x1a07c8");
#endif

    ctx->pc = 0x1a07c8u;

    // 0x1a07c8: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A07C8u;
    {
        const bool branch_taken_0x1a07c8 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1A07CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A07C8u;
        // 0x1a07cc: 0x41840  sll         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a07c8) {
            ctx->pc = 0x1A07DCu;
            return;
        }
    }
    ctx->pc = 0x1A07D0u;
    // 0x1a07d0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1A07D0u;
    {
        const bool branch_taken_0x1a07d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A07D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A07D0u;
        // 0x1a07d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a07d0) {
            ctx->pc = 0x1A07FCu;
            return;
        }
    }
    ctx->pc = 0x1A07D8u;
    // 0x1a07d8: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1a07d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    ctx->pc = 0x1a07dcu;
}
