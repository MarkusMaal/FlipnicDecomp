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

// Function: entry_001e3884
// Address: 0x1e3884 - 0x1e3894
void entry_001e3884_0x1e3884(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e3884_0x1e3884");
#endif

    ctx->pc = 0x1e3884u;

    // 0x1e3884: 0x6810003  bgez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E3884u;
    {
        const bool branch_taken_0x1e3884 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x1E3888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3884u;
        // 0x1e3888: 0x14203c  dsll32      $a0, $s4, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3884) {
            ctx->pc = 0x1E3894u;
            return;
        }
    }
    ctx->pc = 0x1E388Cu;
    // 0x1e388c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1e388cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3890: 0x14203c  dsll32      $a0, $s4, 0
    ctx->pc = 0x1e3890u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) << (32 + 0));
    ctx->pc = 0x1e3894u;
}
