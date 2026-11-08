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

// Function: entry_0013b554
// Address: 0x13b554 - 0x13b564
void entry_0013b554_0x13b554(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b554_0x13b554");
#endif

    ctx->pc = 0x13b554u;

    // 0x13b554: 0x0  nop
    ctx->pc = 0x13b554u;
    // NOP
    // 0x13b558: 0x203082b  sltu        $at, $s0, $v1
    ctx->pc = 0x13b558u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x13b55c: 0x1420fff5  bnez        $at, . + 4 + (-0xB << 2)
    ctx->pc = 0x13B55Cu;
    {
        const bool branch_taken_0x13b55c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x13B560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B55Cu;
        // 0x13b560: 0x3c010155  lui         $at, 0x155 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)341 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b55c) {
            ctx->pc = 0x13B534u;
            return;
        }
    }
    ctx->pc = 0x13B564u;
}
