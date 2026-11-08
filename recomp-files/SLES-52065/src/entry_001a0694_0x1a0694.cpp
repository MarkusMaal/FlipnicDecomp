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

// Function: entry_001a0694
// Address: 0x1a0694 - 0x1a06a8
void entry_001a0694_0x1a0694(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0694_0x1a0694");
#endif

    ctx->pc = 0x1a0694u;

    // 0x1a0694: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A0694u;
    {
        const bool branch_taken_0x1a0694 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1A0698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0694u;
        // 0x1a0698: 0x41840  sll         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0694) {
            ctx->pc = 0x1A06A8u;
            return;
        }
    }
    ctx->pc = 0x1A069Cu;
    // 0x1a069c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1A069Cu;
    {
        const bool branch_taken_0x1a069c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A06A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A069Cu;
        // 0x1a06a0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a069c) {
            ctx->pc = 0x1A06C8u;
            return;
        }
    }
    ctx->pc = 0x1A06A4u;
    // 0x1a06a4: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1a06a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    ctx->pc = 0x1a06a8u;
}
