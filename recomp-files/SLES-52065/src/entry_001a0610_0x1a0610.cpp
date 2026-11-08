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

// Function: entry_001a0610
// Address: 0x1a0610 - 0x1a0624
void entry_001a0610_0x1a0610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0610_0x1a0610");
#endif

    ctx->pc = 0x1a0610u;

    // 0x1a0610: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A0610u;
    {
        const bool branch_taken_0x1a0610 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1A0614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0610u;
        // 0x1a0614: 0x41840  sll         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0610) {
            ctx->pc = 0x1A0624u;
            return;
        }
    }
    ctx->pc = 0x1A0618u;
    // 0x1a0618: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1A0618u;
    {
        const bool branch_taken_0x1a0618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A061Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0618u;
        // 0x1a061c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0618) {
            ctx->pc = 0x1A0644u;
            return;
        }
    }
    ctx->pc = 0x1A0620u;
    // 0x1a0620: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1a0620u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    ctx->pc = 0x1a0624u;
}
