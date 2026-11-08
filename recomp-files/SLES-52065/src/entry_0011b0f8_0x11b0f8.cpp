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

// Function: entry_0011b0f8
// Address: 0x11b0f8 - 0x11b100
void entry_0011b0f8_0x11b0f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b0f8_0x11b0f8");
#endif

    ctx->pc = 0x11b0f8u;

    // 0x11b0f8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x11B0F8u;
    {
        const bool branch_taken_0x11b0f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B0F8u;
        // 0x11b0fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b0f8) {
            ctx->pc = 0x11B12Cu;
            return;
        }
    }
    ctx->pc = 0x11B100u;
}
