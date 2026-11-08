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

// Function: entry_00174230
// Address: 0x174230 - 0x174240
void entry_00174230_0x174230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174230_0x174230");
#endif

    ctx->pc = 0x174230u;

    // 0x174230: 0x3c02c0f0  lui         $v0, 0xC0F0
    ctx->pc = 0x174230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49392 << 16));
    // 0x174234: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x174234u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
    // 0x174238: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x174238u;
    {
        const bool branch_taken_0x174238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17423Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174238u;
        // 0x17423c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174238) {
            ctx->pc = 0x174318u;
            return;
        }
    }
    ctx->pc = 0x174240u;
}
