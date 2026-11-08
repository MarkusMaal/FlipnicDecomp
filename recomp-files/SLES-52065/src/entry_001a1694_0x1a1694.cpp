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

// Function: entry_001a1694
// Address: 0x1a1694 - 0x1a16a8
void entry_001a1694_0x1a1694(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1694_0x1a1694");
#endif

    ctx->pc = 0x1a1694u;

    // 0x1a1694: 0x4e10004  bgez        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A1694u;
    {
        const bool branch_taken_0x1a1694 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x1A1698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1694u;
        // 0x1a1698: 0x71840  sll         $v1, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1694) {
            ctx->pc = 0x1A16A8u;
            return;
        }
    }
    ctx->pc = 0x1A169Cu;
    // 0x1a169c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1A169Cu;
    {
        const bool branch_taken_0x1a169c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A16A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A169Cu;
        // 0x1a16a0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a169c) {
            ctx->pc = 0x1A16C8u;
            return;
        }
    }
    ctx->pc = 0x1A16A4u;
    // 0x1a16a4: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x1a16a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    ctx->pc = 0x1a16a8u;
}
